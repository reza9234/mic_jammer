# Microphone Jammer

The goal of this project is to generate a 40kHz ultrasonic signal using an Arduino Nano and amplify it using an IRF540N MOSFET to create an effective jamming signal for microphones.

## Circuit Components

- **Arduino Nano**: Generates a 40kHz PWM signal.
- **IRF540N MOSFET**: Amplifies the PWM signal from the Arduino.
- **Resistors**:
  - R2: 100 ohms, load resistor between Vdd and the drain of the MOSFET.
  - R3: 10k ohms, pull-down resistor for the MOSFET gate.
- **Power Supply**: A 10V battery powers the MOSFET and transducer.
- **Push Button**: Connected to pin 2 of the Arduino to toggle the signal on and off.
- **LED**: Connected to pin 5 of the Arduino to indicate the signal status.
- **Ultrasonic Transducer**: Emits the 40kHz ultrasonic signal.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Circuit Diagram](#circuit-diagram)

## Installation

To set up the project, follow these steps:

1. Clone the repository:
   ```sh
   git clone https://github.com/reza9234/mic_jammer.git
2. Open the Arduino file `sketch_jul02a.ino` in the Arduino IDE.
3. Upload the code to your Arduino board.

## Usage

Explain how to use the project, including any important details about the setup and operation. For example:

1. Connect the components as shown in the circuit diagram.
2. Power the circuit.
3. Press the button to activate the system.

## Circuit-Diagram
![image (1)](https://github.com/user-attachments/assets/b20e98ac-0f1a-404d-8ab4-a70b29d8586a)
![5837174509239648939](https://github.com/user-attachments/assets/2e78dfd2-679c-4cc2-80d4-d00586e39de1)
