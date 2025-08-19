void setup() {
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB
  }
  Serial.println("SlopeBot DZ MK1 Test-Upload erfolgreich.");
}

void loop() {
  // Test-Code
}
