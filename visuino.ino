#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define Mic 0
#define PIN 13

int val;

// Parameter 1 = number of pixels in strip
// Parameter 2 = Arduino pin number (most are valid)
// Parameter 1 = pixel type flags, add together as needed:
//   NEO_KHZ5000  5000 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(40, PIN, NEO_GRB + NEO_KHZ800);

// IMPORTANT: To reduce NeoPixel burnout risk, add 1000 uF capacitor across
// pixel power leads, add 1 - 500 Ohm resistor on first pixel's data input
// and minimize distance between Arduino and first pixel.  Avoid connecting
// on a live circuit...if you must, connect GND first.

void setup() {
  // This is for Trinket 5V 16MHz, you can remove these three lines if you are not using a Trinket
  #if defined (__AVR_ATtiny85__)
    if (F_CPU == 16000000) clock_prescale_set(clock_div_1);
  #endif
  // End of trinket special code


  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop() {
  delay(10);
  val = analogRead(Mic);
  Serial.println(val);

  //lows
  if(val < 98)
  {
    if(val == 97)
    {
      strip.setPixelColor(32, strip.Color(0, 1, 0));
      strip.setPixelColor(33, strip.Color(0, 1, 0));
      strip.setPixelColor(34, strip.Color(0, 1, 0));
      strip.show();
      delay(10);
      strip.setPixelColor(32,0);
      strip.setPixelColor(33,0);
      strip.setPixelColor(34,0);
      strip.show();
    }

    if(val == 96)
    {
      strip.setPixelColor(32, strip.Color(0, 1, 0));
      strip.setPixelColor(33, strip.Color(0, 1, 0));
      strip.setPixelColor(34, strip.Color(0, 1, 0));
      strip.setPixelColor(24, strip.Color(0, 1, 0));
      strip.setPixelColor(25, strip.Color(0, 1, 0));
      strip.setPixelColor(26, strip.Color(0, 1, 0));
      strip.show();
      delay(10);
      strip.setPixelColor(32,0);
      strip.setPixelColor(33,0);
      strip.setPixelColor(34,0);
      strip.setPixelColor(24,0);
      strip.setPixelColor(25,0);
      strip.setPixelColor(26,0);
      strip.show();
    }

    if(val == 95)
    {
      strip.setPixelColor(32, strip.Color(0, 1, 0));
      strip.setPixelColor(33, strip.Color(0, 1, 0));
      strip.setPixelColor(34, strip.Color(0, 1, 0));
      strip.setPixelColor(24, strip.Color(0, 1, 0));
      strip.setPixelColor(25, strip.Color(0, 1, 0));
      strip.setPixelColor(26, strip.Color(0, 1, 0));
      strip.setPixelColor(16, strip.Color(0, 1, 0));
      strip.setPixelColor(17, strip.Color(0, 1, 0));
      strip.setPixelColor(18, strip.Color(0, 1, 0));
      strip.show();
      delay(10);
      strip.setPixelColor(32,0);
      strip.setPixelColor(33,0);
      strip.setPixelColor(34,0);
      strip.setPixelColor(24,0);
      strip.setPixelColor(25,0);
      strip.setPixelColor(26,0);
      strip.setPixelColor(16,0);
      strip.setPixelColor(17,0);
      strip.setPixelColor(18,0);
      strip.show();
    }

    if(val == 94)
    {
      strip.setPixelColor(32, strip.Color(0, 1, 0));
      strip.setPixelColor(33, strip.Color(0, 1, 0));
      strip.setPixelColor(34, strip.Color(0, 1, 0));
      strip.setPixelColor(24, strip.Color(0, 1, 0));
      strip.setPixelColor(25, strip.Color(0, 1, 0));
      strip.setPixelColor(26, strip.Color(0, 1, 0));
      strip.setPixelColor(16, strip.Color(0, 1, 0));
      strip.setPixelColor(17, strip.Color(0, 1, 0));
      strip.setPixelColor(18, strip.Color(0, 1, 0));
      strip.setPixelColor(8, strip.Color(0, 1, 0));
      strip.setPixelColor(9, strip.Color(0, 1, 0));
      strip.setPixelColor(10, strip.Color(0, 1, 0));
      strip.show();
      delay(10);
      strip.setPixelColor(32,0);
      strip.setPixelColor(33,0);
      strip.setPixelColor(34,0);
      strip.setPixelColor(24,0);
      strip.setPixelColor(25,0);
      strip.setPixelColor(26,0);
      strip.setPixelColor(16,0);
      strip.setPixelColor(17,0);
      strip.setPixelColor(18,0);
      strip.setPixelColor(8,0);
      strip.setPixelColor(9,0);
      strip.setPixelColor(10,0);
      strip.show();
    }

    if(val == 93)
    {
      strip.setPixelColor(32, strip.Color(0, 1, 0));
      strip.setPixelColor(33, strip.Color(0, 1, 0));
      strip.setPixelColor(34, strip.Color(0, 1, 0));
      strip.setPixelColor(24, strip.Color(0, 1, 0));
      strip.setPixelColor(25, strip.Color(0, 1, 0));
      strip.setPixelColor(26, strip.Color(0, 1, 0));
      strip.setPixelColor(16, strip.Color(0, 1, 0));
      strip.setPixelColor(17, strip.Color(0, 1, 0));
      strip.setPixelColor(18, strip.Color(0, 1, 0));
      strip.setPixelColor(8, strip.Color(0, 1, 0));
      strip.setPixelColor(9, strip.Color(0, 1, 0));
      strip.setPixelColor(10, strip.Color(0, 1, 0));
      strip.setPixelColor(0, strip.Color(0, 1, 0));
      strip.setPixelColor(1, strip.Color(0, 1, 0));
      strip.setPixelColor(2, strip.Color(0, 1, 0));
      strip.show();
      delay(10);
      strip.setPixelColor(32,0);
      strip.setPixelColor(33,0);
      strip.setPixelColor(34,0);
      strip.setPixelColor(24,0);
      strip.setPixelColor(25,0);
      strip.setPixelColor(26,0);
      strip.setPixelColor(16,0);
      strip.setPixelColor(17,0);
      strip.setPixelColor(18,0);
      strip.setPixelColor(8,0);
      strip.setPixelColor(9,0);
      strip.setPixelColor(10,0);
      strip.setPixelColor(0,0);
      strip.setPixelColor(1,0);
      strip.setPixelColor(2,0);
      strip.show();
    }
  }

  //mids
  if(val >= 98 && val < 105)
  {
    if(val >= 98 && val < 100)
    {
      strip.setPixelColor(35, 15);
      strip.setPixelColor(36, 15);
      strip.setPixelColor(37, 15);
      strip.show();
      delay(10);
      strip.setPixelColor(35,0);
      strip.setPixelColor(36,0);
      strip.setPixelColor(37,0);
      strip.show();
    }

    if(val >= 100 && val < 102)
    {
      strip.setPixelColor(35, 15);
      strip.setPixelColor(36, 15);
      strip.setPixelColor(37, 15);
      strip.setPixelColor(27, 15);
      strip.setPixelColor(28, 15);
      strip.setPixelColor(29, 15);
      strip.show();
      delay(10);
      strip.setPixelColor(35,0);
      strip.setPixelColor(36,0);
      strip.setPixelColor(37,0);
      strip.setPixelColor(27,0);
      strip.setPixelColor(28,0);
      strip.setPixelColor(29,0);
      strip.show();
    }

    if(val >= 102 && val < 104)
    {
      strip.setPixelColor(35, 15);
      strip.setPixelColor(36, 15);
      strip.setPixelColor(37, 15);
      strip.setPixelColor(27, 15);
      strip.setPixelColor(28, 15);
      strip.setPixelColor(29, 15);
      strip.setPixelColor(19, 15);
      strip.setPixelColor(20, 15);
      strip.setPixelColor(21, 15);
      strip.show();
      delay(10);
      strip.setPixelColor(35,0);
      strip.setPixelColor(36,0);
      strip.setPixelColor(37,0);
      strip.setPixelColor(27,0);
      strip.setPixelColor(28,0);
      strip.setPixelColor(29,0);
      strip.setPixelColor(19,0);
      strip.setPixelColor(20,0);
      strip.setPixelColor(21,0);
      strip.show();
    }

    if(val >= 104 && val < 106)
    {
      strip.setPixelColor(35, 15);
      strip.setPixelColor(36, 15);
      strip.setPixelColor(37, 15);
      strip.setPixelColor(27, 15);
      strip.setPixelColor(28, 15);
      strip.setPixelColor(29, 15);
      strip.setPixelColor(19, 15);
      strip.setPixelColor(20, 15);
      strip.setPixelColor(21, 15);
      strip.setPixelColor(11, 15);
      strip.setPixelColor(12, 15);
      strip.setPixelColor(13, 15);
      strip.show();
      delay(10);
      strip.setPixelColor(35,0);
      strip.setPixelColor(36,0);
      strip.setPixelColor(37,0);
      strip.setPixelColor(27,0);
      strip.setPixelColor(28,0);
      strip.setPixelColor(29,0);
      strip.setPixelColor(19,0);
      strip.setPixelColor(20,0);
      strip.setPixelColor(21,0);
      strip.setPixelColor(11,0);
      strip.setPixelColor(12,0);
      strip.setPixelColor(13,0);
      strip.show();
    }

    if(val == 107)
    {
      strip.setPixelColor(35, 15);
      strip.setPixelColor(36, 15);
      strip.setPixelColor(37, 15);
      strip.setPixelColor(27, 15);
      strip.setPixelColor(28, 15);
      strip.setPixelColor(29, 15);
      strip.setPixelColor(19, 15);
      strip.setPixelColor(20, 15);
      strip.setPixelColor(21, 15);
      strip.setPixelColor(11, 15);
      strip.setPixelColor(12, 15);
      strip.setPixelColor(13, 15);
      strip.setPixelColor(3, 15);
      strip.setPixelColor(4, 15);
      strip.setPixelColor(5, 15);
      strip.show();
      delay(10);
      strip.setPixelColor(35,0);
      strip.setPixelColor(36,0);
      strip.setPixelColor(37,0);
      strip.setPixelColor(27,0);
      strip.setPixelColor(28,0);
      strip.setPixelColor(29,0);
      strip.setPixelColor(19,0);
      strip.setPixelColor(20,0);
      strip.setPixelColor(21,0);
      strip.setPixelColor(11,0);
      strip.setPixelColor(12,0);
      strip.setPixelColor(13,0);
      strip.setPixelColor(3,0);
      strip.setPixelColor(4,0);
      strip.setPixelColor(5,0);
      strip.show();
    }
  }
  
  //highs
  if(val >= 105)
  {
    if(val == 105)
    {
      strip.setPixelColor(38, strip.Color(1, 0, 1));
      strip.setPixelColor(39, strip.Color(1, 0, 1));
      strip.show();
      delay(10);
      strip.setPixelColor(38, 0);
      strip.setPixelColor(39, 0);
      strip.show();
    }

    if(val == 106)
    {
      strip.setPixelColor(38, strip.Color(1, 0, 1));
      strip.setPixelColor(39, strip.Color(1, 0, 1));
      strip.setPixelColor(30, strip.Color(1, 0, 1));
      strip.setPixelColor(31, strip.Color(1, 0, 1));
      strip.show();
      delay(10);
      strip.setPixelColor(38, 0);
      strip.setPixelColor(39, 0);
      strip.setPixelColor(30, 0);
      strip.setPixelColor(31, 0);
      strip.show();
    }

    if(val == 107)
    {
      strip.setPixelColor(38, strip.Color(1, 0, 1));
      strip.setPixelColor(39, strip.Color(1, 0, 1));
      strip.setPixelColor(30, strip.Color(1, 0, 1));
      strip.setPixelColor(31, strip.Color(1, 0, 1));
      strip.setPixelColor(22, strip.Color(1, 0, 1));
      strip.setPixelColor(23, strip.Color(1, 0, 1));
      strip.show();
      delay(10);
      strip.setPixelColor(38, 0);
      strip.setPixelColor(39, 0);
      strip.setPixelColor(30, 0);
      strip.setPixelColor(31, 0);
      strip.setPixelColor(22, 0);
      strip.setPixelColor(23, 0);
      strip.show();
    }

    if(val == 108)
    {
      strip.setPixelColor(38, strip.Color(1, 0, 1));
      strip.setPixelColor(39, strip.Color(1, 0, 1));
      strip.setPixelColor(30, strip.Color(1, 0, 1));
      strip.setPixelColor(31, strip.Color(1, 0, 1));
      strip.setPixelColor(22, strip.Color(1, 0, 1));
      strip.setPixelColor(23, strip.Color(1, 0, 1));
      strip.setPixelColor(14, strip.Color(1, 0, 1));
      strip.setPixelColor(15, strip.Color(1, 0, 1));
      strip.show();
      delay(10);
      strip.setPixelColor(38, 0);
      strip.setPixelColor(39, 0);
      strip.setPixelColor(30, 0);
      strip.setPixelColor(31, 0);
      strip.setPixelColor(22, 0);
      strip.setPixelColor(23, 0);
      strip.setPixelColor(14, 0);
      strip.setPixelColor(15, 0);
      strip.show();
    }

    if(val == 108)
    {
      strip.setPixelColor(38, strip.Color(1, 0, 1));
      strip.setPixelColor(39, strip.Color(1, 0, 1));
      strip.setPixelColor(30, strip.Color(1, 0, 1));
      strip.setPixelColor(31, strip.Color(1, 0, 1));
      strip.setPixelColor(22, strip.Color(1, 0, 1));
      strip.setPixelColor(23, strip.Color(1, 0, 1));
      strip.setPixelColor(14, strip.Color(1, 0, 1));
      strip.setPixelColor(15, strip.Color(1, 0, 1));
      strip.setPixelColor(6, strip.Color(1, 0, 1));
      strip.setPixelColor(7, strip.Color(1, 0, 1));
      strip.show();
      delay(10);
      strip.setPixelColor(38, 0);
      strip.setPixelColor(39, 0);
      strip.setPixelColor(30, 0);
      strip.setPixelColor(31, 0);
      strip.setPixelColor(22, 0);
      strip.setPixelColor(23, 0);
      strip.setPixelColor(14, 0);
      strip.setPixelColor(15, 0);
      strip.setPixelColor(6, 0);
      strip.setPixelColor(7, 0);
      strip.show();
    }
    //strip.setPixelColor(18, 15);
    //strip.show();
    //delay(10);
    //strip.setPixelColor(18,0);
    //strip.show();
  }  
}
