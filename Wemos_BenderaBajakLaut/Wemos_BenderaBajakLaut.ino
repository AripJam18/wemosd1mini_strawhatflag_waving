#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

#include "onepiece_frame_1.h"
#include "onepiece_frame_2.h"
#include "onepiece_frame_3.h"
#include "onepiece_frame_4.h"
#include "onepiece_frame_5.h"
#include "onepiece_frame_6.h"


U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0);

const uint8_t*  frames[] = {
  onepiece_frame_1_bits,
  onepiece_frame_2_bits,
  onepiece_frame_3_bits,
  onepiece_frame_4_bits,
  onepiece_frame_5_bits,
  onepiece_frame_6_bits
};

const int frameCount = sizeof(frames) / sizeof(frames[0]);

void setup() {
  u8g2.begin();
}

void loop() {
  static int currentFrame = 0;

  u8g2.clearBuffer();
  u8g2.drawXBMP(0, 0, 128, 64, frames[currentFrame]);
  u8g2.sendBuffer();

  currentFrame = (currentFrame + 1) % frameCount;
  delay(200); // Kecepatan animasi
}
