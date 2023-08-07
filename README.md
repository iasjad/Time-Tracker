# App Time Tracker

App Time Tracker is a C++ program that tracks the amount of time spent on active applications in a Windows environment.

## Table of Contents

- [Description](#description)
- [Usage](#usage)
- [Functionality](#functionality)
- [Code Explanation](#code-explanation)
- [Requirements](#requirements)
- [License](#license)

## Description

App Time Tracker is a simple utility program designed to monitor and calculate the time spent on active applications. It periodically checks the currently active window's title and calculates the time spent on each application.

## Usage

1. Clone the repository or download the source code.

2. Open the project in your preferred C++ development environment.

3. Build and run the program.

4. The program will continuously track the active application and display the time spent on each application in seconds.

## Functionality

- The program retrieves the title of the currently active window using the Windows API.
- It tracks application changes and calculates the time spent on each application.
- The tracked data is displayed in the console, showing the application name and the time spent on it.
- You can easily modify the program to store the data in a file, database, or any other suitable storage format.

## Code Explanation

The main parts of the code include:

- The `getActiveWindowTitle()` function: This function uses the Windows API to retrieve the title of the currently active window. It returns the title as a `std::string`.

- The `main()` function: The main loop of the program. It continuously tracks the active application's title, compares it with the previously tracked application, and calculates the time spent.

- The main loop: This loop periodically checks the active window's title using `getActiveWindowTitle()` and compares it with the previously tracked application. If the application has changed, it calculates and displays the time spent on the previous application.

## Requirements

- Windows Operating System
- C++ Development Environment (e.g., Visual Studio, MinGW)

## License

This project is licensed under the [MIT License](LICENSE).
