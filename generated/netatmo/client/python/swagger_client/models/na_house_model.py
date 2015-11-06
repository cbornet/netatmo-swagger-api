# coding: utf-8

"""
Copyright 2015 SmartBear Software

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.

    Ref: https://github.com/swagger-api/swagger-codegen
"""

from pprint import pformat
from six import iteritems


class NAHouseModel(object):
    """
    NOTE: This class is auto generated by the swagger code generator program.
    Do not edit the class manually.
    """
    def __init__(self):
        """
        NAHouseModel - a model defined in Swagger

        :param dict swaggerTypes: The key is attribute name
                                  and the value is attribute type.
        :param dict attributeMap: The key is attribute name
                                  and the value is json key in definition.
        """
        self.swagger_types = {
            'algo_type': 'str',
            'ca': 'NAHouseModelCa',
            'ext_temps': 'dict(str, int)',
            'first_anticipate_avail': 'bool',
            'first_pid_avail': 'bool',
            'gefs': 'NAStation',
            'in_use': 'str',
            'last_compute_try': 'NADate',
            'link_station': 'NALinkStation',
            'pid_algo': 'NAPidAlgo',
            'station': 'NAStation',
            'prefered_algo_type': 'str',
            'simple_algo': 'NASimpleAlgo',
            'time': 'NADate',
            'station_firsttime_anticipate': 'bool',
            'time_algo_changed': 'int',
            'time_pid_computed': 'int'
        }

        self.attribute_map = {
            'algo_type': 'algo_type',
            'ca': 'ca',
            'ext_temps': 'ext_temps',
            'first_anticipate_avail': 'first_anticipate_avail',
            'first_pid_avail': 'first_pid_avail',
            'gefs': 'gefs',
            'in_use': 'in_use',
            'last_compute_try': 'last_compute_try',
            'link_station': 'link_station',
            'pid_algo': 'pid_algo',
            'station': 'station',
            'prefered_algo_type': 'prefered_algo_type',
            'simple_algo': 'simple_algo',
            'time': 'time',
            'station_firsttime_anticipate': 'station_firsttime_anticipate',
            'time_algo_changed': 'time_algo_changed',
            'time_pid_computed': 'time_pid_computed'
        }

        self._algo_type = None
        self._ca = None
        self._ext_temps = None
        self._first_anticipate_avail = None
        self._first_pid_avail = None
        self._gefs = None
        self._in_use = None
        self._last_compute_try = None
        self._link_station = None
        self._pid_algo = None
        self._station = None
        self._prefered_algo_type = None
        self._simple_algo = None
        self._time = None
        self._station_firsttime_anticipate = None
        self._time_algo_changed = None
        self._time_pid_computed = None

    @property
    def algo_type(self):
        """
        Gets the algo_type of this NAHouseModel.


        :return: The algo_type of this NAHouseModel.
        :rtype: str
        """
        return self._algo_type

    @algo_type.setter
    def algo_type(self, algo_type):
        """
        Sets the algo_type of this NAHouseModel.


        :param algo_type: The algo_type of this NAHouseModel.
        :type: str
        """
        self._algo_type = algo_type

    @property
    def ca(self):
        """
        Gets the ca of this NAHouseModel.


        :return: The ca of this NAHouseModel.
        :rtype: NAHouseModelCa
        """
        return self._ca

    @ca.setter
    def ca(self, ca):
        """
        Sets the ca of this NAHouseModel.


        :param ca: The ca of this NAHouseModel.
        :type: NAHouseModelCa
        """
        self._ca = ca

    @property
    def ext_temps(self):
        """
        Gets the ext_temps of this NAHouseModel.


        :return: The ext_temps of this NAHouseModel.
        :rtype: dict(str, int)
        """
        return self._ext_temps

    @ext_temps.setter
    def ext_temps(self, ext_temps):
        """
        Sets the ext_temps of this NAHouseModel.


        :param ext_temps: The ext_temps of this NAHouseModel.
        :type: dict(str, int)
        """
        self._ext_temps = ext_temps

    @property
    def first_anticipate_avail(self):
        """
        Gets the first_anticipate_avail of this NAHouseModel.


        :return: The first_anticipate_avail of this NAHouseModel.
        :rtype: bool
        """
        return self._first_anticipate_avail

    @first_anticipate_avail.setter
    def first_anticipate_avail(self, first_anticipate_avail):
        """
        Sets the first_anticipate_avail of this NAHouseModel.


        :param first_anticipate_avail: The first_anticipate_avail of this NAHouseModel.
        :type: bool
        """
        self._first_anticipate_avail = first_anticipate_avail

    @property
    def first_pid_avail(self):
        """
        Gets the first_pid_avail of this NAHouseModel.


        :return: The first_pid_avail of this NAHouseModel.
        :rtype: bool
        """
        return self._first_pid_avail

    @first_pid_avail.setter
    def first_pid_avail(self, first_pid_avail):
        """
        Sets the first_pid_avail of this NAHouseModel.


        :param first_pid_avail: The first_pid_avail of this NAHouseModel.
        :type: bool
        """
        self._first_pid_avail = first_pid_avail

    @property
    def gefs(self):
        """
        Gets the gefs of this NAHouseModel.


        :return: The gefs of this NAHouseModel.
        :rtype: NAStation
        """
        return self._gefs

    @gefs.setter
    def gefs(self, gefs):
        """
        Sets the gefs of this NAHouseModel.


        :param gefs: The gefs of this NAHouseModel.
        :type: NAStation
        """
        self._gefs = gefs

    @property
    def in_use(self):
        """
        Gets the in_use of this NAHouseModel.


        :return: The in_use of this NAHouseModel.
        :rtype: str
        """
        return self._in_use

    @in_use.setter
    def in_use(self, in_use):
        """
        Sets the in_use of this NAHouseModel.


        :param in_use: The in_use of this NAHouseModel.
        :type: str
        """
        self._in_use = in_use

    @property
    def last_compute_try(self):
        """
        Gets the last_compute_try of this NAHouseModel.


        :return: The last_compute_try of this NAHouseModel.
        :rtype: NADate
        """
        return self._last_compute_try

    @last_compute_try.setter
    def last_compute_try(self, last_compute_try):
        """
        Sets the last_compute_try of this NAHouseModel.


        :param last_compute_try: The last_compute_try of this NAHouseModel.
        :type: NADate
        """
        self._last_compute_try = last_compute_try

    @property
    def link_station(self):
        """
        Gets the link_station of this NAHouseModel.


        :return: The link_station of this NAHouseModel.
        :rtype: NALinkStation
        """
        return self._link_station

    @link_station.setter
    def link_station(self, link_station):
        """
        Sets the link_station of this NAHouseModel.


        :param link_station: The link_station of this NAHouseModel.
        :type: NALinkStation
        """
        self._link_station = link_station

    @property
    def pid_algo(self):
        """
        Gets the pid_algo of this NAHouseModel.


        :return: The pid_algo of this NAHouseModel.
        :rtype: NAPidAlgo
        """
        return self._pid_algo

    @pid_algo.setter
    def pid_algo(self, pid_algo):
        """
        Sets the pid_algo of this NAHouseModel.


        :param pid_algo: The pid_algo of this NAHouseModel.
        :type: NAPidAlgo
        """
        self._pid_algo = pid_algo

    @property
    def station(self):
        """
        Gets the station of this NAHouseModel.


        :return: The station of this NAHouseModel.
        :rtype: NAStation
        """
        return self._station

    @station.setter
    def station(self, station):
        """
        Sets the station of this NAHouseModel.


        :param station: The station of this NAHouseModel.
        :type: NAStation
        """
        self._station = station

    @property
    def prefered_algo_type(self):
        """
        Gets the prefered_algo_type of this NAHouseModel.


        :return: The prefered_algo_type of this NAHouseModel.
        :rtype: str
        """
        return self._prefered_algo_type

    @prefered_algo_type.setter
    def prefered_algo_type(self, prefered_algo_type):
        """
        Sets the prefered_algo_type of this NAHouseModel.


        :param prefered_algo_type: The prefered_algo_type of this NAHouseModel.
        :type: str
        """
        self._prefered_algo_type = prefered_algo_type

    @property
    def simple_algo(self):
        """
        Gets the simple_algo of this NAHouseModel.


        :return: The simple_algo of this NAHouseModel.
        :rtype: NASimpleAlgo
        """
        return self._simple_algo

    @simple_algo.setter
    def simple_algo(self, simple_algo):
        """
        Sets the simple_algo of this NAHouseModel.


        :param simple_algo: The simple_algo of this NAHouseModel.
        :type: NASimpleAlgo
        """
        self._simple_algo = simple_algo

    @property
    def time(self):
        """
        Gets the time of this NAHouseModel.


        :return: The time of this NAHouseModel.
        :rtype: NADate
        """
        return self._time

    @time.setter
    def time(self, time):
        """
        Sets the time of this NAHouseModel.


        :param time: The time of this NAHouseModel.
        :type: NADate
        """
        self._time = time

    @property
    def station_firsttime_anticipate(self):
        """
        Gets the station_firsttime_anticipate of this NAHouseModel.


        :return: The station_firsttime_anticipate of this NAHouseModel.
        :rtype: bool
        """
        return self._station_firsttime_anticipate

    @station_firsttime_anticipate.setter
    def station_firsttime_anticipate(self, station_firsttime_anticipate):
        """
        Sets the station_firsttime_anticipate of this NAHouseModel.


        :param station_firsttime_anticipate: The station_firsttime_anticipate of this NAHouseModel.
        :type: bool
        """
        self._station_firsttime_anticipate = station_firsttime_anticipate

    @property
    def time_algo_changed(self):
        """
        Gets the time_algo_changed of this NAHouseModel.


        :return: The time_algo_changed of this NAHouseModel.
        :rtype: int
        """
        return self._time_algo_changed

    @time_algo_changed.setter
    def time_algo_changed(self, time_algo_changed):
        """
        Sets the time_algo_changed of this NAHouseModel.


        :param time_algo_changed: The time_algo_changed of this NAHouseModel.
        :type: int
        """
        self._time_algo_changed = time_algo_changed

    @property
    def time_pid_computed(self):
        """
        Gets the time_pid_computed of this NAHouseModel.


        :return: The time_pid_computed of this NAHouseModel.
        :rtype: int
        """
        return self._time_pid_computed

    @time_pid_computed.setter
    def time_pid_computed(self, time_pid_computed):
        """
        Sets the time_pid_computed of this NAHouseModel.


        :param time_pid_computed: The time_pid_computed of this NAHouseModel.
        :type: int
        """
        self._time_pid_computed = time_pid_computed

    def to_dict(self):
        """
        Returns the model properties as a dict
        """
        result = {}

        for attr, _ in iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            else:
                result[attr] = value

        return result

    def to_str(self):
        """
        Returns the string representation of the model
        """
        return pformat(self.to_dict())

    def __repr__(self):
        """
        For `print` and `pprint`
        """
        return self.to_str()