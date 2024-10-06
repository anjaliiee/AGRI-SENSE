# IoT Soil Moisture Sensor using ESP8266 & Blynk with Water Pump Control

## Project Overview

This IoT-based project automates the irrigation process by using an ESP8266 microcontroller to monitor soil moisture levels and control a water pump. It is integrated with the **Blynk** platform, allowing remote monitoring and control via a smartphone app. This solution aims to improve resource efficiency by automating irrigation and enabling farmers or gardeners to optimize water usage.

## Key Features

- **Automated Irrigation**: Soil moisture is continuously monitored, and the water pump is activated automatically when moisture falls below a certain threshold.
- **Remote Monitoring & Control**: Users can monitor soil moisture levels in real-time and manually control the pump from anywhere using the Blynk app.
- **Energy & Water Efficiency**: The system reduces water wastage and saves energy by ensuring the pump only runs when necessary.
- **Notifications**: Users receive alerts when soil moisture is low or when the pump is activated.
  ![alt text](image.png)

## Components

### Hardware:

- ESP8266 (NodeMCU)
- Soil Moisture Sensor
- Water Pump
- 5V Relay Module
- Jumper Wires
- Power Source (USB or Battery)
- Breadboard (optional)

### Software:

- Arduino IDE
- Blynk App (iOS/Android)
- Blynk Libraries for ESP8266

## Circuit Diagram

The soil moisture sensor is connected to the analog input (A0) of the ESP8266.  
The relay module controlling the water pump is connected to a GPIO pin (D1).

## Project Setup

### 1. Hardware Assembly

- Connect the soil moisture sensor to the analog input pin (A0) of the ESP8266.
- Connect the relay to the GPIO pin (D1) to control the water pump.

### 2. Blynk Integration

- Create a new project in the **Blynk App**, selecting **ESP8266** as the hardware model.
- Add widgets to display soil moisture readings and control the water pump.
- Use the generated **Auth Token** in your code to link the app with your ESP8266.

### 3. Arduino IDE Setup

- Install the **ESP8266** board in Arduino IDE.
- Add the **Blynk** library.
- Upload the provided code to your ESP8266.

## How It Works

- **Automated Control**: The ESP8266 reads soil moisture levels and controls the water pump based on the moisture threshold. If the soil is dry, the pump turns on automatically.
- **Remote Control**: Through the Blynk app, users can monitor real-time moisture levels and manually activate or deactivate the pump as needed.
- **Alerts**: Notifications are sent via the Blynk app when the soil moisture is low or when the pump is activated.

## Project Inspiration: AGRI-SENSE

This project is inspired by the **AGRI-SENSE** system, which was developed to optimize agricultural productivity and sustainability. The AGRI-SENSE project, which increased crop productivity by 30%, used IoT and sensor technologies (Node MCU, DHT11, and soil moisture sensors) to monitor crop conditions. The solution empowered farmers to remotely monitor and manage their farms, optimizing water and energy usage.

## Future Improvements

- **Additional Sensors**: Integrating more sensors, such as temperature and humidity sensors, to gather more environmental data.
- **Weather API Integration**: Using weather forecasts to adjust irrigation schedules.
- **Multi-plant System**: Scaling the system to manage multiple plants with individual sensors and pumps.

## License

This project is open-source under the **MIT License**. Feel free to modify and improve upon it.

## Conclusion

By integrating IoT and Blynk with soil moisture sensors, this project provides an efficient, automated, and remotely controlled irrigation system. It empowers users to monitor soil moisture levels in real-time, ensuring optimal water usage for better crop health and sustainability.
