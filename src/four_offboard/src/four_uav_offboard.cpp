

#include <ros/ros.h>
#include <geometry_msgs/PoseStamped.h>
#include <mavros_msgs/CommandBool.h>
#include <mavros_msgs/SetMode.h>
#include <mavros_msgs/State.h>
#include <mavros_msgs/VFR_HUD.h>
#include <mavros_msgs/PositionTarget.h>
#include <mavros_msgs/DebugValue.h>
#include <geometry_msgs/TwistStamped.h>
#include "math.h"
#include <sensor_msgs/NavSatFix.h>

mavros_msgs:: VFR_HUD current_vfr_hud;
float curr_altitude;

mavros_msgs::State uav1_current_state;
mavros_msgs::State uav2_current_state;
mavros_msgs::State uav3_current_state;
mavros_msgs::State uav4_current_state;

void uav1_state_cb(const mavros_msgs::State::ConstPtr& msg){
    uav1_current_state = *msg;
}

void uav2_state_cb(const mavros_msgs::State::ConstPtr& msg){
    uav2_current_state = *msg;
}

void uav3_state_cb(const mavros_msgs::State::ConstPtr& msg){
    uav3_current_state = *msg;
}

void uav4_state_cb(const mavros_msgs::State::ConstPtr& msg){
    uav4_current_state = *msg;
}

void vrf_hud_cb(const mavros_msgs::VFR_HUD::ConstPtr& msg){
    current_vfr_hud = *msg;
//    curr_altitude = current_vfr_hud.altitude;
//    ROS_INFO("altitude = %d",  current_vfr_hud.altitude);
}

geometry_msgs::PoseStamped uav1_current_local_pos;
void uav1_local_pos_cb(const geometry_msgs::PoseStamped::ConstPtr& msg){
    uav1_current_local_pos = *msg;
    curr_altitude = uav1_current_local_pos.pose.position.z;
//    ROS_INFO("pose.z = %.2f", current_local_pos.pose.position.z);
}

geometry_msgs::PoseStamped uav2_current_local_pos;
void uav2_local_pos_cb(const geometry_msgs::PoseStamped::ConstPtr& msg){
    uav2_current_local_pos = *msg;
    curr_altitude = uav2_current_local_pos.pose.position.z;
//    ROS_INFO("pose.z = %.2f", current_local_pos.pose.position.z);
}

geometry_msgs::PoseStamped uav3_current_local_pos;
void uav3_local_pos_cb(const geometry_msgs::PoseStamped::ConstPtr& msg){
    uav3_current_local_pos = *msg;
    curr_altitude = uav3_current_local_pos.pose.position.z;
//    ROS_INFO("pose.z = %.2f", current_local_pos.pose.position.z);
}

geometry_msgs::PoseStamped uav4_current_local_pos;
void uav4_local_pos_cb(const geometry_msgs::PoseStamped::ConstPtr& msg){
    uav4_current_local_pos = *msg;
    curr_altitude = uav4_current_local_pos.pose.position.z;
//    ROS_INFO("pose.z = %.2f", current_local_pos.pose.position.z);
}

bool pos_reached(geometry_msgs::PoseStamped current_pos, geometry_msgs::PoseStamped target_pos){
    float err_px = current_pos.pose.position.x - target_pos.pose.position.x;
    float err_py = current_pos.pose.position.y - target_pos.pose.position.y;
    float err_pz = current_pos.pose.position.z - target_pos.pose.position.z;

    return sqrt(err_px * err_px + err_py * err_py + err_pz * err_pz) < 2.0f;
}


