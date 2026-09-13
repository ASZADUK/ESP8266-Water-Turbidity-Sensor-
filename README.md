# ESP8266 Water Turbidity Sensor

A simple water turbidity monitoring project using:

- ESP8266 NodeMCU ESP-12E
- Turbidity Sensor Module

## Wiring

| Turbidity Sensor | ESP8266 |
|---|---|
| VCC | 3.3V |
| GND | GND |
| AO | A0 |

## Water Quality Logic

- A0 >= 450 → CLEAN
- A0 < 450 → DIRTY

## Serial Monitor

Baud Rate: 115200

## Note

The threshold 450 is an initial calibration value based on testing.
For different sensors and water conditions, calibration may be required.
