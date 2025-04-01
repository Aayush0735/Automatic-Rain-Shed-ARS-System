# 🌧️ Automatic Rain Shed System

## 📌 Project Overview
The **Automatic Rain Shed System** is an IoT-based project designed to deploy a protective shed automatically when rain is detected. This system is ideal for protecting outdoor areas, vehicles, or equipment from rainfall.

## 🚀 Features
- 🌦 **Automatic Rain Detection** using Rain Sensors
- ⚙️ **Motorized Shed Deployment** via Microcontroller
- 📶 **IoT-Based Alerts** (optional - using WiFi module)
- 🔋 **Energy Efficient** with smart power management
- 🔧 **Easy to Install & Configure**

## 🛠️ Components Used
### **Hardware:**
- Arduino/ESP-32
- Rain Sensor 
- Servo Motor / DC Motor
- Motor Driver Module 
- Power Supply Unit

### **Software & Tools:**
- Arduino IDE / Python (for Arduino)
- TinkerCAD / Proteus (for circuit simulation) (Optional)
- GitHub (for version control)

## 📜 Circuit Diagram
![Circuit Diagram](images/circuit_diagram.png)

## 🔧 Installation Guide
1. **Hardware Setup:**
   - Connect the Rain Sensor to the microcontroller.
   - Attach the motor driver and servo motor.
   - Set up the power connections.

2. **Software Setup:**
   - Clone this repository:
     ```sh
     git clone https://github.com/yourusername/Automatic-Rain-Shed-System.git
     ```
   - Upload `rain_shed.ino` to the Arduino board.
   - Modify parameters as needed in the script.

3. **Testing:**
   - Simulate rain using a wet cloth on the sensor.
   - Observe the automatic deployment of the shed.

## 📸 Demonstration
![Demo GIF](images/demo.gif)

## 📂 Folder Structure
```
Automatic-Rain-Shed-System/
│── code/
│   ├── arduino/               # Arduino scripts
│   ├── raspberry_pi/          # Raspberry Pi scripts
│── circuits/
│   ├── circuit_diagram.png    # Circuit diagram
│── docs/
│   ├── README.md              # Project documentation
│   ├── INSTALLATION.md        # Setup and installation guide
│── images/
│   ├── demo.gif               # System demo
│   ├── hardware_setup.jpg     # Hardware setup images
│── LICENSE                    # Open-source license
│── .gitignore                  # Ignore unnecessary files
```

## 🏆 Future Improvements
- 📡 **Remote Monitoring** via IoT Cloud Dashboard
- 🔋 **Solar-Powered System** for better sustainability
- 📊 **Data Logging** to track rainfall patterns

## 📜 License
This project is licensed under the **MIT License**. Feel free to use and modify.

## 👨‍💻 Contributing
Pull requests are welcome! Please fork the repository and submit changes via PR.

## 📞 Contact
For any queries or suggestions, reach out to **your.email@example.com** or open an issue.

---
_🌟 Star this repository if you found it useful!_ 🚀
