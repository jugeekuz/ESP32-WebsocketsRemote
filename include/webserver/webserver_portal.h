#ifndef WEBSERVER_PORTAL_H
#define WEBSERVER_PORTAL_H

#include <Arduino.h>
#include <AsyncTCP.h>
#include <ESPAsyncWebServer.h>
#include <DNSServer.h>
#include <esp_wifi.h>
#include "wifi_handler/wifi_handler.h"

#define MAX_CLIENTS 4	
#define WIFI_CHANNEL 6	

const IPAddress localIP(4, 3, 2, 1);		   
const IPAddress gatewayIP(4, 3, 2, 1);		   
const IPAddress subnetMask(255, 255, 255, 0);  

const String localIPURL = "http://4.3.2.1";	 

extern bool webserverSubmitted;

class WebServer {
public:
    WebServer();
    ~WebServer();
    void scanAndUpdateHTML();
    void setup();
    void loop();
};
#endif