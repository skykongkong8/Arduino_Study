//
// Created by kiryanenko on 05.10.19.
// Edited by skykongkong8 on 14.01.21

#include "SimpleTimer.h"

SimpleTimer::SimpleTimer(uint64_t interval) : _interval(interval) {
    _start = millis();
}

bool SimpleTimer::isReady() {
    return _start + _interval <= millis();
}

void SimpleTimer::setInterval_and_run(uint64_t interval, void do_this()) {
    _interval = interval;
    delay(interval);
    do_this(); 
}

void SimpleTimer::reset() {
    _start = millis();
}