String printFase() {
  if(faseSaatIni == EKSPLORASI) {
    return "EKSPLORASI";
  }
  if(faseSaatIni == PEMADAMAN) {
    return "PEMADAMAN";
  }
  if(faseSaatIni == KALIBRASI) {
    return "KALIBRASI";
  }
  return "UNDEFINED";
}

void monitorStatus() {
  Serial.println("STATUS ROBOT : " + printFase());
  Serial.print(valSensorApi1);
  Serial.println(" Sensor API 1 ||");
  Serial.print(valSensorApi2);
  Serial.println(" Sensor API 2 ||");
  Serial.print(valSensorApi3);
  Serial.println(" Sensor API 3 ||");
  Serial.print(valSensorApi4);
  Serial.println(" Sensor API 4 ||");
  Serial.print(valSensorApi5);
  Serial.println(" Sensor API 5 ||");
}
