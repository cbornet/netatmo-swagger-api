/// <reference path="api.d.ts" />

module API.Client {
    'use strict';

    export class AccessToken {

        accessToken: string;

        refreshToken: string;

        expireIn: number;

        expiresIn: number;

        scope: Array<string>;
    }

}