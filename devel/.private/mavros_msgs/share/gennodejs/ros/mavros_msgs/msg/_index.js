
"use strict";

let State = require('./State.js');
let Waypoint = require('./Waypoint.js');
let Mavlink = require('./Mavlink.js');
let RCOut = require('./RCOut.js');
let LogData = require('./LogData.js');
let LogEntry = require('./LogEntry.js');
let MountControl = require('./MountControl.js');
let CommandCode = require('./CommandCode.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let StatusText = require('./StatusText.js');
let RTCM = require('./RTCM.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let Altitude = require('./Altitude.js');
let RadioStatus = require('./RadioStatus.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let WaypointList = require('./WaypointList.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let ParamValue = require('./ParamValue.js');
let Trajectory = require('./Trajectory.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let ActuatorControl = require('./ActuatorControl.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let ManualControl = require('./ManualControl.js');
let HilGPS = require('./HilGPS.js');
let Vibration = require('./Vibration.js');
let Param = require('./Param.js');
let HilActuatorControls = require('./HilActuatorControls.js');
let BatteryStatus = require('./BatteryStatus.js');
let VFR_HUD = require('./VFR_HUD.js');
let LandingTarget = require('./LandingTarget.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let PositionTarget = require('./PositionTarget.js');
let HomePosition = require('./HomePosition.js');
let RCIn = require('./RCIn.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let HilControls = require('./HilControls.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let Thrust = require('./Thrust.js');
let FileEntry = require('./FileEntry.js');
let HilSensor = require('./HilSensor.js');
let ExtendedState = require('./ExtendedState.js');
let DebugValue = require('./DebugValue.js');
let WaypointReached = require('./WaypointReached.js');
let VehicleInfo = require('./VehicleInfo.js');

module.exports = {
  State: State,
  Waypoint: Waypoint,
  Mavlink: Mavlink,
  RCOut: RCOut,
  LogData: LogData,
  LogEntry: LogEntry,
  MountControl: MountControl,
  CommandCode: CommandCode,
  TimesyncStatus: TimesyncStatus,
  StatusText: StatusText,
  RTCM: RTCM,
  GlobalPositionTarget: GlobalPositionTarget,
  Altitude: Altitude,
  RadioStatus: RadioStatus,
  HilStateQuaternion: HilStateQuaternion,
  OnboardComputerStatus: OnboardComputerStatus,
  WaypointList: WaypointList,
  WheelOdomStamped: WheelOdomStamped,
  ParamValue: ParamValue,
  Trajectory: Trajectory,
  OverrideRCIn: OverrideRCIn,
  ActuatorControl: ActuatorControl,
  CompanionProcessStatus: CompanionProcessStatus,
  ManualControl: ManualControl,
  HilGPS: HilGPS,
  Vibration: Vibration,
  Param: Param,
  HilActuatorControls: HilActuatorControls,
  BatteryStatus: BatteryStatus,
  VFR_HUD: VFR_HUD,
  LandingTarget: LandingTarget,
  AttitudeTarget: AttitudeTarget,
  PositionTarget: PositionTarget,
  HomePosition: HomePosition,
  RCIn: RCIn,
  ADSBVehicle: ADSBVehicle,
  HilControls: HilControls,
  OpticalFlowRad: OpticalFlowRad,
  CamIMUStamp: CamIMUStamp,
  Thrust: Thrust,
  FileEntry: FileEntry,
  HilSensor: HilSensor,
  ExtendedState: ExtendedState,
  DebugValue: DebugValue,
  WaypointReached: WaypointReached,
  VehicleInfo: VehicleInfo,
};
