# ESP8266 Water Turbidity Sensor

A simple water turbidity monitoring project using an **ESP8266 NodeMCU (ESP-12E)** and a **Turbidity Sensor Module**.

The sensor reads the analog turbidity value through the ESP8266 `A0` pin and displays the water status as **CLEAN** or **DIRTY**.

## 🔧 Hardware Required

- ESP8266 NodeMCU ESP-12E
- Turbidity Sensor Module
- Jumper Wires
- USB Cable
- Water container for testing

## 🔌 Wiring

| Turbidity Sensor | ESP8266 NodeMCU |
|---|---|
| VCC | 3.3V |
| GND | GND |
| AO | A0 |

## 💻 Software

- Arduino IDE
- ESP8266 Board Package
- Board: **NodeMCU 1.0 (ESP-12E Module)**

## 📊 Water Quality Logic

The current threshold is set to **450**.

```text
A0 >= 450  → CLEAN
A0 < 450   → DIRTY
