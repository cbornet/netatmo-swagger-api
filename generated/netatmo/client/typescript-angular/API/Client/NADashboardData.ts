/// <reference path="api.d.ts" />

module API.Client {
    'use strict';

    export class NADashboardData {

        timeUtc: number;

        deviceId: number;

        boilerOn: number;

        boilerOff: number;

        /**
         * Last temperature measure @ time_utc (in °C)
         */
        temperature: number;

        /**
         * Timestamp when max temperature was measured
         */
        dateMaxTemp: number;

        /**
         * Timestamp when min temperature was measured
         */
        dateMinTemp: number;

        /**
         * Max temperature of the day (measured @ date_max_temp)
         */
        minTemp: number;

        /**
         * Min temperature of the day (measured @ date_min_temp)
         */
        maxTemp: number;

        /**
         * Real measured pressure @ time_utc (in mb)
         */
        absolutePressure: number;

        /**
         * Last Co2 measured @ time_utc (in ppm)
         */
        cO2: number;

        /**
         * Last humidity measured @ time_utc (in %)
         */
        humidity: number;

        /**
         * Last noise measured @ time_utc (in db)
         */
        noise: number;

        /**
         * Last Sea level pressure measured @ time_utc (in mb)
         */
        pressure: number;

        /**
         * Last rain measured (in mm)
         */
        rain: number;

        /**
         * Amount of rain in last hour
         */
        sumRain1: number;

        /**
         * Amount of rain today
         */
        sumRain24: number;
    }

}