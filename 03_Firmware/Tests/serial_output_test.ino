#include <Arduino.h>
#include <unity.h>

class TestSerial : public Print {
public:
  String output;
  void begin(unsigned long) {}
  size_t write(uint8_t ch) override {
    output += static_cast<char>(ch);
    return 1;
  }
} testSerial;

#define Serial testSerial
#define setup main_setup
#define loop main_loop
#include "../main.ino"
#undef setup
#undef loop
#undef Serial

void setUp(void) {
  testSerial.output = "";
}

void tearDown(void) {}

void test_serial_output_startup(void) {
  main_setup();
  TEST_ASSERT_EQUAL_STRING(
      "SlopeBot DZ MK1 Test-Upload erfolgreich.\r\n",
      testSerial.output.c_str());
}

void setup() {
  Serial.begin(115200);
  UNITY_BEGIN();
  RUN_TEST(test_serial_output_startup);
  UNITY_END();
}

void loop() {}

