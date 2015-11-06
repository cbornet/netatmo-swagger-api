<?php
/**
 * NADashboardData
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   http://github.com/swagger-api/swagger-codegen
 * @license  http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link     https://github.com/swagger-api/swagger-codegen
 */
/**
 *  Copyright 2015 SmartBear Software
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */
/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Model;

use \ArrayAccess;
/**
 * NADashboardData Class Doc Comment
 *
 * @category    Class
 * @description 
 * @package     Swagger\Client
 * @author      http://github.com/swagger-api/swagger-codegen
 * @license     http://www.apache.org/licenses/LICENSE-2.0 Apache Licene v2
 * @link        https://github.com/swagger-api/swagger-codegen
 */
class NADashboardData implements ArrayAccess
{
    /**
      * Array of property to type mappings. Used for (de)serialization 
      * @var string[]
      */
    static $swaggerTypes = array(
        'time_utc' => 'int',
        'device_id' => 'float',
        'boiler_on' => 'int',
        'boiler_off' => 'int',
        'temperature' => 'float',
        'date_max_temp' => 'int',
        'date_min_temp' => 'int',
        'min_temp' => 'float',
        'max_temp' => 'float',
        'absolute_pressure' => 'float',
        'co2' => 'float',
        'humidity' => 'float',
        'noise' => 'float',
        'pressure' => 'float',
        'rain' => 'int',
        'sum_rain_1' => 'int',
        'sum_rain_24' => 'int'
    );
  
    /** 
      * Array of attributes where the key is the local name, and the value is the original name
      * @var string[] 
      */
    static $attributeMap = array(
        'time_utc' => 'time_utc',
        'device_id' => 'device_id',
        'boiler_on' => 'BoilerOn',
        'boiler_off' => 'BoilerOff',
        'temperature' => 'Temperature',
        'date_max_temp' => 'date_max_temp',
        'date_min_temp' => 'date_min_temp',
        'min_temp' => 'min_temp',
        'max_temp' => 'max_temp',
        'absolute_pressure' => 'AbsolutePressure',
        'co2' => 'CO2',
        'humidity' => 'Humidity',
        'noise' => 'Noise',
        'pressure' => 'Pressure',
        'rain' => 'Rain',
        'sum_rain_1' => 'sum_rain_1',
        'sum_rain_24' => 'sum_rain_24'
    );
  
    /**
      * Array of attributes to setter functions (for deserialization of responses)
      * @var string[]
      */
    static $setters = array(
        'time_utc' => 'setTimeUtc',
        'device_id' => 'setDeviceId',
        'boiler_on' => 'setBoilerOn',
        'boiler_off' => 'setBoilerOff',
        'temperature' => 'setTemperature',
        'date_max_temp' => 'setDateMaxTemp',
        'date_min_temp' => 'setDateMinTemp',
        'min_temp' => 'setMinTemp',
        'max_temp' => 'setMaxTemp',
        'absolute_pressure' => 'setAbsolutePressure',
        'co2' => 'setCo2',
        'humidity' => 'setHumidity',
        'noise' => 'setNoise',
        'pressure' => 'setPressure',
        'rain' => 'setRain',
        'sum_rain_1' => 'setSumRain1',
        'sum_rain_24' => 'setSumRain24'
    );
  
    /**
      * Array of attributes to getter functions (for serialization of requests)
      * @var string[]
      */
    static $getters = array(
        'time_utc' => 'getTimeUtc',
        'device_id' => 'getDeviceId',
        'boiler_on' => 'getBoilerOn',
        'boiler_off' => 'getBoilerOff',
        'temperature' => 'getTemperature',
        'date_max_temp' => 'getDateMaxTemp',
        'date_min_temp' => 'getDateMinTemp',
        'min_temp' => 'getMinTemp',
        'max_temp' => 'getMaxTemp',
        'absolute_pressure' => 'getAbsolutePressure',
        'co2' => 'getCo2',
        'humidity' => 'getHumidity',
        'noise' => 'getNoise',
        'pressure' => 'getPressure',
        'rain' => 'getRain',
        'sum_rain_1' => 'getSumRain1',
        'sum_rain_24' => 'getSumRain24'
    );
  
    
    /**
      * $time_utc 
      * @var int
      */
    protected $time_utc;
    
    /**
      * $device_id 
      * @var float
      */
    protected $device_id;
    
    /**
      * $boiler_on 
      * @var int
      */
    protected $boiler_on;
    
    /**
      * $boiler_off 
      * @var int
      */
    protected $boiler_off;
    
    /**
      * $temperature Last temperature measure @ time_utc (in °C)
      * @var float
      */
    protected $temperature;
    
    /**
      * $date_max_temp Timestamp when max temperature was measured
      * @var int
      */
    protected $date_max_temp;
    
