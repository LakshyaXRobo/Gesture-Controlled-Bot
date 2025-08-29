🤖 Gesture Controlled Robot  
A wireless Arduino-powered robot that moves according to **hand gestures**, using an accelerometer on a glove and RF communication between transmitter and receiver modules.  

📌 Features  
✅ Wireless gesture-based control using accelerometer  
🎮 Moves forward, backward, left, and right with simple hand tilts  
🔋 Battery-powered and portable  
📡 RF transmitter–receiver communication  
🧠 Interactive human–machine interface  

🎯 Objective  
To design and implement a robot that can be controlled **without remotes or buttons**, using only hand gestures for intuitive and contactless operation.  

🧰 Components Used  

| Component | Quantity |  
|-----------|----------|  
| Arduino Nano | 1 (Transmitter side) |  
| Accelerometer (ADXL335/ADXL345) | 1 |  
| RF Transmitter Module | 1 |  
| Hand Glove | 1 |  
| Arduino UNO | 1 (Receiver side) |  
| RF Receiver Module | 1 |  
| Motor Driver (L293D/L298N) | 1 |  
| DC Gear Motors | 4 |  
| Wheels + Chassis | 1 set |  
| Breadboard + Jumper Wires | Several |  
| Power Supply (Cells) | As required |  

🔌 Pin Connections  

**Transmitter (Arduino Nano + Accelerometer):**  
- Accelerometer X, Y, Z → Analog pins A0, A1, A2  
- RF Transmitter Data Pin → D12  
- VCC → 5V, GND → GND  

**Receiver (Arduino UNO + Motor Driver):**  
- RF Receiver Data Pin → D11  
- Motor Driver IN1 → D2  
- Motor Driver IN2 → D3  
- Motor Driver IN3 → D4  
- Motor Driver IN4 → D5  
- Motors powered by external cells (~7.4V)  
- Arduino powered via VIN (from same battery)  

👉 View the full codes here:  
🔗 [Transmitter Code](Code/transmitter.ino)  
🔗 [Receiver Code](Code/receiver.ino)  

🎥 Demo Video  
Watch the robot respond to hand gestures in real time!  
▶️ [Click to Watch Demo Video](demo_link_here)  

🛠️ How to Use  
1. Upload the **transmitter code** to Arduino Nano.  
2. Upload the **receiver code** to Arduino UNO.  
3. Connect all components as per pin table.  
4. Wear the glove with accelerometer.  
5. Power on both sides with batteries.  
6. Control the robot by tilting your hand.  

💡 Future Enhancements  
- Use Bluetooth/Wi-Fi for longer range control  
- Add obstacle detection with ultrasonic sensors  
- Integrate camera module for surveillance  
- Improve gesture recognition with machine learning  
- Add rechargeable Li-ion battery pack  

👨‍💻 Made By  
Lakshya Sharma  
Inventor & Developer  
B.Tech ECE | Robotics Enthusiast  
