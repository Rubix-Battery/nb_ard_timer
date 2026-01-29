# nb_ard_timer

## What is nb_ard_timer?

- It is a very simple timer library for Arduino based projects

## Example

```cpp
#include <Arduino.h>
#include <nb_ard_timer.h>

// 1000 ms timer
SimpleTimer pollTimer(1000);

void setup() {
    // Initialize the serial communication
    Serial.begin(115200);
}

void loop() {
    if(pollTimer.expired()) {
        // do something every 1000 ms
    }
}
```

If you wish to reset the timer to its start value to delay its expiration, simply call `reset()` like this:

```cpp
pollTimer.reset();
```

## Code Style Guidelines

- Please use the `.clang-format` style. (You can automatically apply the style by selecting it from the context menu.)

<img src="img\format_document.png" alt="screenshot of context menu" width="250">

- Use the [`esp_log_alias`](https://github.com/Rubix-Battery/esp_log_alias) library (an alias for `ESP_LOGI`, `ESP_LOGD`, etc.). rather than `Serial.println()` etc. (see [official documentation](https://docs.espressif.com/projects/esp-idf/en/stable/esp32/api-reference/system/log.html) and [`PIO_Template`](https://github.com/Rubix-Battery/PIO_Template) for instructions on use.)