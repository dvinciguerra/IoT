#define SENSOR_PIN 3

// presence sensor state
int sensor_state;

void setup() {
  // pimode setup
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(SENSOR_PIN, INPUT);

  // start presence sersor as LOW
  digitalWrite(SENSOR_PIN, LOW);
}

void loop() {
  // getting presence sensor state
  sensor_state = digitalRead(SENSOR_PIN);

  if (sensor_state) blink_led(LED_BUILTIN);
}

void blink_led(int pin) {
    digitalWrite(pin, HIGH);
    delay(1000);
    digitalWrite(pin, LOW);
}
