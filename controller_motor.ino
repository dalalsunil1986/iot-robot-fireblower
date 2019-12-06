void majuLurus() {
  SERVO_RODA_KIRI.write(RODA_MAX_SPEED);
  SERVO_RODA_KANAN.write(-RODA_MAX_SPEED);
}

void rotasiKanan() {
  SERVO_RODA_KIRI.write(RODA_AVG_SPEED);
  SERVO_RODA_KANAN.write(RODA_MIN_SPEED);
}

void rotasiKiri() {
  SERVO_RODA_KIRI.write(RODA_MIN_SPEED);
  SERVO_RODA_KANAN.write(RODA_AVG_SPEED);
}

void belokKanan() {
  SERVO_RODA_KIRI.write(RODA_MAX_SPEED);
  SERVO_RODA_KANAN.write(-RODA_AVG_SPEED);
}

void belokKiri() {
  SERVO_RODA_KIRI.write(RODA_AVG_SPEED);
  SERVO_RODA_KANAN.write(-RODA_MAX_SPEED);
}

void diam() {
  SERVO_RODA_KIRI.write(0);
  SERVO_RODA_KANAN.write(0);
}
