// config_lcd.ino
// Script de configuración para pantalla LCD 16x2 en el sistema de riego automatizado

#include <LiquidCrystal.h>

// Definir pines de la pantalla LCD
#define RS 12
#define EN 11
#define D4 5
#define D5 4
#define D6 3
#define D7 2

// Inicializar objeto LCD
LiquidCrystal lcd(RS, EN, D4, D5, D6, D7);

// Umbrales configurables
float humidityThreshold = 30.0;  // Umbral de humedad (%)
float tempThreshold = 25.0;      // Umbral de temperatura (°C)

void setup() {
  // Iniciar LCD con 16 columnas y 2 filas
  lcd.begin(16, 2);
  
  // Mostrar mensaje inicial
  lcd.setCursor(0, 0);
  lcd.print("Sistema Riego");
  lcd.setCursor(0, 1);
  lcd.print("Iniciando...");
  delay(2000);
  lcd.clear();
}

void displayData(float humidity, float temperature, bool irrigationStatus) {
  // Mostrar datos en la pantalla LCD
  lcd.setCursor(0, 0);
  lcd.print("Hum: ");
  lcd.print(humidity, 1);
  lcd.print("%");
  
  lcd.setCursor(9, 0);
  lcd.print("T: ");
  lcd.print(temperature, 1);
  lcd.print("C");
  
  lcd.setCursor(0, 1);
  lcd.print("Riego: ");
  lcd.print(irrigationStatus ? "ON " : "OFF");
}