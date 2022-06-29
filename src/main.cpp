#include <Arduino.h>
#include <WiFi.h>
#include <WiFiScan.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  //scanNetworksの引数
  //非同期モード ステルスSSIDのチェック パッシブスキャン スキャン間隔(チャンネル毎) チャンネル SSID
  WiFi.scanNetworks(false,false,false,100,1,"Saponse");
  int val = WiFi.RSSI(0);
  Serial.println(val);
}