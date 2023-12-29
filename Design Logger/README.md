# Design Logger: A Simple Logging Framework in C++

Design Logger is a C++ program that demonstrates a simple logging framework. It processes log messages based on their severity level, utilizing a `chain of responsibility` pattern where different log processors handle messages of specific severities.

[Main.cpp](Main.cpp)

## Table of Contents
- [Overview of Classes](#overview-of-classes)
- [Program Flow](#program-flow)
- [UML Diagram](#uml-diagram)
- [Installation and Usage](#installation-and-usage)
- [Contributing](#contributing)
- [License](#license)

## Overview of Classes

### `LogLevel` Enum
This enumeration class represents different log levels: INFO, DEBUG, and ERROR.

### `LogProcessor` Class
An abstract class that represents the base log processor. It contains a pointer to the next log processor in the chain and a virtual function `log` that is overridden by derived classes.

### `InfoLogProcess`, `DebugLogProcess`, `ErrorLogProcess` 
These are derived classes from `LogProcessor` that handle INFO, DEBUG, and ERROR log levels, respectively. Each class overrides the `log` function to process messages of the specified severity level.

## Program Flow

1. The program creates a chain of log processors where each processor is responsible for handling a specific log level.
2. When a log message is generated, it is passed through the chain of log processors.
3. Each log processor decides whether it can handle the message based on its severity level. If it can handle it, the message is processed; otherwise, it is passed to the next log processor in the chain.

## UML Diagram

![UML Diagram](Logger_UML.jpg)

Refer to the UML diagram above for a visual representation of the class structure.

## Installation and Usage

Clone the repository:

```git
git clone https://github.com/Shoolapani/awesome-low-level-design-CPP.git
```

### Windows

Navigate to the project directory and compile the code:

```bash

cd '.\Design Logger\'

mingw32-make
./DesignLogger
```

### Linux

Navigate to the project directory and compile the code:

```bash

cd 'Design Logger'

make
./DesignLogger
```

Ensure that you have the necessary build tools installed on your system, and the Makefile is in the same directory as the source code.

## Contributing

Interested in contributing to this project? Thank you! Please read our contributing guidelines before getting started.

## License

This project is licensed under the [MIT License](LICENSE).

Feel free to explore, modify, and enhance the logging framework as needed. Happy coding! 🚀
