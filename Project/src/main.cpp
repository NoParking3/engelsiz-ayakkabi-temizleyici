#include <Arduino.h>
#include "lib.h"
#include <AudioFileSourceSPIFFS.h>
#include <AudioGeneratorMP3.h>
#include <AudioOutputI2S.h>

void setup(){
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  pinMode(watermotor, OUTPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
  pinMode(fan, OUTPUT);
  pinMode(fan_bobin, OUTPUT);
  yikama(255, 3);
  delay(10000);
  kurutma(255, 3, 255, 255, 255);
  delay(10000);
}

void loop(){
}