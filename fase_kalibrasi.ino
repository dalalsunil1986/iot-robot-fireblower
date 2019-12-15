
bool apiSudahDiTengah() {
  return 
    (valSensorApi1 < valSensorApi3) &&
    (valSensorApi5 < valSensorApi3);
}

bool apiMasihDiKiri() {
  return
  (valSensorApi5 > valSensorApi3);
}

bool apiMasihDiKanan() {
  return
  (valSensorApi1 > valSensorApi3);
}

void faseKalibrasi() {
  if(apiSudahDiTengah()) {
    faseSaatIni = PEMADAMAN;
  }
  if(apiMasihDiKiri()) {
    rotasiKiri();
  }
  if(apiMasihDiKanan()) {
    rotasiKanan();
  }
}
