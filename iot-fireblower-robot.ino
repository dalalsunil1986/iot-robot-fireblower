#include "config.h"

void setup() {
  Serial.begin(9600);
  SERVO_RODA_KIRI.attach(PIN_RODA_KIRI);
  SERVO_RODA_KANAN.attach(PIN_RODA_KANAN);
  pinMode(PIN_KIPAS, INPUT);
  pinMode(PIN_BUZZER, OUTPUT);
}