    /**
      * $date_min_temp Timestamp when min temperature was measured
      * @var int
      */
    protected $date_min_temp;
    
    /**
      * $min_temp Max temperature of the day (measured @ date_max_temp)
      * @var float
      */
    protected $min_temp;
    
    /**
      * $max_temp Min temperature of the day (measured @ date_min_temp)
      * @var float
      */
    protected $max_temp;
    
    /**
      * $absolute_pressure Real measured pressure @ time_utc (in mb)
      * @var float
      */
    protected $absolute_pressure;
    
    /**
      * $co2 Last Co2 measured @ time_utc (in ppm)
      * @var float
      */
    protected $co2;
    
    /**
      * $humidity Last humidity measured @ time_utc (in %)
      * @var float
      */
    protected $humidity;
    
    /**
      * $noise Last noise measured @ time_utc (in db)
      * @var float
      */
    protected $noise;
    
    /**
      * $pressure Last Sea level pressure measured @ time_utc (in mb)
      * @var float
      */
    protected $pressure;
    
    /**
      * $rain Last rain measured (in mm)
      * @var int
      */
    protected $rain;
    
    /**
      * $sum_rain_1 Amount of rain in last hour
      * @var int
      */
    protected $sum_rain_1;
    
    /**
      * $sum_rain_24 Amount of rain today
      * @var int
      */
    protected $sum_rain_24;
    

    /**
     * Constructor
     * @param mixed[] $data Associated array of property value initalizing the model
     */
    public function __construct(array $data = null)
    {
        if ($data != null) {
            $this->time_utc = $data["time_utc"];
            $this->device_id = $data["device_id"];
            $this->boiler_on = $data["boiler_on"];
            $this->boiler_off = $data["boiler_off"];
            $this->temperature = $data["temperature"];
            $this->date_max_temp = $data["date_max_temp"];
            $this->date_min_temp = $data["date_min_temp"];
            $this->min_temp = $data["min_temp"];
            $this->max_temp = $data["max_temp"];
            $this->absolute_pressure = $data["absolute_pressure"];
            $this->co2 = $data["co2"];
            $this->humidity = $data["humidity"];
            $this->noise = $data["noise"];
            $this->pressure = $data["pressure"];
            $this->rain = $data["rain"];
            $this->sum_rain_1 = $data["sum_rain_1"];
            $this->sum_rain_24 = $data["sum_rain_24"];
        }
    }
    
    /**
     * Gets time_utc
     * @return int
     */
    public function getTimeUtc()
    {
        return $this->time_utc;
    }
  
    /**
     * Sets time_utc
     * @param int $time_utc 
     * @return $this
     */
    public function setTimeUtc($time_utc)
    {
        
        $this->time_utc = $time_utc;
        return $this;
    }
    
    /**
     * Gets device_id
     * @return float
     */
    public function getDeviceId()
    {
        return $this->device_id;
    }
  
    /**
     * Sets device_id
     * @param float $device_id 
     * @return $this
     */
    public function setDeviceId($device_id)
    {
        
        $this->device_id = $device_id;
        return $this;
    }
    
    /**
     * Gets boiler_on
     * @return int
     */
    public function getBoilerOn()
    {
        return $this->boiler_on;
    }
  
    /**
     * Sets boiler_on
     * @param int $boiler_on 
     * @return $this
     */
    public function setBoilerOn($boiler_on)
    {
        
        $this->boiler_on = $boiler_on;
        return $this;
    }
    
    /**
     * Gets boiler_off
     * @return int
     */
    public function getBoilerOff()
    {
        return $this->boiler_off;
    }
  
    /**
     * Sets boiler_off
     * @param int $boiler_off 
     * @return $this
     */
    public function setBoilerOff($boiler_off)
    {
        
        $this->boiler_off = $boiler_off;
        return $this;
    }
    
    /**
     * Gets temperature
     * @return float
     */
    public function getTemperature()
    {
        return $this->temperature;
    }
  
    /**
     * Sets temperature
     * @param float $temperature Last temperature measure @ time_utc (in °C)
     * @return $this
     */
    public function setTemperature($temperature)
    {
        
        $this->temperature = $temperature;
        return $this;
    }
    
    /**
     * Gets date_max_temp
     * @return int
     */
    public function getDateMaxTemp()
    {
        return $this->date_max_temp;
    }
  
    /**
     * Sets date_max_temp
     * @param int $date_max_temp Timestamp when max temperature was measured
     * @return $this
     */
    public function setDateMaxTemp($date_max_temp)
    {
        
        $this->date_max_temp = $date_max_temp;
        return $this;
    }
    
    /**
     * Gets date_min_temp
     * @return int
     */
    public function getDateMinTemp()
    {
        return $this->date_min_temp;
    }
  
