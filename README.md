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