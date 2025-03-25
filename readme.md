# OOP Sesi 1 - Cakrawala

This repository contains various implementations of basic Object-Oriented Programming (OOP) concepts as part of a college assignment. The project covers different programming paradigms such as OOP, functional, procedural, imperative, and declarative programming.

## 📂 Project Structure

```
📁 OOP_Sesi1_Cakrawala
├── 1_functional_calculator.cpp   # Functional approach for a calculator
├── 1_oop_calculator.cpp         # OOP approach for a calculator
├── 2_oop_student.cpp            # OOP approach for a Student class
├── 2_procedural_student.cpp     # Procedural approach for a Student class
├── 3_declarative_rectangle.cpp  # Declarative approach for a Rectangle class
├── 3_oop_rectangle.cpp          # OOP approach for a Rectangle class
├── 4_imperative_counter.cpp     # Imperative approach for a Counter class
├── 4_oop_counter.cpp            # OOP approach for a Counter class
├── 5_functional_point.cpp       # Functional approach for a Point class
├── 5_oop_point.cpp              # OOP approach for a Point class
└── readme.md                    # Documentation
```

## 🛠 How to Run the Code

Each `.cpp` file is a standalone program that can be compiled and executed using a C++ compiler such as `g++`.

### Prerequisites

- A C++ compiler (e.g., `g++` from MinGW, Clang, or MSVC)
- A terminal or command prompt

### Compilation and Execution

For any of the files, use the following command:

```sh
 g++ filename.cpp -o output_file
 ./output_file
```

For example, to run the **OOP Calculator**:

```sh
g++ 1_oop_calculator.cpp -o calculator
./calculator
```

## 📖 Explanation of Each Implementation

### 1. Calculator

- **Functional (`1_functional_calculator.cpp`)**: Implements calculator operations using pure functions.
- **OOP (`1_oop_calculator.cpp`)**: Implements a `Calculator` class with methods for different operations.

### 2. Student

- **OOP (`2_oop_student.cpp`)**: Uses a `Student` class with encapsulated attributes.
- **Procedural (`2_procedural_student.cpp`)**: Uses a `struct` and functions to handle student data.

### 3. Rectangle

- **Declarative (`3_declarative_rectangle.cpp`)**: Uses lambda functions to compute the rectangle area.
- **OOP (`3_oop_rectangle.cpp`)**: Defines a `Rectangle` class to calculate the area.

### 4. Counter

- **Imperative (`4_imperative_counter.cpp`)**: Uses a simple integer variable to count.
- **OOP (`4_oop_counter.cpp`)**: Implements a `Counter` class with methods to increment and retrieve the count.

### 5. Point

- **Functional (`5_functional_point.cpp`)**: Uses pure functions to calculate the distance from the origin.
- **OOP (`5_oop_point.cpp`)**: Defines a `Point` class with a method for calculating distance.

## 📌 Notes

- All implementations are designed to demonstrate different programming paradigms.
- The goal is to understand how the same problem can be solved using different approaches.

## 📞 Contact

For any questions or clarifications, feel free to reach out or discuss in our college group!

---

🚀 Happy Coding!
