# Computer Architecture and Organisation — Laboratory Work  

This repository contains laboratory exercises and circuit designs created for the course Computer Architecture and Organisation. Its purpose is to collect Logisim-evolution circuit projects, notes, and example configurations that demonstrate fundamental digital logic building blocks and program execution concepts used in computer design.  

---

## Overview  

- Author: Arshpreet Kaur (241210022)  
- GitHub Username: 241210022  
- Course: Computer Architecture and Organisation  
- Primary Tools: Logisim-evolution (recommended version: v4.0.0), GCC, GDB  

This repository focuses on practical, hands-on implementation of combinational circuits, arithmetic units, and system-level concepts. Each experiment is designed to strengthen understanding of how hardware and software interact at a low level.  

---

## Experiments Included  

### Digital Logic Design (Logisim Evolution)  
- Half Adder  
- Full Adder  
- 4-bit Adder  
- Multiplexer (MUX)  
- Priority Encoder  
- Combinational Logic using OR Gates  
- Ripple Carry Adder  
- 4-bit Common Bus System (using multiplexers and registers)  

### Program Analysis (GCC & GDB)  
- Program execution tracing using GDB  
- Demonstration of different addressing modes  

---

## Requirements  

- Logisim-evolution v4.0.0 or later  
  https://github.com/logisim-evolution/logisim-evolution  
- GCC Compiler  
- GDB Debugger  

The .circ files include project metadata which Logisim-evolution uses to correctly configure and simulate the circuits.  

---

## Usage  

### Running Logisim Circuits  
1. Open Logisim Evolution  
2. Load the required .circ file  
3. Simulate using input switches and observe outputs  

### Running GDB Experiments  
```bash
gcc program.c -o program
./program

gdb ./program
```

---

## Learning Objectives
1. Understand design and implementation of basic arithmetic circuits
2. Analyze combinational logic and data transfer mechanisms
3. Study carry propagation in multi-bit adders
4. Observe program execution at memory level using GDB
5. Understand addressing modes in computer architecture

---

## Contributing
If you want to contribute additional circuits or improvements:

- Fork the repository
- Add new .circ files or documentation
- Submit a pull request with proper description

---

## License
This repository does not include an explicit license. If you plan to reuse or redistribute the circuits, please contact the repository owner (241210022) or include a license file for clarity.
