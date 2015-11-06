/// <reference path="api.d.ts" />

module API.Client {
    'use strict';

    export class NAPlace {

        city: string;

        altitude: number;

        country: string;

        fromIp: boolean;

        improveLocProposed: boolean;

        location: Array<number>;

        timezone: string;

        trustLocation: boolean;
    }

}