    /**
     * Sets date_min_temp
     * @param int $date_min_temp Timestamp when min temperature was measured
     * @return $this
     */
    public function setDateMinTemp($date_min_temp)
    {
        
        $this->date_min_temp = $date_min_temp;
        return $this;
    }
    
    /**
     * Gets min_temp
     * @return float
     */
    public function getMinTemp()
    {
        return $this->min_temp;
    }
  
    /**
     * Sets min_temp
     * @param float $min_temp Max temperature of the day (measured @ date_max_temp)
     * @return $this
     */
    public function setMinTemp($min_temp)
    {
        
        $this->min_temp = $min_temp;
        return $this;
    }
    
    /**
     * Gets max_temp
     * @return float
     */
    public function getMaxTemp()
    {
        return $this->max_temp;
    }
  
    /**
     * Sets max_temp
     * @param float $max_temp Min temperature of the day (measured @ date_min_temp)
     * @return $this
     */
    public function setMaxTemp($max_temp)
    {
        
        $this->max_temp = $max_temp;
        return $this;
    }
    
    /**
     * Gets absolute_pressure
     * @return float
     */
    public function getAbsolutePressure()
    {
        return $this->absolute_pressure;
    }
  
    /**
     * Sets absolute_pressure
     * @param float $absolute_pressure Real measured pressure @ time_utc (in mb)
     * @return $this
     */
    public function setAbsolutePressure($absolute_pressure)
    {
        
        $this->absolute_pressure = $absolute_pressure;
        return $this;
    }
    
    /**
     * Gets co2
     * @return float
     */
    public function getCo2()
    {
        return $this->co2;
    }
  
    /**
     * Sets co2
     * @param float $co2 Last Co2 measured @ time_utc (in ppm)
     * @return $this
     */
    public function setCo2($co2)
    {
        
        $this->co2 = $co2;
        return $this;
    }
    
    /**
     * Gets humidity
     * @return float
     */
    public function getHumidity()
    {
        return $this->humidity;
    }
  
    /**
     * Sets humidity
     * @param float $humidity Last humidity measured @ time_utc (in %)
     * @return $this
     */
    public function setHumidity($humidity)
    {
        
        $this->humidity = $humidity;
        return $this;
    }
    
    /**
     * Gets noise
     * @return float
     */
    public function getNoise()
    {
        return $this->noise;
    }
  
    /**
     * Sets noise
     * @param float $noise Last noise measured @ time_utc (in db)
     * @return $this
     */
    public function setNoise($noise)
    {
        
        $this->noise = $noise;
        return $this;
    }
    
    /**
     * Gets pressure
     * @return float
     */
    public function getPressure()
    {
        return $this->pressure;
    }
  
    /**
     * Sets pressure
     * @param float $pressure Last Sea level pressure measured @ time_utc (in mb)
     * @return $this
     */
    public function setPressure($pressure)
    {
        
        $this->pressure = $pressure;
        return $this;
    }
    
    /**
     * Gets rain
     * @return int
     */
    public function getRain()
    {
        return $this->rain;
    }
  
    /**
     * Sets rain
     * @param int $rain Last rain measured (in mm)
     * @return $this
     */
    public function setRain($rain)
    {
        
        $this->rain = $rain;
        return $this;
    }
    
    /**
     * Gets sum_rain_1
     * @return int
     */
    public function getSumRain1()
    {
        return $this->sum_rain_1;
    }
  
    /**
     * Sets sum_rain_1
     * @param int $sum_rain_1 Amount of rain in last hour
     * @return $this
     */
    public function setSumRain1($sum_rain_1)
    {
        
        $this->sum_rain_1 = $sum_rain_1;
        return $this;
    }
    
    /**
     * Gets sum_rain_24
     * @return int
     */
    public function getSumRain24()
    {
        return $this->sum_rain_24;
    }
  
    /**
     * Sets sum_rain_24
     * @param int $sum_rain_24 Amount of rain today
     * @return $this
     */
    public function setSumRain24($sum_rain_24)
    {
        
        $this->sum_rain_24 = $sum_rain_24;
        return $this;
    }
    
    /**
     * Returns true if offset exists. False otherwise.
     * @param  integer $offset Offset 
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->$offset);
    }
  
    /**
     * Gets offset.
     * @param  integer $offset Offset 
     * @return mixed 
     */
    public function offsetGet($offset)
    {
        return $this->$offset;
    }
  
    /**
     * Sets value based on offset.
     * @param  integer $offset Offset 
     * @param  mixed   $value  Value to be set
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        $this->$offset = $value;
    }
  
    /**
     * Unsets offset.
     * @param  integer $offset Offset 
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->$offset);
    }
  
    /**
     * Gets the string presentation of the object
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) {
            return json_encode(get_object_vars($this), JSON_PRETTY_PRINT);
        } else {
            return json_encode(get_object_vars($this));
        }
    }
}