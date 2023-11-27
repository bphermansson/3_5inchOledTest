#include <Arduino.h>
#include <TFT_eSPI.h> 
#include "Free_Fonts.h"
/*
A test project to drive a 3.5" ILI9486-based LCD with a Raspberry Pi Pico W. 
This project uses Bodmer's LCD library, https://github.com/Bodmer/TFT_eSPI
and a Noname LCD, http://www.lcdwiki.com/3.5inch_Arduino_Display-Mega2560
I can not recommend this display as you have to connect it with 16 bits parallell cables,
this means over 20 cables between the display and the Pico when power and control pins are added. 

Fonts are defined in User_Setup.h

https://github.com/Bodmer/TFT_eSPI/blob/master/examples/480%20x%20320/Free_Font_Demo/Free_Font_Demo.ino

https://github.com/Bodmer/TFT_eSPI/discussions/2300


*/

TFT_eSPI tft = TFT_eSPI();

#define AA_FONT_LARGE NotoSansBold36
#define AA_FONT_15 NotoSansBold15

void setup() {

  tft.init();
  tft.setRotation(2);
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(0, 0, 2);
  tft.println("Hello World!");
  
  tft.setTextColor(TFT_YELLOW); 
  
  tft.setTextFont(1);
  tft.println("111ABC");
  tft.setTextFont(2);
  tft.println("222ABC");
  tft.setTextFont(4);
  tft.println("444ABC");
  tft.setTextFont(6);
  tft.println(666);
  tft.setTextFont(7);
  tft.println(777);
  tft.setTextFont(8);
  tft.println(888);

  tft.setFreeFont(FSB24);       // Select Free Serif 24 point font
  tft.println();                // Move cursor down a line
  tft.print("Serif Bold 24pt"); // Print the font name onto the TFT screen
  tft.setFreeFont(FF11);       // Select Free Serif 24 point font
  tft.println();                // Move cursor down a line
  tft.print("FreeMonoOblique18pt7b"); // Print the font name onto the TFT screen
  tft.setFreeFont(FM24);       // Select Free Serif 24 point font
  tft.println();                // Move cursor down a line
  tft.print("FreeMono24pt7b"); // Print the font name onto the TFT screen
  // More fonts to use can be found in Free_Fonts.h
}

void loop() {
  // put your main code here, to run repeatedly:
}

