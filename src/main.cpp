#include <Arduino.h>

// Дефиниране на пина за вградения светодиод на ESP32 Dev Module
#define LED_PIN 2 

void setup() {
  // Конфигуриране на пина като изходен
  pinMode(LED_PIN, OUTPUT);
  
  // Опционално: Стартиране на серийна комуникация за дебъгване
  Serial.begin(115200);
  Serial.println("ESP32 Стартира. Започва мигане на 1 Hz...");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // Подава логическа единица (3.3V) - светодиодът светва
  delay(500);                   // Изчаква 500ms
  
  digitalWrite(LED_PIN, LOW);   // Подава логическа нула (0V) - светодиодът изгасва
  delay(500);                   // Изчаква 500ms
}