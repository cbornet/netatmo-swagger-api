<?php
require_once __DIR__ . '/vendor/autoload.php';

use Symfony\Component\HttpFoundation\Request;
use Symfony\Component\HttpFoundation\Response;
use Silex\Application;

$app = new Silex\Application();

    
        
            

$app->GET('/api/devicelist', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $app_type = $request->get('app_type');    $device_id = $request->get('device_id');    $get_favorites = $request->get('get_favorites');    
            
            return new Response('How about implementing devicelist as a GET method ?');
            });

            

$app->GET('/api/getmeasure', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $device_id = $request->get('device_id');    $module_id = $request->get('module_id');    $scale = $request->get('scale');    $type = $request->get('type');    $date_begin = $request->get('date_begin');    $date_end = $request->get('date_end');    $limit = $request->get('limit');    $optimize = $request->get('optimize');    $real_time = $request->get('real_time');    
            
            return new Response('How about implementing getmeasure as a GET method ?');
            });

            

$app->GET('/api/getuser', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    
            
            return new Response('How about implementing getuser as a GET method ?');
            });

            
        
    
        
            

$app->POST('/oauth2/token', function(Application $app, Request $request) {
            
            $grant_type = $request->get('grant_type');    $client_id = $request->get('client_id');    $client_secret = $request->get('client_secret');    $scope = $request->get('scope');    $username = $request->get('username');    $password = $request->get('password');    $code = $request->get('code');    $redirect_uri = $request->get('redirect_uri');    $refresh_token = $request->get('refresh_token');    
            return new Response('How about implementing getToken as a POST method ?');
            });

            
        
    
        
            

$app->POST('/api/createnewschedule', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $device_id = $request->get('device_id');    $module_id = $request->get('module_id');    
            
            return new Response('How about implementing createnewschedule as a POST method ?');
            });

            

$app->GET('/api/devicelist', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $app_type = $request->get('app_type');    $device_id = $request->get('device_id');    $get_favorites = $request->get('get_favorites');    
            
            return new Response('How about implementing devicelist as a GET method ?');
            });

            

$app->GET('/api/getmeasure', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $device_id = $request->get('device_id');    $module_id = $request->get('module_id');    $scale = $request->get('scale');    $type = $request->get('type');    $date_begin = $request->get('date_begin');    $date_end = $request->get('date_end');    $limit = $request->get('limit');    $optimize = $request->get('optimize');    $real_time = $request->get('real_time');    
            
            return new Response('How about implementing getmeasure as a GET method ?');
            });

            

$app->GET('/api/getthermstate', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $device_id = $request->get('device_id');    $module_id = $request->get('module_id');    
            
            return new Response('How about implementing getthermstate as a GET method ?');
            });

            

$app->GET('/api/getuser', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    
            
            return new Response('How about implementing getuser as a GET method ?');
            });

            

$app->POST('/api/setthermpoint', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $device_id = $request->get('device_id');    $module_id = $request->get('module_id');    $setpoint_mode = $request->get('setpoint_mode');    $setpoint_endtime = $request->get('setpoint_endtime');    $setpoint_temp = $request->get('setpoint_temp');    
            
            return new Response('How about implementing setthermpoint as a POST method ?');
            });

            

$app->POST('/api/switchschedule', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $device_id = $request->get('device_id');    $module_id = $request->get('module_id');    $schedule_id = $request->get('schedule_id');    
            
            return new Response('How about implementing switchschedule as a POST method ?');
            });

            

$app->POST('/api/syncschedule', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $device_id = $request->get('device_id');    $module_id = $request->get('module_id');    
            
            return new Response('How about implementing syncschedule as a POST method ?');
            });

            
        
    
        
            

$app->GET('/api/devicelist', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $app_type = $request->get('app_type');    $device_id = $request->get('device_id');    $get_favorites = $request->get('get_favorites');    
            
            return new Response('How about implementing devicelist as a GET method ?');
            });

            

$app->GET('/api/getmeasure', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $device_id = $request->get('device_id');    $module_id = $request->get('module_id');    $scale = $request->get('scale');    $type = $request->get('type');    $date_begin = $request->get('date_begin');    $date_end = $request->get('date_end');    $limit = $request->get('limit');    $optimize = $request->get('optimize');    $real_time = $request->get('real_time');    
            
            return new Response('How about implementing getmeasure as a GET method ?');
            });

            

$app->GET('/api/getuser', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    
            
            return new Response('How about implementing getuser as a GET method ?');
            });

            
        
    
        
            

$app->GET('/api/getmeasure', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $device_id = $request->get('device_id');    $module_id = $request->get('module_id');    $scale = $request->get('scale');    $type = $request->get('type');    $date_begin = $request->get('date_begin');    $date_end = $request->get('date_end');    $limit = $request->get('limit');    $optimize = $request->get('optimize');    $real_time = $request->get('real_time');    
            
            return new Response('How about implementing getmeasure as a GET method ?');
            });

            
        
    
        
            

$app->GET('/api/devicelist', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $app_type = $request->get('app_type');    $device_id = $request->get('device_id');    $get_favorites = $request->get('get_favorites');    
            
            return new Response('How about implementing devicelist as a GET method ?');
            });

            

$app->GET('/api/getmeasure', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $device_id = $request->get('device_id');    $module_id = $request->get('module_id');    $scale = $request->get('scale');    $type = $request->get('type');    $date_begin = $request->get('date_begin');    $date_end = $request->get('date_end');    $limit = $request->get('limit');    $optimize = $request->get('optimize');    $real_time = $request->get('real_time');    
            
            return new Response('How about implementing getmeasure as a GET method ?');
            });

            

$app->GET('/api/getthermstate', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    $device_id = $request->get('device_id');    $module_id = $request->get('module_id');    
            
            return new Response('How about implementing getthermstate as a GET method ?');
            });

            

$app->GET('/api/partnerdevices', function(Application $app, Request $request) {
            $access_token = $request->get('access_token');    
            
            return new Response('How about implementing partnerdevices as a GET method ?');
            });

            
        
    

$app->run();
