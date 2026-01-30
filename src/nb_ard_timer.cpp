#include "nb_ard_timer.h"

NbArdTimer::NbArdTimer(unsigned long interval_ms) : _interval(interval_ms), _lastMillis(0) {}

NbArdTimer::~NbArdTimer() {}

bool NbArdTimer::expired() {
    unsigned long now = millis();
    if (now - _lastMillis >= _interval) {
        _lastMillis = now;
        return true;
    }
    return false;
}

void NbArdTimer::reset() {
    _lastMillis = millis();
}