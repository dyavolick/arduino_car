#include "motor.h"
//Переменная изменения скорости
unsigned long _move_time;
void move_case(char bt_input){
    switch (bt_input)
    {
    //вперед
    case 'F':
        forward();
        break;
    case 'B':
        backward();
        break;
    case 'L':
        left();
        break;
    case 'R':
        rigth();
        break;
    case 'G':
        forward_left();
        break;
    case 'I':
        forward_rigth();
        break;
    case 'H':
        backward_left();
        break;
    case 'J':
        backward_rigth();
        break;
    case 'S':
        _stop();
        break;

    case '0':
        _stop();
        break;
    case '1':
        _move_time = 50;
        break;
    case '2':
        _move_time = 100;
        break;
    case '3':
        _move_time = 150;
        break;
    case '4':
        _move_time = 200;
        break;
    case '5':
        _move_time = 250;
        break;
    case '6':
        _move_time = 300;
        break;
    case '7':
        _move_time = 350;
        break;
    case '8':
        _move_time = 400;
        break;
    case '9':
        _move_time = 450;
        break;
    case 'q':
        _move_time = 450;
        break;    
    case 'D':
        _stop();
        break;
    }
}