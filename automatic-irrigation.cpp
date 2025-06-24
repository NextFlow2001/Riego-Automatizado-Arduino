#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22
#define SOIL_PIN A0
#define VALVE_PIN 9
#define PUMP_PIN 10

DHT dht(DHTPIN, DHTTYPE);

// PID
float Kp = 2.0, Ki = 0.5, Kd = 0.1;
float setPoint = 30.0;
float lastError = 0, integral = 0;

void setup() {
    pinMode(VALVE_PIN, OUTPUT);
    pinMode(PUMP_PIN, OUTPUT);
    dht.begin();
    Serial.begin(9600);
}

void loop() {
    float humidityRaw = analogRead(SOIL_PIN);
    float humidity = humidityRaw * 100.0 / 1023.0;

    float temperature = dht.readTemperature();
    if (isnan(temperature)) {
        Serial.println("Error leyendo temperatura");
        return;
    }

    // PID
    float error = setPoint - humidity;
    integral += error;
    float derivative = error - lastError;
    float output = Kp * error + Ki * integral + Kd * derivative;

    // Mostrar valores
    Serial.print("Humedad: ");
    Serial.print(humidity);
    Serial.print(" | Temp: ");
    Serial.print(temperature);
    Serial.print(" | PID: ");
    Serial.println(output);

    // Control básico
    if (humidity < setPoint && temperature > 25) {
        digitalWrite(VALVE_PIN, HIGH);
        digitalWrite(PUMP_PIN, HIGH);
    } else {
        digitalWrite(VALVE_PIN, LOW);
        digitalWrite(PUMP_PIN, LOW);
    }

    lastError = error;
    delay(1000);
}