#include "Servo.h"
#include "NewPing.h"

#define JARAK_MAKSIMUM_SENSOR_ULTRASONIK 200

#define PIN_RODA_KIRI 4
#define PIN_RODA_KANAN 5

Servo SERVO_RODA_KIRI;
Servo SERVO_RODA_KANAN;

#define PIN_KIPAS 6
#define PIN_BUZZER 3

#define PENGIRIM_SINYAL_KIRI 10
#define PENERIMA_SINYAL_KIRI 9
NewPing SONAR_KIRI(PENERIMA_SINYAL_KIRI, PENGIRIM_SINYAL_KIRI, JARAK_MAKSIMUM_SENSOR_ULTRASONIK);

#define PENGIRIM_SINYAL_TENGAH 12
#define PENERIMA_SINYAL_TENGAH 11
NewPing SONAR_TENGAH(PENERIMA_SINYAL_TENGAH, PENGIRIM_SINYAL_TENGAH, JARAK_MAKSIMUM_SENSOR_ULTRASONIK);

#define PENGIRIM_SINYAL_KANAN 8
#define PENERIMA_SINYAL_KANAN 7
NewPing SONAR_KANAN(PENERIMA_SINYAL_KANAN, PENGIRIM_SINYAL_KANAN, JARAK_MAKSIMUM_SENSOR_ULTRASONIK);

#define RODA_MAX_SPEED 400
#define RODA_AVG_SPEED 200
#define RODA_MIN_SPEED 90