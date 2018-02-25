// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef IOT_CONFIGS_H
#define IOT_CONFIGS_H

/**
 * WiFi setup. Enter your WiFi SSID and Password in the strings below. 
 * If the WiFi network is open and doesn't require a password, 
 * just use empty quotes for the IOT_CONFIG_WIFI_PASSWORD
 */
#define IOT_CONFIG_WIFI_SSID            "<Your WiFi network SSID or name>"
#define IOT_CONFIG_WIFI_PASSWORD        "<Your WiFi network WPA password or WEP key>"

/**
 * Find under Microsoft Azure IoT Suite -> DEVICES -> <your device> -> Device Details and Authentication Keys
 * String containing Hostname, Device Id & Device Key in the format:
 *  "HostName=<host_name>;DeviceId=<device_id>;SharedAccessKey=<device_key>"    
 */
#define IOT_CONFIG_DEVICE_ID            "<Your IoT Device Id>"
#define IOT_CONFIG_CONNECTION_STRING    "<Your IoT Device Connection String>"

#endif /* IOT_CONFIGS_H */
