/// <reference path="api.d.ts" />

module API.Client {
    'use strict';

    export class NAThermProgram {

        programId: string;

        name: string;

        zones: Array<NAZone>;

        timetable: Array<NATimeTableItem>;

        selected: boolean;
    }

}