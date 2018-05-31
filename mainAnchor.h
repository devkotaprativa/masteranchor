/*
  Extended DW1000 Ranging example for radino32 DW1000 and radinoL4 DW1000
  Based on Decawave DW1000 example library
  2017 In-Circuit GmbH
  wiki.in-circuit.de
*/
#include <Arduino.h>
#include <EEPROM.h>
#include <SPI.h>
#include <Wire.h>
#include "IC_DW1000_Ranging_local.h"

#include "common.h"

void setup_anchor(uint16_t userShortAddress, bool startAsTag = false, uint32_t userAntennaDelay = 0xFFFFFFFF,bool isMaster=false);
void loop_anchor();

void printDeviceTable();
void measureComplete();
void newRange_anchor();
void masterRange_anchor(byte* tagAddress, byte* ancAddress, float range, float power);

void checkCommandMenu_anchor();