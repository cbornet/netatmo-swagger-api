/// <reference path="api.d.ts" />

module API.Client {
    'use strict';

    export class NAMeasureResponse extends NAResponse {

        body: Array<NAMeasureBodyElem>;
    }

}