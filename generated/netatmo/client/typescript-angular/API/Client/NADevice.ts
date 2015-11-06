/// <reference path="api.d.ts" />

module API.Client {
    'use strict';

    export class NADevice {

        id: string;

        behavior: number;

        cipherId: string;

        dateSetup: NADate;

        firmware: number;

        hwVersion: number;

        heatingSystem: NAHeatingSystem;

        houseModel: NAHouseModel;

        ip: string;

        lastFwUpdate: number;

        lastRadioStore: number;

        lastStatusStore: number;

        lastUpgrade: number;

        moduleName: string;

        /**
         * It lists which modules are linked with this device
         */
        modules: Array<string>;

        place: NAPlace;

        setpoint: any;

        setpointDefaultDuration: number;

        setpointOrder: { [key: string]: Array<NAObject>; };

        publicExtData: boolean;

        stationName: string;

        thermProgram: { [key: string]: NAThermProgram; };

        thermProgramBackup: { [key: string]: Array<NAThermProgram>; };

        thermProgramOrder: { [key: string]: Array<NAObject>; };

        /**
         * Included in every device or module. It defines the type of the device/module. Its values are among :\nNAMain : for the base station\nNAModule1 : for the outdoor module\nNAModule4 : for the additionnal indoor module\nNAModule3 : for the rain gauge module\nNAPlug : for the thermostat relay/plug\nNATherm1 : for the thermostat module
         */
        type: string;

        userOwner: Array<string>;

        udpConn: boolean;

        /**
         * It contains the current wifi status. The different thresholds to take into account are\nRSSI_THRESHOLD_0 = 86 bad signal\nRSSI_THRESHOLD_1 = 71 middle quality signal\nRSSI_THRESHOLD_2 = 56 good signal
         */
        wifiStatus: number;

        newFeatureAvail: boolean;

        firstPidAvail: boolean;

        dataType: Array<string>;
    }

}