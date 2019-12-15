bool terdeteksiApi() {
  return
  (valSensorApi1 > BATAS_SENSOR_MENDETEKSI_API) ||
  (valSensorApi3 > BATAS_SENSOR_MENDETEKSI_API) ||
  (valSensorApi5 > BATAS_SENSOR_MENDETEKSI_API);
}

void updateSensor() {
  valSensorKiri        = SONAR_KIRI.ping_cm(); 
  valSensorDepan       = SONAR_TENGAH.ping_cm();
  valSensorKanan       = SONAR_KANAN.ping_cm();
  valSensorWarna       = analogRead(A0);
  valSensorApi1        = analogRead(A1);
  valSensorApi2        = analogRead(A2);
  valSensorApi3        = analogRead(A3);
  valSensorApi4        = analogRead(A4);
  valSensorApi5        = analogRead(A5);

//  Serial.print(valSensorApi1);
//  Serial.println(" Sensor API 1 ||");
//  Serial.print(valSensorApi2);
//  Serial.println(" Sensor API 2 ||");
//  Serial.print(valSensorApi3);
//  Serial.println(" Sensor API 3 ||");
//  Serial.print(valSensorApi4);
//  Serial.println(" Sensor API 4 ||");
//  Serial.print(valSensorApi5);
//  Serial.println(" Sensor API 5 ||");
}
