# IoT Soil Moisture Sensor using ESP8266 & Blynk with Water Pump Control
## Automated Irrigation System for Efficient Water Management
## Project Overview

This IoT-based project automates the irrigation process by using an ESP8266 microcontroller to monitor soil moisture levels and control a water pump. It is integrated with the **Blynk** platform, allowing remote monitoring and control via a smartphone app. This solution aims to improve resource efficiency by automating irrigation and enabling farmers or gardeners to optimize water usage.

## Problem Statement
### Challenges in Agriculture:
- Inefficient and labor-intensive manual irrigation.
- Manual monitoring of soil moisture levels can lead to over- or under-watering.
- Lack of automation and remote control hinders resource optimization, especially in large fields or gardens.
  ![image](https://github.com/user-attachments/assets/7dd84146-6e54-4eae-8fee-727627baca4d)


## Solution
### IoT-Based Automated Irrigation:
This project automates irrigation by monitoring soil moisture in real-time and controlling a water pump when necessary. The system integrates with the Blynk app for remote control and monitoring, improving both water and energy efficiency.

## Key Features

- **Automated Irrigation**: Soil moisture is continuously monitored, and the water pump is activated automatically when moisture falls below a certain threshold.
- **Remote Monitoring & Control**: Users can monitor soil moisture levels in real-time and manually control the pump from anywhere using the Blynk app.
- **Energy & Water Efficiency**: The system reduces water wastage and saves energy by ensuring the pump only runs when necessary.
- **Notifications**: Users receive alerts when soil moisture is low or when the pump is activated.
 

## Components

## Hardware Components
- **ESP8266 (NodeMCU)**: Microcontroller to manage sensors and water pump.
  ![image](https://github.com/user-attachments/assets/96c5a186-5e37-4a51-afb7-95f2f07e10cc)
- **Soil Moisture & DHT 11Sensor**: Measures soil moisture and humidity levels in real-time.
  ![image](https://github.com/user-attachments/assets/3afc4b83-3d74-4551-a54e-afd1b0db5180)
  ![image](https://github.com/user-attachments/assets/df45cec7-bdf0-4519-8a8a-8d5684c60632)

- **Water Pump**: Waters the soil based on moisture readings.
- **Relay Module**: Controls the water pump based on ESP8266 signals.
  ![image](https://github.com/user-attachments/assets/6568cd6e-cd6e-4d8b-bff4-caf42fc370fa)

- **Power Source**: USB or battery to power the system.


![image](https://github.com/user-attachments/assets/45c936b4-5d33-4e13-80a1-7949f3f0cb01)


---

## Software Components
- **Arduino IDE**: Used to write, compile, and upload code to the ESP8266.
- **Blynk App**: A mobile app for real-time system control and monitoring.
  ![image](https://github.com/user-attachments/assets/5b4c332a-bfff-4a4f-ab57-e4ce096ea2a4)

- **Blynk Libraries**: Integrates ESP8266 with the Blynk app for communication and control.

---

## Circuit Diagram

- The soil moisture sensor is connected to the analog input (A0) of the ESP8266.  
- The relay module controlling the water pump is connected to a GPIO pin (D1).
- ESP8266 communicates with the Blynk app for remote control.
![image](https://github.com/user-attachments/assets/7cd3fcff-6523-46b3-9d93-4ddfa45a59d3)

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
![image](https://github.com/user-attachments/assets/887b1e33-2ecc-4d69-94ea-22df5804e2b7)

- **Automated Control**: The ESP8266 reads soil moisture levels and controls the water pump based on the moisture threshold. If the soil is dry, the pump turns on automatically.
- **Remote Control**: Through the Blynk app, users can monitor real-time moisture levels and manually activate or deactivate the pump as needed.
- **Alerts**: Notifications are sent via the Blynk app when the soil moisture is low or when the pump is activated.

  ![image](https://github.com/user-attachments/assets/94d206a5-29bf-49e3-82d2-b4d915f46a24)


## Future Improvements

- **Additional Sensors**: Integrating more sensors, such as temperature and humidity sensors, to gather more environmental data.
- **Weather API Integration**: Using weather forecasts to adjust irrigation schedules.
- **Multi-plant System**: Scaling the system to manage multiple plants with individual sensors and pumps.

## License

This project is open-source under the **MIT License**. Feel free to modify and improve upon it.

## Conclusion

By integrating IoT and Blynk with soil moisture sensors, this project provides an efficient, automated, and remotely controlled irrigation system. It empowers users to monitor soil moisture levels in real-time, ensuring optimal water usage for better crop health and sustainability.
