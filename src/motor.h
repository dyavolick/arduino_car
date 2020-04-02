#include <Arduino.h>

int motor_L1, motor_L2;
int motor_R1, motor_R2;

void setup_motor_system(int Li, int L2, int R1, int R2){
   motor_R1 = R1; 
  motor_L1 = Li; 
  motor_R2 = R2; 
  motor_L2 = L2;
  pinMode(motor_R1, OUTPUT);
  pinMode(motor_L1, OUTPUT);
  pinMode(motor_R2, OUTPUT);
  pinMode(motor_L2, OUTPUT);
}

void rigth(){
    digitalWrite(motor_R1, LOW);
    digitalWrite(motor_L1, HIGH);
    digitalWrite(motor_R2, HIGH);
    digitalWrite(motor_L2, LOW); 
}

void left(){
    digitalWrite(motor_R1, HIGH);
    digitalWrite(motor_L1, LOW);
    digitalWrite(motor_R2, LOW);
    digitalWrite(motor_L2, HIGH); 
}

void forward(){
    digitalWrite(motor_R1, HIGH);
    digitalWrite(motor_L1, HIGH);
    digitalWrite(motor_R2, LOW);
    digitalWrite(motor_L2, LOW);  
}

void forward_rigth(){
    digitalWrite(motor_R1, LOW);
    digitalWrite(motor_L1, HIGH);
    digitalWrite(motor_R2, LOW);
    digitalWrite(motor_L2, LOW); 
}

void forward_left(){
    digitalWrite(motor_R1, HIGH);
    digitalWrite(motor_L1, LOW);
    digitalWrite(motor_R2, LOW);
    digitalWrite(motor_L2, LOW); 
}

void backward(){
    digitalWrite(motor_R1, LOW);
    digitalWrite(motor_L1, LOW);
    digitalWrite(motor_R2, HIGH);
    digitalWrite(motor_L2, HIGH); 
}

void backward_rigth(){
    digitalWrite(motor_R1, LOW);
    digitalWrite(motor_L1, HIGH);
    digitalWrite(motor_R2, HIGH);
    digitalWrite(motor_L2, LOW); 
}

void backward_left(){
    digitalWrite(motor_R1, HIGH);
    digitalWrite(motor_L1, LOW);
    digitalWrite(motor_R2, LOW);
    digitalWrite(motor_L2, HIGH); 
}

  //Остановить все двигатели
void _stop(){  
  digitalWrite(motor_R1, LOW);
  digitalWrite(motor_L1, LOW);
  digitalWrite(motor_R2, LOW);
  digitalWrite(motor_L2, LOW);
}