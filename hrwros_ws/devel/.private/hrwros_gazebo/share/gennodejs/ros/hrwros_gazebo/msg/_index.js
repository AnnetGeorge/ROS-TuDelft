
"use strict";

let KitObject = require('./KitObject.js');
let Kit = require('./Kit.js');
let Model = require('./Model.js');
let LogicalCameraImage = require('./LogicalCameraImage.js');
let StorageUnit = require('./StorageUnit.js');
let PopulationState = require('./PopulationState.js');
let VacuumGripperState = require('./VacuumGripperState.js');
let KitTray = require('./KitTray.js');
let Order = require('./Order.js');
let TrayContents = require('./TrayContents.js');
let DetectedObject = require('./DetectedObject.js');
let ConveyorBeltState = require('./ConveyorBeltState.js');
let Proximity = require('./Proximity.js');

module.exports = {
  KitObject: KitObject,
  Kit: Kit,
  Model: Model,
  LogicalCameraImage: LogicalCameraImage,
  StorageUnit: StorageUnit,
  PopulationState: PopulationState,
  VacuumGripperState: VacuumGripperState,
  KitTray: KitTray,
  Order: Order,
  TrayContents: TrayContents,
  DetectedObject: DetectedObject,
  ConveyorBeltState: ConveyorBeltState,
  Proximity: Proximity,
};
