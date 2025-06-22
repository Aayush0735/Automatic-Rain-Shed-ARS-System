# 🌧️ Automatic Rain Shed System

## 📌 Project Overview
The **Automatic Rain Shed System** is an IoT-based project designed to automatically deploy a protective shed when rain is detected. This system helps safeguard outdoor areas, vehicles, or equipment from rainfall.

---

## 🚀 Features
- 🌦 **Automatic Rain Detection** using Rain Sensors  
- ⚙️ **Motorized Shed Deployment** via Microcontroller  
- 📶 **IoT-Based Alerts** *(optional - using WiFi module)*  
- 🔋 **Energy Efficient** with smart power management  
- 🔧 **Easy to Install & Configure**

---

## 🛠️ Components Used

### Hardware
- Arduino / ESP-32  
- Rain Sensor  
- Servo Motor / DC Motor  
- Motor Driver Module  
- Power Supply Unit  

### Software & Tools
- Arduino IDE / Python (for Arduino)  
- TinkerCAD / Proteus *(for simulation - optional)*  
- GitHub *(for version control)*

---

## 📜 Circuit Diagram
*Refer to `circuits/circuit_diagram.png` for the full wiring layout.*

---

## 🔧 Installation Guide

### Hardware Setup
1. Connect the Rain Sensor to the microcontroller.
2. Attach the motor driver and servo motor.
3. Set up power connections appropriately.

### Software Setup
1. Clone this repository:
   ```
   git clone https://github.com/yourusername/Automatic-Rain-Shed-System.git
````

2. Open `rain_shed.ino` from `code/arduino/` using Arduino IDE.
3. Select the correct board and port.
4. Upload the sketch to the board.

### Testing

* Simulate rain by placing a wet cloth on the sensor.
* The servo motor should activate and deploy the orange shed.

---

## 📸 Demonstration

**Hardware Images:**
![Setup 1](../images/1.jpg)
![Setup 2](../images/2.jpg)
![Setup 3](../images/3.jpg)

**Video Demo:**
📽️ [Watch Demo](../videos/demo.mp4)

---

## 📂 Folder Structure

```
Automatic-Rain-Shed-System/
├── code/
│   ├── arduino/               # Arduino scripts
│   └── raspberry_pi/          # Raspberry Pi scripts
├── circuits/
│   └── circuit_diagram.png    # Circuit diagram
├── docs/
│   ├── README.md              # Project documentation
│   └── INSTALLATION.md        # Setup and installation guide
├── images/
│   ├── 1.jpg                  # Hardware setup image
│   ├── 2.jpg
│   ├── 3.jpg
├── videos/
│   └── demo.mp4               # System demo video
├── LICENSE                    # Open-source license
└── .gitignore                 # Ignore unnecessary files
```

---

## 🏆 Future Improvements

* 📡 Remote Monitoring via IoT Cloud Dashboard
* 🔋 Solar-Powered System for improved sustainability
* 📊 Data Logging to track rainfall patterns over time

---

## 📜 License

This project is licensed under the [MIT License](LICENSE).
Feel free to use, share, and modify it.

---

## 👨‍💻 Contributing

Pull requests are welcome!
Please fork the repository and submit your proposed changes via a PR.

---

## 📞 Contact

For any queries or suggestions, reach out to:
📧 **[aayubari@gmail.com](mailto:aayubari@gmail.com)**
or open an issue in this repository.
