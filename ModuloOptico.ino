#include <LiquidCrystal.h>

LiquidCrystal lcd(12,11,5,4,3,2);
const int buttonPin1 = 10;
const int buttonPin2 = 13;
const int sensorPin = 0;
int valorEstable;
int contador = 0;

void setup() {
  lcd.begin(16, 2);
  valorEstable = analogRead(sensorPin)-2;
  reset();
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
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
  int buttonState1;
  int buttonState2;
  lcd.setCursor(0,1);
  sensorlight = analogRead(sensorPin);
  buttonState1 = digitalRead(buttonPin1);
  buttonState2 = digitalRead(buttonPin2);
  Serial.println(sensorlight);
  if(buttonState1 == LOW){
    delay(500);
    reset();
  }
  else if(buttonState2 == LOW){
    if(contador > 0){
      contador--;
    }
    lcd.print(contador);
    delay(500);
  }
  else if(sensorlight < valorEstable-30){
    contador++;
    lcd.print(contador);
    delay(2000);
  }
}

