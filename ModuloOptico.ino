#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
const int buttonPin = 10;
const int sensorPin = 0;
int valorEstable;
int contador = 0;

void setup() {
  lcd.begin(16, 2);
  valorEstable = analogRead(sensorPin)-2;
  reset();
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
  Serial.print("valor estable:");
  Serial.println(valorEstable);
}

void reset(){
  lcd.clear();
  lcd.print("Marcador:");
  lcd.setCursor(0,1);
  contador = 0;
  lcd.print(contador);
}

void loop() {
  int sensorlight;
  int buttonState;
  lcd.setCursor(0,1);
  sensorlight = analogRead(sensorPin);
  buttonState = digitalRead(buttonPin);
  Serial.println(sensorlight);
  if(buttonState == LOW){
    delay(500);
    reset();
  }
  else if(sensorlight < valorEstable-30){
    contador++;
    lcd.print(contador);
    delay(2000);
  }
}
