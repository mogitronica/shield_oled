//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//                                                                            INCLUDES
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

Adafruit_SSD1306 display = Adafruit_SSD1306(128, 64, &Wire);
//--------------> INPUTS
#define sw_4 8

//--------------> OUTPUTS
#define rele 7
#define ledAz 6

#include "DesenhosGustavo.h"
#include "TelasBotao.h"
#include "atons.h"
#include "funcaoTelas.h"
#include "AnimacaoTelas.h"

//#define ledVm1 4
//#define ledAm1 5
//#define ledVd1 6
//
//#define ledVm2 7
//#define ledAm2 8
//#define ledVd2 9
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//                                                                              SETUP
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
void setup() 
{
  Serial.begin(9600);
  pinMode(sw_4, INPUT);
  pinMode(rele,OUTPUT);
  pinMode(ledAz,OUTPUT);
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) 
  {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;); // Don't proceed, loop forever
  }
  display.clearDisplay(); // Clear the buffer
  display.display();
  delay(100);

  for (int x = 0; x < 10; x++) {
  digitalWrite(ledAz, HIGH);
  delay(80);
  digitalWrite(ledAz, LOW);
  delay(80);
  }
  
  for (int x = 0; x < 4; x++) {
  digitalWrite(rele, HIGH);
  delay(300);
  digitalWrite(rele, LOW);
  delay(300);
  }

  digitalWrite(rele, HIGH);
  delay(100);
  digitalWrite(rele, LOW);
  delay(100);
  digitalWrite(rele, HIGH);
  delay(1000);
  digitalWrite(rele, LOW);
  delay(600);
  
 sequenciaTelas();
}

//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
//                                                                             LOOP
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------
void loop() { 
}
