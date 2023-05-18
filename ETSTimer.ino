#include <Arduino.h>
#include "os_timer.h"

static os_timer_t hop_timer;

#define HOP_INTERVAL_MS   1000

/**
 * Callback 
 */
void hop() {
   Serial.println("hop...");
}


void setup() {
  Serial.begin(115200);
  delay(10);
  
  os_timer_disarm(&hop_timer);
  os_timer_setfn(&hop_timer, (os_timer_func_t *) hop, NULL);
  os_timer_arm(&hop_timer, HOP_INTERVAL_MS, 1);
}

void loop() {
  delay(10);
}