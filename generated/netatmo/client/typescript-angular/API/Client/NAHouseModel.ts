/// <reference path="api.d.ts" />

module API.Client {
    'use strict';

    export class NAHouseModel {

        algoType: string;

        ca: NAHouseModelCa;

        extTemps: { [key: string]: number; };

        firstAnticipateAvail: boolean;

        firstPidAvail: boolean;

        gefs: NAStation;

        inUse: string;

        lastComputeTry: NADate;

        linkStation: NALinkStation;

        pidAlgo: NAPidAlgo;

        station: NAStation;

        preferedAlgoType: string;

        simpleAlgo: NASimpleAlgo;

        time: NADate;

        stationFirsttimeAnticipate: boolean;

        timeAlgoChanged: number;

        timePidComputed: number;
    }

}