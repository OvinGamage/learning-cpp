# Mastering C++: Foundational Systems Programming 🛠️

Welcome! This repository serves as a technical log of my journey mastering **C++ from absolute zero**, beginning in **July 2026**. 

Unlike high-level languages, C++ requires a strict understanding of memory, data types, and hardware compilation. This repository is a structured collection of programs, syntax deep-dives, and utility scripts designed to document exactly *when, where, and why* specific C++ methods and architecture paradigms are used.

---

## 🎯 Repository Purpose & Structure

Every file in this repository is heavily commented to serve as a production-ready reference manual for core C++ concepts. 

Inside the scripts, you will find practical code implementations covering:
* **The Basics:** Strongly-typed variables, standard input/output (`std::cout`, `std::cin`), and basic control flow.
* **Functional Architecture:** Pass-by-value vs. pass-by-reference, scope limits, and function overloading.
* **Memory Management:** Pointers, references, and understanding how data lives on the Stack vs. the Heap.
* **Data Structures:** Managing arrays, vectors, and working within the Standard Template Library (STL).

---

## 💻 Toolchain & Environment Specs

To ensure a robust learning foundation, I bypassed automated IDES to configure a native compilation toolchain from scratch:
* **Compiler:** `g++` via **MSYS2 (UCRT64)**
* **Environment:** Formatted system `PATH` variables to link compilation frameworks cleanly with global terminals.
* **Execution:** All scripts are compiled natively using standard commands via the terminal:

```powershell
# Compile the target file into an executable binary
g++ -O2 main.cpp -o main.exe

# Execute the binary
./main.exe
