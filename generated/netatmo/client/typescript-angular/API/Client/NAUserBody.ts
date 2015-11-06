/// <reference path="api.d.ts" />

module API.Client {
    'use strict';

    export class NAUserBody {

        id: string;

        /**
         * Contains administrative information related to the user
         */
        administrative: NAUserAdministrative;

        dateCreation: NADate;

        /**
         * An array of string containing the ids of the devices owned by the user
         */
        devices: Array<string>;

        /**
         * An array of string containing the ids of the devices on which the user has a \"guest\" access
         */
        friendDevices: Array<string>;

        mail: string;

        timelineNotRead: number;

        timelineSize: number;
    }

}