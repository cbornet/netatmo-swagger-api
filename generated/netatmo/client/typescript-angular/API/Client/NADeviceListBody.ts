/// <reference path="api.d.ts" />

module API.Client {
    'use strict';

    export class NADeviceListBody {

        devices: Array<NADevice>;

        modules: Array<NAModule>;
    }

}