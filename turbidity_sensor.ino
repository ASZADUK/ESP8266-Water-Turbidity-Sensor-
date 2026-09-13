// =====================================================
// WATER TURBIDITY SENSOR
// ESP8266 NodeMCU ESP-12E
// =====================================================

#define TURBIDITY_PIN A0

// Water quality threshold
// 450 or above = CLEAN
// Below 450 = DIRTY
#define TURBIDITY_THRESHOLD 450

void setup() {
  Serial.begin(115200);
  delay(1000);

  Serial.println("===== WATER TURBIDITY TEST =====");
}

void loop() {

  // Read analog value from turbidity sensor
  int sensorValue = analogRead(TURBIDITY_PIN);

  Serial.print("A0 Value: ");
  Serial.println(sensorValue);

  // Check water quality
  if (sensorValue < TURBIDITY_THRESHOLD) {
    Serial.println("Water Status: DIRTY");
  } else {
    Serial.println("Water Status: CLEAN");
  }

  Serial.println("----------------------");

  delay(1000);
}
