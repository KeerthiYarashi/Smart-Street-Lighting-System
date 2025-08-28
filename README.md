# 🌃 Smart Street Lighting System
![Made with Arduino](https://img.shields.io/badge/Made%20with-Arduino-blue?logo=arduino) ![IoT Project](https://img.shields.io/badge/IoT-Smart%20City-green?logo=internetofthings) ![Platform ESP32](https://img.shields.io/badge/Platform-ESP32-orange?logo=espressif) ![License](https://img.shields.io/badge/License-MIT-yellow) ![Blynk](https://img.shields.io/badge/App-Blynk-lightgrey?logo=app-store)
An **IoT-based Smart Street Light Management System** that automates street lighting using **ESP32 (NodeMCU), LDR, and IR sensors**, with real-time monitoring on the **Blynk App**. The system ensures lights are **ON only when needed**—helping reduce **energy waste, operational costs, and light pollution** while making cities smarter and greener.
## 🚀 Features
- 🌞 **Day/Night Detection** – Lights remain OFF during the day using an LDR sensor.
- 🚶 **Motion Detection** – Lights brighten when motion is detected at night (via IR sensor).
- 🌙 **Adaptive Lighting** – Lights remain **DIM** (low power) when no motion is detected at night.
- 📊 **IoT Dashboard** – Real-time monitoring of sensor values and light status via the **Blynk App**.
- 🎛️ **Manual & Auto Modes** – Option to manually override light brightness.
- ⚡ **Energy Efficiency** – Reduces unnecessary energy consumption and operational costs.
## 🏗️ System Architecture
1. **LDR Sensor** – Measures ambient light levels.
2. **IR Sensor** – Detects human/vehicle motion.
3. **ESP32 NodeMCU** – Processes sensor inputs and controls the street light (LED).
4. **Blynk App** – Displays real-time sensor values, LED status, and allows remote control.

## 🛠️ Hardware & Software Used
### Hardware:
- ESP32 (NodeMCU)
- LDR Sensor (Light Dependent Resistor)
- IR Motion Sensor
- LEDs (Street Light Simulation)
- Breadboard, Jumper Wires, Resistors
### Software:
- Arduino IDE
- Blynk IoT App
- Libraries:
  - `WiFi.h`
  - `BlynkSimpleEsp32.h`
## 📱 Blynk Dashboard
The **Blynk mobile app** provides:
- 📌 **LDR & IR sensor readings**
- 💡 **LED Brightness Gauge**
- 🔄 **Auto/Manual Toggle**
- 📜 **Status Log** for real-time updates
![Blynk Dashboard](<screenshot-path>)
## 📊 Status Log Example


## 🌍 Applications
- Smart Cities & Energy-Efficient Infrastructure
- Highway and Street Lighting
- Campus & Industrial Lighting Automation
- Residential Communities
## 🎯 Expected Outcomes
- ⚡ Up to **40–60% energy savings** compared to conventional systems
- 📉 Reduced maintenance costs with automated control
- 🌱 Greener, sustainable urban infrastructure
## 📚 References
- Raghavendra et al., *Smart Lighting Systems: A Review*, IEEE Access, 2019.
- S. K. Prasad, *IoT-based Smart Street Lights using Arduino*, IJER, 2021.
- Blynk Documentation – [docs.blynk.io](https://docs.blynk.io)
- Kumar et al., *Street Lighting Automation in Smart Cities*, Springer, 2021.
## 📌 How to Run
1. Clone this repo:
   ```bash
   git clone https://github.com/<your-username>/Smart-Street-Lighting-System.git