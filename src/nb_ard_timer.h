#pragma once

#include <Arduino.h>

class SimpleTimer {
public:
    SimpleTimer(unsigned long interval_ms);
    ~SimpleTimer();

    // True if expired
    bool expired();

    // Reset timer
    void reset();

private:
    unsigned long _interval;
    unsigned long _lastMillis;
};