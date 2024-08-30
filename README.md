# Unit Converter

This is a simple Qt-based unit converter application written in C++. The application allows users to convert between various units of measurement, including length, mass, temperature, volume, area, and speed.

## Features

- **Unit Types**: Supports conversion between different unit types such as Length, Mass, Temperature, Volume, Area, and Speed.
- **Unit Conversion**: Converts between units within the selected unit type.
- **User Interface**: Simple and intuitive GUI with adjustable font size for better readability.

## Prerequisites

- **Qt 5.15 or later**: Ensure you have Qt installed to build and run this application.
- **C++ Compiler**: A compatible C++ compiler is needed to compile the source code.

## Building the Application

1. **Clone the Repository**:
    ```bash
    git clone https://github.com/Junsious/unit-converter.git
    cd unit-converter
    ```

2. **Open the Project in Qt Creator**:
    - Open Qt Creator and select `Open Project`.
    - Navigate to the `unit-converter` directory and open the `.pro` file.

3. **Build and Run**:
    - Click the `Build` button to compile the project.
    - Click the `Run` button to start the application.

## Usage

1. **Select Unit Type**: Choose the type of unit you want to convert (Length, Mass, Temperature, Volume, Area, Speed).
2. **Enter Value**: Input the value you want to convert.
3. **Select Units**: Choose the "From" unit and the "To" unit from the dropdown menus.
4. **Convert**: Click the `Convert` button to see the result.

## Code Overview

- **UnitConverter Class**: Main class responsible for the UI and conversion logic.
- **initializeUnits()**: Initializes unit conversion factors for length, mass, temperature, volume, area, and speed.
- **updateUnits()**: Updates available units in the dropdown menus based on the selected unit type.
- **convert()**: Performs the conversion based on user input and selected units.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Acknowledgements

- **Qt Framework**: Provides the GUI toolkit for this application.
- **C++ Language**: Used for implementing the core logic of the application.

## Contact

If you have any questions or suggestions, feel free to contact me via GitHub: [Junsious](https://github.com/Junsious).

