void majuLurus() {
  SERVO_RODA_KIRI.write(RODA_KIRI_MAX_SPEED);
  SERVO_RODA_KANAN.write(RODA_KANAN_MAX_SPEED);
}

void rotasiKanan() {
  SERVO_RODA_KIRI.write(RODA_KIRI_AVG_SPEED);
  SERVO_RODA_KANAN.write(RODA_KANAN_MIN_SPEED);
}

void rotasiKiri() {
  SERVO_RODA_KIRI.write(RODA_KIRI_MIN_SPEED);
  SERVO_RODA_KANAN.write(RODA_KANAN_AVG_SPEED);
}

void belokKanan() {
  SERVO_RODA_KIRI.write(RODA_KIRI_MAX_SPEED);
  SERVO_RODA_KANAN.write(RODA_KANAN_MIN_SPEED);
}

void belokKiri() {
  SERVO_RODA_KIRI.write(RODA_KIRI_MIN_SPEED);
  SERVO_RODA_KANAN.write(RODA_KANAN_MAX_SPEED);
}

void putarKanan(int derajat) {
  SERVO_RODA_KIRI.write(RODA_KIRI_AVG_SPEED);
  SERVO_RODA_KANAN.write(-RODA_KANAN_AVG_SPEED);
  delay(derajat/KALIBRASI_DERAJAT);
}

void putarKiri(int derajat) {
  SERVO_RODA_KIRI.write(-RODA_KIRI_AVG_SPEED);
  SERVO_RODA_KANAN.write(RODA_KANAN_AVG_SPEED);
  delay(derajat/KALIBRASI_DERAJAT);
}

void diam() {
  SERVO_RODA_KIRI.write(0);
  SERVO_RODA_KANAN.write(0);
}
