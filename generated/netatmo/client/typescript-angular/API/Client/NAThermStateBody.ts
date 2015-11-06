/// <reference path="api.d.ts" />

module API.Client {
    'use strict';

    export class NAThermStateBody {

        setpoint: NASetpoint;

        setpointOrder: NASetpoint;

        thermProgram: NAThermProgram;

        thermProgramBackup: Array<NAThermProgram>;

        thermProgramOrder: NAThermProgram;

        thermOrientation: number;

        thermRelayCmd: number;

        batteryVp: number;

        rfStatus: number;

        plugConnectedBoiler: boolean;

        udpConn: boolean;

        lastThermSeen: number;

        lastPlugSeen: number;

        wifiStatus: number;

        measured: NAThermMeasure;
    }

}