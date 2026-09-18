# 🧮 C Calculator

A simple **menu-driven calculator written in C** that performs basic mathematical operations. This project is designed to strengthen fundamental C programming concepts such as functions, loops, conditional statements, and the `switch` statement.

---

## 🎯 Project Objective

The objective of this project is to build a command-line calculator that allows the user to perform basic mathematical calculations through an interactive menu.

---

## ✨ Features

The calculator supports:

- ➕ Addition
- ➖ Subtraction
- ✖️ Multiplication
- ➗ Division
- `%` Modulus
- 🚪 Exit option
- ⚠️ Division-by-zero handling
- 🔄 Repeated calculations using a loop
- 📋 Menu-driven interface
- 🧩 Separate functions for calculations

---

## 🧠 Concepts Practiced

This project focuses on the following C concepts:

- Variables
- Data Types
- `printf()`
- `scanf()`
- Arithmetic Operators
- `if-else`
- `switch-case`
- `while` / `do-while` loop
- Functions
- Function parameters
- Return values
- Error handling
- Basic program structure

---

## 📋 Project Requirements

### 1. Display Calculator Menu

The program should display a menu similar to:

```text
========================
       CALCULATOR
========================

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit

Enter your choice:
```

---

### 2. Take User Choice

The program should ask the user to select an operation from `1` to `6`.

Example:

```text
Enter your choice: 1
```

---

### 3. Take Two Numbers

For operations `1` to `5`, the program should ask the user to enter two numbers.

Example:

```text
Enter first number: 20
Enter second number: 10
```

---

### 4. Use Switch-Case

The selected operation should be handled using a `switch-case` statement.

Expected structure:

```text
switch(choice)

    case 1:
        Addition
        break

    case 2:
        Subtraction
        break

    case 3:
        Multiplication
        break

    case 4:
        Division
        break

    case 5:
        Modulus
        break

    case 6:
        Exit
        break

    default:
        Invalid choice
```

---

### 5. Create Separate Functions

Create individual functions for each mathematical operation:

```text
addition()
subtraction()
multiplication()
division()
modulus()
```

The `main()` function should primarily manage the menu, user input, and program flow.

---

### 6. Handle Division by Zero

The program must prevent division by zero.

For example:

```text
Enter first number: 10
Enter second number: 0

Error: Cannot divide by zero.
```

Use an `if-else` condition to check the second number before performing division.

---

### 7. Use a Loop

After completing an operation, the calculator should return to the main menu instead of terminating immediately.

Example:

```text
Result = 30

========================
       CALCULATOR
========================

1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Modulus
6. Exit
```

The loop should continue until the user selects `6. Exit`.

---

# 🧪 Test Cases

The following test cases should be used to verify the program.

### Test Case 1 — Addition

```text
Choice: 1
First Number: 20
Second Number: 10

Expected Result: 30
```

### Test Case 2 — Subtraction

```text
Choice: 2
First Number: 20
Second Number: 10

Expected Result: 10
```

### Test Case 3 — Multiplication

```text
Choice: 3
First Number: 5
Second Number: 4

Expected Result: 20
```

### Test Case 4 — Division

```text
Choice: 4
First Number: 20
Second Number: 5

Expected Result: 4
```

### Test Case 5 — Modulus

```text
Choice: 5
First Number: 17
Second Number: 5

Expected Result: 2
```

### Test Case 6 — Division by Zero

```text
Choice: 4
First Number: 10
Second Number: 0

Expected Result:
Error: Cannot divide by zero.
```

### Test Case 7 — Invalid Choice

```text
Choice: 9

Expected Result:
Invalid choice.
```

---

# 📂 Project Structure

```text
01-Calculator/
│
├── 01_calculator.c
└── README.md
```

---

# ▶️ How to Compile

Using GCC:

```bash
gcc calculator.c -o calculator
```

---

# ▶️ How to Run

### Windows

```bash
calculator.exe
```

### Linux / macOS

```bash
./calculator
```

---

# 🚀 Future Improvements

After completing the basic calculator, the following features can be added:

- Decimal number support
- Power calculation
- Square root
- Percentage calculation
- Calculation history
- Clear screen option
- Improved user interface
- Input validation

These features should be added only after the basic version is working correctly.

---

# 🎓 Learning Goal

The main goal of this project is **not just to create a calculator**.

By completing this project, you should become comfortable with:

```text
Input
  ↓
Variables
  ↓
Conditions
  ↓
Switch-Case
  ↓
Functions
  ↓
Loops
  ↓
Output
```

This project will serve as the foundation for larger C projects involving **structures, file handling, data structures, and modular programming**.

## 📌 Project Status

**Language:** C

**Level:** Beginner

**Project Type:** CLI / Console Application