int main(int argc, char **argv)
{
    ros::init(argc, argv, "four_offboard");
    ros::NodeHandle nh;

    ros::Subscriber uav1_state_sub = nh.subscribe<mavros_msgs::State>
            ("uav1/mavros/state", 10, uav1_state_cb);
    ros::Subscriber uav2_state_sub = nh.subscribe<mavros_msgs::State>
            ("uav2/mavros/state", 10, uav2_state_cb);
    ros::Subscriber uav3_state_sub = nh.subscribe<mavros_msgs::State>
            ("uav3/mavros/state", 10, uav3_state_cb);
    ros::Subscriber uav4_state_sub = nh.subscribe<mavros_msgs::State>
            ("uav4/mavros/state", 10, uav4_state_cb);

    ros::Subscriber uav1_vfr_hud_sub = nh.subscribe<mavros_msgs::VFR_HUD>
            ("uav1/mavros/vfr_hud", 10, vrf_hud_cb);
    ros::Publisher uav1_gps_global_pos_pub = nh.advertise<sensor_msgs::NavSatFix>
            ("uav1/mavros/global_position/raw/fix", 1000);
    ros::Publisher uav1_global_pos_pub = nh.advertise<sensor_msgs::NavSatFix>
            ("uav1/mavros/global_position/global", 1000);
    ros::Publisher uav1_g_speed_control_pub = nh.advertise<geometry_msgs::TwistStamped>
            ("uav1/mavros/setpoint_velocity/cmd_vel", 100);


    ros::ServiceClient uav1_set_mode_client = nh.serviceClient<mavros_msgs::SetMode>
            ("uav1/mavros/set_mode");
    ros::ServiceClient uav1_arming_client = nh.serviceClient<mavros_msgs::CommandBool>
            ("uav1/mavros/cmd/arming");
    ros::Publisher uav1_local_pos_pub = nh.advertise<geometry_msgs::PoseStamped>
            ("uav1/mavros/setpoint_position/local", 5);
    ros::Subscriber uav1_local_position_sub = nh.subscribe<geometry_msgs::PoseStamped>
            ("uav1/mavros/local_position/pose", 10, uav1_local_pos_cb);

    ros::ServiceClient uav2_set_mode_client = nh.serviceClient<mavros_msgs::SetMode>
            ("uav2/mavros/set_mode");
    ros::ServiceClient uav2_arming_client = nh.serviceClient<mavros_msgs::CommandBool>
            ("uav2/mavros/cmd/arming");
    ros::Publisher uav2_local_pos_pub = nh.advertise<geometry_msgs::PoseStamped>
            ("uav2/mavros/setpoint_position/local", 5);
    ros::Subscriber uav2_local_position_sub = nh.subscribe<geometry_msgs::PoseStamped>
            ("uav2/mavros/local_position/pose", 10, uav2_local_pos_cb);
//    uav2_local_pos_sp_sub = nh.subscribe<mavros_msgs::PositionTarget>
//            ("uav2/mavros/setpoint_raw/target_local", 10,uav2_local_pos_sp_cb);
//    uav2_multi_formation_sub = nh.subscribe<mavros_msgs::DebugValue>
//            ("uav2/mavros/debug_value/debug_vector", 10, uav2_debug_value_cb);

    ros::ServiceClient uav3_set_mode_client = nh.serviceClient<mavros_msgs::SetMode>
            ("uav3/mavros/set_mode");
    ros::ServiceClient uav3_arming_client = nh.serviceClient<mavros_msgs::CommandBool>
            ("uav3/mavros/cmd/arming");
    ros::Publisher uav3_local_pos_pub = nh.advertise<geometry_msgs::PoseStamped>
            ("uav3/mavros/setpoint_position/local", 5);
    ros::Subscriber uav3_local_position_sub = nh.subscribe<geometry_msgs::PoseStamped>
            ("uav3/mavros/local_position/pose", 10, uav3_local_pos_cb);

    ros::ServiceClient uav4_set_mode_client = nh.serviceClient<mavros_msgs::SetMode>
            ("uav4/mavros/set_mode");
    ros::ServiceClient uav4_arming_client = nh.serviceClient<mavros_msgs::CommandBool>
            ("uav4/mavros/cmd/arming");
    ros::Publisher uav4_local_pos_pub = nh.advertise<geometry_msgs::PoseStamped>
            ("uav4/mavros/setpoint_position/local", 5);
    ros::Subscriber uav4_local_position_sub = nh.subscribe<geometry_msgs::PoseStamped>
            ("uav4/mavros/local_position/pose", 10, uav4_local_pos_cb);

//    ros::Subscriber state_sub = nh.subscribe<mavros_msgs::State>
//            ("mavros/state", 10, state_cb);
//    ros::Publisher local_pos_pub = nh.advertise<geometry_msgs::PoseStamped>
//            ("mavros/setpoint_position/local", 10);
//    ros::ServiceClient arming_client = nh.serviceClient<mavros_msgs::CommandBool>
//            ("mavros/cmd/arming");
//    ros::ServiceClient set_mode_client = nh.serviceClient<mavros_msgs::SetMode>
//            ("mavros/set_mode");
//    ros::Subscriber vfr_hud_sub = nh.subscribe<mavros_msgs::VFR_HUD>
//            ("mavros/vfr_hud", 10, vrf_hud_cb);
//    ros::Subscriber local_position_sub = nh.subscribe<geometry_msgs::PoseStamped>
//            ("mavros/local_position/pose", 10, local_pos_cb);
//    ros::Publisher gps_global_pos_pub = nh.advertise<sensor_msgs::NavSatFix>
//            ("mavros/global_position/raw/fix", 1000);
//    ros::Publisher global_pos_pub = nh.advertise<sensor_msgs::NavSatFix>
//            ("mavros/global_position/global", 1000);
//    ros::Publisher g_speed_control_pub = nh.advertise<geometry_msgs::TwistStamped>
//            ("/mavros/setpoint_velocity/cmd_vel", 100);

    //the setpoint publishing rate MUST be faster than 2Hz
    ros::Rate rate(20.0);

    // wait for FCU connection
    while(ros::ok() && !uav1_current_state.connected && !uav2_current_state.connected && !uav3_current_state.connected && !uav4_current_state.connected){
        ros::spinOnce();
        rate.sleep();
    }

    geometry_msgs::PoseStamped pose;
    pose.pose.position.x = 0;
    pose.pose.position.y = 0;
    pose.pose.position.z = 5;

    std::vector<geometry_msgs::PoseStamped> usv_way_points;
    geometry_msgs::PoseStamped way_point;

    way_point.pose.position.x = 0;
    way_point.pose.position.y = 0;
    way_point.pose.position.z = 10;
    usv_way_points.push_back(way_point);

    way_point.pose.position.x = 15;
    way_point.pose.position.y = 20;
    way_point.pose.position.z = 10;
    usv_way_points.push_back(way_point);

    way_point.pose.position.x = -15;
    way_point.pose.position.y = 20;
    way_point.pose.position.z = 10;
    usv_way_points.push_back(way_point);

    way_point.pose.position.x = -15;
    way_point.pose.position.y = -20;
    way_point.pose.position.z = 10;
    usv_way_points.push_back(way_point);

    way_point.pose.position.x = 0;
    way_point.pose.position.y = 0;
    way_point.pose.position.z = 10;
    usv_way_points.push_back(way_point);

    way_point.pose.position.x = 0;
    way_point.pose.position.y = 0;
    way_point.pose.position.z = 0;
    usv_way_points.push_back(way_point);

    std::reverse(usv_way_points.begin(), usv_way_points.end());


    geometry_msgs::TwistStamped vel_cmd;
    vel_cmd.twist.linear.x = 1;
    vel_cmd.twist.linear.y = 1;
    vel_cmd.twist.linear.z = 1;

    vel_cmd.twist.angular.x = 0.1;
    vel_cmd.twist.angular.y = 0.2;
    vel_cmd.twist.angular.z = 0.5;




    //send a few setpoints before starting
    for(int i = 100; ros::ok() && i > 0; --i){
        uav1_local_pos_pub.publish(pose);
        uav2_local_pos_pub.publish(pose);
        uav3_local_pos_pub.publish(pose);
        uav4_local_pos_pub.publish(pose);
        ros::spinOnce();
        rate.sleep();
    }





    mavros_msgs::SetMode offb_set_mode;
    offb_set_mode.request.custom_mode = "OFFBOARD";

    mavros_msgs::CommandBool arm_cmd;
    arm_cmd.request.value = true;

    ros::Time last_request = ros::Time::now();

    while(ros::ok()){
        if( (uav1_current_state.mode != "OFFBOARD" ) || (uav2_current_state.mode != "OFFBOARD" ) ||
        (uav3_current_state.mode != "OFFBOARD" ) || (uav4_current_state.mode != "OFFBOARD" ) &&
        (ros::Time::now() - last_request > ros::Duration(5.0))){
            if( uav1_set_mode_client.call(offb_set_mode) &&
                offb_set_mode.response.mode_sent){
                uav2_set_mode_client.call(offb_set_mode);
                uav3_set_mode_client.call(offb_set_mode);
                uav4_set_mode_client.call(offb_set_mode);
                ROS_INFO("Offboard enabled");
            }
            last_request = ros::Time::now();
        } else {
            if( !uav1_current_state.armed || !uav2_current_state.armed ||
            !uav3_current_state.armed || !uav4_current_state.armed &&
                (ros::Time::now() - last_request > ros::Duration(5.0))){
                if( uav1_arming_client.call(arm_cmd) &&
                    arm_cmd.response.success){
                    uav2_arming_client.call(arm_cmd);
                    uav3_arming_client.call(arm_cmd);
                    uav4_arming_client.call(arm_cmd);
                    ROS_INFO("Vehicle armed");
                }
                last_request = ros::Time::now();
            }
        }


        if (!usv_way_points.empty()) {
            way_point = usv_way_points.back();
            if (pos_reached(uav1_current_local_pos, usv_way_points.back())) {
                ROS_INFO("Finished one way point = (%.2f, %.2f, %.2f)",
                         usv_way_points.back().pose.position.x, usv_way_points.back().pose.position.y,
                         usv_way_points.back().pose.position.z);
                usv_way_points.pop_back();

                if (!usv_way_points.empty()) {
                    ROS_INFO("Goto next way point = (%.2f, %.2f, %.2f)",
                             usv_way_points.back().pose.position.x, usv_way_points.back().pose.position.y,
                             usv_way_points.back().pose.position.z);
                } else {
                    ROS_INFO("Finish all target points!");
                }
            }
        }


        uav1_local_pos_pub.publish(way_point);
        uav2_local_pos_pub.publish(way_point);
        uav3_local_pos_pub.publish(way_point);
        uav4_local_pos_pub.publish(way_point);

        ros::spinOnce();
        rate.sleep();
    }

    return 0;
}
