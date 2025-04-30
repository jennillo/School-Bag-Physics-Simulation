# School Bag Physics Simulation

This repository contains C++ simulations that demonstrate various physics concepts related to the weight and impact of school bags on students. These simulations support a paper discussing the hidden physics behind heavy school bags and the effects they have on the human body.

## Contents

The repository includes five C++ programs:

1. **Work and Energy (work.cpp)**  
   Simulates the work needed to carry a school bag across different distances and the field.

2. **Torque and Balance (torque.cpp)**  
   Models the lateral torque experienced when carrying a backpack asymmetrically and frontal torque.

3. **Momentum and Impulse (momentum_impulse.cpp)**  
   Shows how sudden stops of a heavy bag can generate large forces.

4. **Pressure Distribution (pressure.cpp)**  
   Simulates pressure on the shoulders and back depending on strap width and bag mass.

5. **Ideal Mass Calculation (ideal_mass.cpp)**  
   Calculates the ideal bag weight based on a student's body weight using health guidelines.

## How to Run

Each `.cpp` file is a standalone program. To run:

1. Make sure you have a C++ compiler installed (like `g++`).
2. Compile and run a file. Example:
   ```bash
   g++ work.cpp -o work
   ./work
