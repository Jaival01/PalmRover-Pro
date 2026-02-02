🚗 Palm Rover Pro

Palm Rover Pro is a gesture-controlled robotic car that moves based on palm recognition. The system detects hand movements in real time and converts them into motion commands, allowing the rover to move forward, turn left, or turn right without any physical contact.
This project focuses on intuitive human–robot interaction using simple, low-cost hardware components.

📌 Project Overview

Traditional robotic cars rely on remotes, buttons, or mobile apps for control. Palm Rover Pro removes that dependency by introducing touchless control. By sensing palm movements, the rover responds instantly, making navigation natural and efficient.

The project combines sensors, a microcontroller, and a motor driver to demonstrate how gesture recognition can be implemented in real-world robotic systems.

🔧 Components Used
Hardware Components

Arduino Uno R3 – Main microcontroller

Motor Driver Module (L298N / similar) – Controls motor direction and speed

DC Motors (2 or 4) – For vehicle movement

Robot Car Chassis – Base structure of the rover

Infrared (IR) Sensors (2) – Palm detection and directional sensing

Ultrasonic Sensor (HC-SR04) – Distance sensing / palm detection

Servo Motor (SG90 / 9g) – Sensor positioning (if applicable)

Battery Packs – Power supply for motors and Arduino

Jumper Wires (Male–Female / Male–Male) – Connections

Wheels & Motor Mounts

⚙️ How It Works

The sensors continuously monitor the position and movement of the user’s palm.

Sensor data is sent to the Arduino for processing.

Based on the detected palm movement:

Palm forward → Car moves forward

Palm left → Car turns left

Palm right → Car turns right

The Arduino sends control signals to the motor driver.

The motor driver powers the DC motors to move the rover accordingly.

All actions happen in real time, enabling smooth and responsive control.

🧠 Why This Project Is Useful

Touchless Control: Eliminates the need for remotes or physical switches

Intuitive Interaction: Natural palm movements make control easy to learn

Assistive Technology: Can be adapted for people with mobility limitations

Robotics Learning: Great introduction to sensors, motor control, and Arduino

Future Applications: Smart vehicles, automation systems, gesture-based interfaces

🚀 Applications

Gesture-controlled robotic systems

Smart vehicle prototypes

Assistive robotics

Human–machine interaction research

Educational robotics projects

🛠️ Technologies Used

Arduino IDE

Embedded C / Arduino Programming

Sensor-Based Input Processing

Motor Control Logic
