# 🌫️ Desk AQI Monitoring System (ESP8266)

A simple **desk-top Air Quality Monitoring System** using **ESP8266 (NodeMCU)**, **MQ135 sensor**, and **OLED display**.  
Displays real-time air quality value and status on an OLED screen.

---

## 🔧 Components
- ESP8266 (NodeMCU)
- MQ135 Air Quality Sensor
- 0.96" OLED Display (SSD1306, I2C)
- Breadboard & Jumper Wires

---

## 🔌 Connections

### MQ135 → ESP8266
| MQ135 | ESP8266 |
|------|---------|
| VCC | 3.3V |
| GND | GND |
| AOUT | A0 |

### OLED → ESP8266
| OLED | ESP8266 |
|------|---------|
| VCC | 3.3V |
| GND | GND |
| SDA | D2 |
| SCL | D1 |

---

## 📊 AQI Logic
- **< 200** → Good 😊  
- **200–400** → Moderate 😐  
- **> 400** → Poor 😷  

---

## 🖥️ Output
- Large sensor value on OLED  
- AQI status displayed below  

---

## ⚠️ Note
MQ135 requires **24–48 hrs warm-up** for stable readings.

---

## 👨‍💻 Author
**Shubham**
