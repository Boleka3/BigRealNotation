# BigReal Number Calculator

A C++ implementation of a BigReal number calculator that can handle large real numbers with high precision. This project was developed as part of the FCAI-OOP-2023 Assignment 2.

## Project Description

BigReal is a C++ class that implements operations on large real numbers, allowing for precise calculations beyond the limitations of standard floating-point types. The implementation supports both positive and negative numbers with decimal points.

## Features

- Support for large real numbers with decimal points
- Basic arithmetic operations:
  - Addition (+)
  - Subtraction (-)
- Comparison operations:
  - Less than (<)
  - Greater than (>)
  - Equal to (==)
- Input validation for real numbers
- Input/Output stream operators (<<, >>)
- Proper handling of positive and negative numbers

## Implementation Details

The `BigReal` class stores numbers as:
- A sign character ('+' or '-')
- An integer part (string)
- A fractional part (string)
- A boolean flag indicating the presence of a decimal point

## Usage

### Creating BigReal Numbers

```cpp
// Create BigReal numbers using string literals
BigReal num1("632145269.3698745");
BigReal num2("-254789631.3698747");
```

### Performing Operations

```cpp
// Addition
BigReal sum = num1 + num2;

// Subtraction
BigReal difference = num1 - num2;

// Comparison
bool isLess = num1 < num2;
bool isGreater = num1 > num2;
bool isEqual = num1 == num2;

// Input validation
bool isValid = BigReal::isValid("123.456");
```

### Input/Output

```cpp
BigReal num;
std::cin >> num;  // Input
std::cout << num; // Output
```

## Project Structure

- `BigReal.h`: Header file containing the class declaration
- `BigReal.cpp`: Implementation file containing the class methods
- `main.cpp`: Example usage and testing of the BigReal class


## Supervision

- Dr. Mohamed El-Ramly

## Requirements

- C++ compiler with C++11 or later support
- Standard C++ libraries

## Building and Running

1. Compile the project:
```bash
g++ -std=c++11 main.cpp BigReal.cpp -o bigreal
```

2. Run the executable:
```bash
./bigreal
```

## Notes

- The implementation handles numbers as strings to maintain precision
- Input validation ensures proper formatting of real numbers
- The class supports both positive and negative numbers
- Decimal points are properly handled in all operations
