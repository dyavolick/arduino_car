#include <Arduino.h>
#include <SoftwareSerial.h>
#include <Servo.h>
#include "move_case.h"
#include "sonar.h"

Servo neck;
SoftwareSerial BTSerial(2, 3);

#include "AltSoftSerial.h"
AltSoftSerial swSerial;
//Переменная данных с блютуза
char bt_input;

//Время последнего нажатия кнопки
unsigned long _time;

void setup() {
  //Sonar_init(13,12);
  //neck.attach(14);
  //Serial.begin(9600);
  setup_motor_system(10, 8, 11, 9);
  _stop();
  swSerial.begin(9600);
 
  _time=micros();
}

void loop() {
   int i;
  //  for(i=10; i<160; i=i+10){
  //    neck.write(i);
  //    delay(500);
  //  }

  // for(i=160; i>=10; i=i-10){
  //    neck.write(i);
  //    delay(00);
  //  }

  //  int prepyatstvie = Sonar(300);
  //  Serial.print("Distance=");
  //  Serial.print(prepyatstvie);
  //  Serial.println(" см.");
  //  delay(1500);

  // if(BTSerial.available()){
  //   bt_input = (char)BTSerial.read();
  //   //Serial.println(bt_input);
  //   move_case(bt_input);
  //   _time=micros();
  // }
  // if((micros()- _time) > _move_time){
  //   _stop();
  // }
  // if((micros()- _time) >= 500){
  //   _time = micros();
  //   move_case(bt_input);
  // }
}
