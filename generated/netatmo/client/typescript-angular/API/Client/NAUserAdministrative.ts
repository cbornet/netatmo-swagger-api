/// <reference path="api.d.ts" />

module API.Client {
    'use strict';

    export class NAUserAdministrative {

        /**
         * user country
         */
        country: string;

        /**
         * user locale
         */
        lang: string;

        /**
         * user regional preferences (used for displaying date)
         */
        regLocale: string;

        /**
         * 0 -> metric system, 1 -> imperial system
         */
        unit: string;

        /**
         * 0 -> kph, 1 -> mph, 2 -> ms, 3 -> beaufort, 4 -> knot
         */
        windunit: string;

        /**
         * 0 -> mbar, 1 -> inHg, 2 -> mmHg
         */
        pressureunit: string;

        /**
         * algorithm used to compute feel like temperature, 0 -> humidex, 1 -> heat-index
         */
        feelLikeAlgo: string;
    }

}