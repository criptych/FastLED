#ifdef ESP32

#define FASTLED_INTERNAL
#include "FastLED.h"

#include "fastspi_esp32.h"

SPIClass ledSPI(FASTLED_ESP32_SPI_BUS);

#endif
