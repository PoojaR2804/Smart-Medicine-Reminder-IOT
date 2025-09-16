# Smart-Medicine-Reminder-IOT
A college-expo project that reminds patients to take medicines on time and notifies caretakers about missed doses.
## Features
- Real-time clock (DS3231) to schedule multiple reminders  
- Buzzer + LEDs to alert the user  
- Push-button confirmation to log medicine intake  
- ESP8266 (Blynk IoT) integration for missed medicine notifications  
- LCD display for time & refill alerts  

## Hardware Used
- Arduino UNO  
- RTC DS3231  
- Buzzer, LEDs, Push Button  
- LCD I2C Display  
- ESP8266 NodeMCU (Blynk IoT)  

## How It Works
At set times, the device alerts the user using buzzer and LEDs.  
If the push button isn’t pressed within 30 seconds, a signal is sent to the NodeMCU which triggers a Blynk notification to the caretaker.  
The LCD also shows refill alerts when medicines are running out.

## Repository Contents
- Arduino code for the Smart Medicine Reminder  
- NodeMCU (ESP8266) code for Blynk IoT integration  

## Future Improvements
- Add automatic pill dispensing  
- Add mobile app integration for logs and reminders
## 📄 Project Report  
[Download the Word document here](Smart Medicine Reminder and Caretaker Alert System.docx)
- 
