#pragma once

#include <Arduino.h>

class NbArdTimer {
public:
    NbArdTimer(unsigned long interval_ms);
    ~NbArdTimer();

    // True if expired
    bool expired();

    // Reset timer
    void reset();

private:
    unsigned long _interval;
    unsigned long _lastMillis;
};