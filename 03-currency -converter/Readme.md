# 💱 Currency Converter

A simple **Currency Converter built using C** that converts an amount from one currency to another using predefined exchange rates.

This project is created to practice fundamental C programming concepts such as functions, conditional statements, switch-case, loops, variables, and mathematical calculations.

---

## 📌 Features

- Convert between multiple currencies
- Simple menu-driven interface
- User-friendly input and output
- Supports repeated conversions
- Input validation
- Uses predefined exchange rates
- Beginner-friendly C implementation

---

## 🛠️ Technologies Used

- **Language:** C
- **Compiler:** GCC / MinGW
- **Editor:** VS Code

---

## 💱 Supported Currencies

The initial version can support:

- 🇮🇳 INR — Indian Rupee
- 🇺🇸 USD — US Dollar
- 🇪🇺 EUR — Euro
- 🇬🇧 GBP — British Pound
- 🇯🇵 JPY — Japanese Yen

> Exchange rates in the basic version are predefined and may not represent current market rates.

---

## 📂 Project Structure

```text
currency-converter/
│
├── currency_converter.c
├── README.md
└── .gitignore
```

---

## ⚙️ How It Works

The program follows these basic steps:

```text
Start
  ↓
Display Currency Menu
  ↓
Select From Currency
  ↓
Select To Currency
  ↓
Enter Amount
  ↓
Get Exchange Rate
  ↓
Calculate Converted Amount
  ↓
Display Result
  ↓
Convert Again?
  ↓
Exit
```

---

## 🧮 Conversion Formula

The basic conversion formula is:

```text
Converted Amount = Amount × Exchange Rate
```

For example:

```text
Amount = 100 USD

Exchange Rate:
1 USD = 83.50 INR

Converted Amount:
100 × 83.50 = 8350 INR
```

---

## 🖥️ Example Output

```text
=================================
       CURRENCY CONVERTER
=================================

Available Currencies:

1. USD - US Dollar
2. INR - Indian Rupee
3. EUR - Euro
4. GBP - British Pound
5. JPY - Japanese Yen

Enter From Currency: 1
Enter To Currency: 2

Enter Amount: 100

---------------------------------
100.00 USD = 8350.00 INR
---------------------------------

Do you want to convert again? (y/n):
```

---

## 🧠 Concepts Practiced

This project helps practice:

- Variables
- Data types
- `printf()`
- `scanf()`
- `if-else`
- `switch-case`
- `while` loop
- `do-while` loop
- Functions
- Arithmetic operators
- Input validation
- Menu-driven programming

---

## 🚀 Future Improvements

The project can be improved by adding:

- More currencies
- Currency symbols
- Separate functions for each conversion
- Conversion history
- File handling
- Structures
- Dynamic exchange rates
- Live exchange-rate API
- JSON data processing
- Better error handling

---

## 📈 Project Versions

### Version 1.0

- Basic currency converter using fixed exchange rates.

- Improved program using functions and structures.

### Version 2.0

- Add file handling and conversion history.

### Version 3.0

- Connect to a live currency exchange-rate API.

---

## 🎯 Learning Goal

The main goal of this project is to strengthen C programming fundamentals by building a practical application instead of only solving individual programming problems.

---

## 👨‍💻 Author

**Dhruvi Gundecha**

---

## 📄 License

This project is created for learning and educational purposes.
