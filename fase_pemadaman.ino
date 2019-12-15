
bool putarKeKanan = false;

void fasePemadaman() {
  if(terdeteksiApi()) {
    if(putarKeKanan) {
      putarKanan(RADIUS_DERAJAT_PEMADAMAN);
    } else {
      putarKiri(RADIUS_DERAJAT_PEMADAMAN);
    }
    putarKeKanan = !putarKeKanan;
  } else {
    faseSaatIni = EKSPLORASI;
  }
}
