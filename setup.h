#ifndef SETUP_H
#define SETUP_H

#include <Babelduino.h>
#include <L298N.h>
#include <NewPing.h>

// Robot setup

#define LEFT_FORWARD   2
#define LEFT_BACKWARD  4
#define LEFT_SPEED     3
#define RIGHT_FORWARD  6
#define RIGHT_BACKWARD 7
#define RIGHT_SPEED    5

#define PROXIMITY_ECHO 10
#define PROXIMITY_TRIG  9

#define CENTER_LINE_DETECTOR 12

#define DEFAULT_SPEED 200

// Functions and the backstage code

NewPing radar(PROXIMITY_TRIG, PROXIMITY_ECHO, 200);
L298N wheels(LEFT_SPEED, LEFT_FORWARD, LEFT_BACKWARD, RIGHT_FORWARD, RIGHT_BACKWARD, RIGHT_SPEED);

procedura ustaw() { }

// Available wheels methods:
//    void forward(int speed, int delay_time);
//    void full_stop(int delay_time);
//    void turn_right(int speed, int delay_time);
//    void turn_left(int speed, int delay_time);
//    void backward(int speed, int delay_time);

procedura zatrzymaj_sie() {
  wheels.full_stop(200);
}

procedura jedz_do_przodu(int time) {
  wheels.forward(DEFAULT_SPEED, time);
}

procedura jedz_do_tylu(int time) {
  wheels.backward(DEFAULT_SPEED, time);
}

procedura obroc_w_lewo(int time) {
  wheels.turn_left(DEFAULT_SPEED, time); 
}

procedura obroc_w_prawo(int time) {
  wheels.turn_right(DEFAULT_SPEED, time); 
}

podaj czy na_linii() {
  wynik digitalRead(CENTER_LINE_DETECTOR) == HIGH;
}

podaj liczbe odleglosc() {
  niech dystans = radar.ping_cm();
  
  jezeli (dystans == 0) {
    wynik 10000;
  } w_przeciwnym_razie {
    wynik dystans;
  }
}

#endif /* SETUP_H */

