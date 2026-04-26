#include <Arduino.h>

// Дефиниране на пина за вградения светодиод
#define LED_PIN 2 

// Продължителност на един кратък сигнал (точка) в милисекунди
const int dotDuration = 200; 

void setup() {g
  pinMode(LED_PIN, OUTPUT);
  
  Serial.begin(115200);
  Serial.println("ESP32 Стартира. Започва мигане на морзов код 'S' (...)");
}

void loop() {
  // Буквата 'S' се състои от 3 кратки сигнала
  for (int i = 0; i < 3; i++) {
    digitalWrite(LED_PIN, HIGH);  // Включва светодиода
    delay(dotDuration);           // Изчаква продължителността на една точка
    
    digitalWrite(LED_PIN, LOW);   // Изключва светодиода
    delay(dotDuration);           // Кратка пауза между точките в самата буква
  }

  // По-дълга пауза (1 секунда), за да се разграничи краят на буквата, 
  // преди цикълът да започне отначало
  delay(1000); 
}