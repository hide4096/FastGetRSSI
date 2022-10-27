//SPDX-FileCopyrightText: 2022 Aso Hidetoshi asouhide2002@gmail.com
//SPDX-License-Identifier: BSD-3-Clause

#include <Arduino.h>
#include <WiFi.h>
#include <WiFiScan.h>

void setup() {
  Serial.begin(115200);
}

void loop() {
  //非同期モード ステルスSSIDのチェック パッシブスキャン スキャン間隔(チャンネル毎) チャンネル SSID
  WiFi.scanNetworks(false,false,false,100,1,"Saponse");
  int val = WiFi.RSSI(0);
  Serial.println(val);
}
