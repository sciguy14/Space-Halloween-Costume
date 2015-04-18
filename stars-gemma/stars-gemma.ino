//Jeremy Blum's Space Costume Source Code (http://www.jeremyblum.com/2013/11/03/halloween)
//Copyright 2015 Blum Idea Labs, LLC.
//This code is Open Source! Please refer to the GPL License included with this download.
//This is an alternative version of the code that runs on the Adafruit Gemma, a lighter-weight version of the Flora.
//This was tested and compiled on Arduino 1.6.3 with added support for Adafruit Hardware

//Windows Drivers are needed for the Gemma. Find them here:
//https://learn.adafruit.com/usbtinyisp/drivers

//Follow this Programming Guide
//https://learn.adafruit.com/introducing-gemma/setting-up-with-arduino-ide

//Thanks to Adafruit for their wonderful Neopixel Library.
//Install it and set it up:
//https://github.com/adafruit/Adafruit_NeoPixel

#include "Adafruit_NeoPixel.h"
#define PIN 1
Adafruit_NeoPixel strip = Adafruit_NeoPixel(12, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  randomSeed(analogRead(1));
}

void loop() {
  //Pick a random pixel
  int pixelNum = random(0,strip.numPixels());
  
  //Pick a random brightness value
  int brightness = random(15,61);
  
  //Random time between flickering.
  int sleep = random(5,41);
  
  strip.setPixelColor(pixelNum,strip.Color(brightness,brightness,brightness));
  strip.show();
  delay(sleep);
}



