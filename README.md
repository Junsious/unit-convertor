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

# Конвертер единиц

Это простое приложение для конвертации единиц, основанное на Qt и написанное на C++. Приложение позволяет пользователям конвертировать различные единицы измерения, включая длину, массу, температуру, объем, площадь и скорость.

## Особенности

- **Типы единиц**: Поддерживает конвертацию между различными типами единиц, такими как Длина, Масса, Температура, Объем, Площадь и Скорость.
- **Конвертация единиц**: Конвертирует между единицами внутри выбранного типа единиц.
- **Пользовательский интерфейс**: Простой и интуитивно понятный графический интерфейс с возможностью настройки размера шрифта для лучшей читаемости.

## Скриншоты

![Скриншот конвертера единиц](path/to/screenshot.png)

## Предварительные требования

- **Qt 5.15 или новее**: Убедитесь, что у вас установлен Qt для сборки и запуска этого приложения.
- **Компилятор C++**: Необходим совместимый компилятор C++ для компиляции исходного кода.

## Сборка приложения

1. **Клонируйте репозиторий**:
    ```bash
    git clone https://github.com/Junsious/unit-converter.git
    cd unit-converter
    ```

2. **Откройте проект в Qt Creator**:
    - Откройте Qt Creator и выберите `Открыть проект`.
    - Перейдите в каталог `unit-converter` и откройте файл `.pro`.

3. **Соберите и запустите**:
    - Нажмите кнопку `Сборка`, чтобы скомпилировать проект.
    - Нажмите кнопку `Запуск`, чтобы запустить приложение.

## Использование

1. **Выберите тип единицы**: Выберите тип единицы, который вы хотите конвертировать (Длина, Масса, Температура, Объем, Площадь, Скорость).
2. **Введите значение**: Введите значение, которое вы хотите конвертировать.
3. **Выберите единицы**: Выберите единицу "Из" и единицу "В" из выпадающих меню.
4. **Конвертируйте**: Нажмите кнопку `Конвертировать`, чтобы увидеть результат.

## Обзор кода

- **Класс UnitConverter**: Основной класс, отвечающий за интерфейс и логику конвертации.
- **initializeUnits()**: Инициализирует коэффициенты преобразования единиц для длины, массы, температуры, объема, площади и скорости.
- **updateUnits()**: Обновляет доступные единицы в выпадающих меню в зависимости от выбранного типа единиц.
- **convert()**: Выполняет конвертацию на основе введенных данных и выбранных единиц.

## Лицензия

Этот проект лицензирован под MIT License. См. файл [LICENSE](LICENSE) для получения подробной информации.

## Благодарности

- **Qt Framework**: Обеспечивает графический интерфейс для этого приложения.
- **C++ Language**: Использован для реализации основной логики приложения.

## Контакт

Если у вас есть вопросы или предложения, не стесняйтесь обращаться ко мне через GitHub: [Junsious](https://github.com/Junsious).
