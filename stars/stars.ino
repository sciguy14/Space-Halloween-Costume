//Jeremy Blum's Space Costume Source Code (http://www.jeremyblum.com/2013/11/03/halloween)
//Copyright 2013 Blum Idea Labs, LLC.
//This code is Open Source! Please refer to the GPL License included with this download.

//Thanks to Adafruit for their wonderful Neopixel Library.
//To setup your Flora and install the Neopixel library, follow these instructions:
//http://learn.adafruit.com/getting-started-with-flora/overview
//http://learn.adafruit.com/flora-rgb-smart-pixels/

#include "Adafruit_NeoPixel.h"
#define PIN 6
Adafruit_NeoPixel strip = Adafruit_NeoPixel(12, PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
  randomSeed(analogRead(0));
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



