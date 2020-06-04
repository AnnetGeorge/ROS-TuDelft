
"use strict";

let ConveyorBeltControl = require('./ConveyorBeltControl.js')
let GetMaterialLocations = require('./GetMaterialLocations.js')
let AGVControl = require('./AGVControl.js')
let SubmitTray = require('./SubmitTray.js')
let PopulationControl = require('./PopulationControl.js')
let VacuumGripperControl = require('./VacuumGripperControl.js')

module.exports = {
  ConveyorBeltControl: ConveyorBeltControl,
  GetMaterialLocations: GetMaterialLocations,
  AGVControl: AGVControl,
  SubmitTray: SubmitTray,
  PopulationControl: PopulationControl,
  VacuumGripperControl: VacuumGripperControl,
};
