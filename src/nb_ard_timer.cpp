#include "simple_timer.h"

SimpleTimer::SimpleTimer(unsigned long interval_ms) : _interval(interval_ms), _lastMillis(0) {}

bool SimpleTimer::expired() {
    unsigned long now = millis();
    if (now - _lastMillis >= _interval) {
        _lastMillis = now;
        return true;
    }
    return false;
}

void SimpleTimer::reset() {
    _lastMillis = millis();
}