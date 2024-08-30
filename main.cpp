#include <QApplication>
#include <QWidget>
#include <QComboBox>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLabel>
#include <QDoubleValidator>
#include <QHBoxLayout>
#include <QMap>
#include <QFont>
#include <QPalette>
#include <QWidget>
#include <QPainter>
#include <QBrush>

class UnitConverter : public QWidget {
    Q_OBJECT

public:
    UnitConverter(QWidget *parent = nullptr) : QWidget(parent) {
        // Setting a larger font for the entire interface
        QFont uiFont;
        uiFont.setPointSize(12); // Increase the font size as desired
        this->setFont(uiFont);

        // Creating UI elements
        unitTypeCombo = new QComboBox(this);
        unitTypeCombo->addItem("Length");
        unitTypeCombo->addItem("Mass");
        unitTypeCombo->addItem("Temperature");
        unitTypeCombo->addItem("Volume");
        unitTypeCombo->addItem("Area");
        unitTypeCombo->addItem("Speed");

        valueInput = new QLineEdit(this);
        valueInput->setValidator(new QDoubleValidator(this));

        fromUnitCombo = new QComboBox(this);
        toUnitCombo = new QComboBox(this);

        convertButton = new QPushButton("Convert", this);
        resultLabel = new QLabel("Result: ", this);

        // Styling the result label
        QFont resultFont;
        resultFont.setPointSize(16);
        resultFont.setBold(true);
        resultLabel->setFont(resultFont);
        resultLabel->setStyleSheet("QLabel { background-color: #E0E0E0; padding: 10px; border: 1px solid #B0B0B0; border-radius: 5px; }");

        // Layout setup
        QVBoxLayout *layout = new QVBoxLayout(this);
        layout->addWidget(unitTypeCombo);
        layout->addWidget(new QLabel("Value:", this));
        layout->addWidget(valueInput);
        layout->addWidget(new QLabel("From:", this));
        layout->addWidget(fromUnitCombo);
        layout->addWidget(new QLabel("To:", this));
        layout->addWidget(toUnitCombo);
        layout->addWidget(convertButton);
        layout->addWidget(resultLabel);

        setLayout(layout);

        // Connecting signals and slots
        connect(unitTypeCombo, SIGNAL(currentIndexChanged(int)), this, SLOT(updateUnits()));
        connect(convertButton, SIGNAL(clicked()), this, SLOT(convert()));

        // Initializing unit lists
        initializeUnits();
        updateUnits(); // Updating unit list based on the selected type
    }

private slots:
    void updateUnits() {
        QString unitType = unitTypeCombo->currentText();
        fromUnitCombo->clear();
        toUnitCombo->clear();

        if (unitType == "Length") {
            fromUnitCombo->addItems(lengthUnits.keys());
            toUnitCombo->addItems(lengthUnits.keys());
        } else if (unitType == "Mass") {
            fromUnitCombo->addItems(massUnits.keys());
            toUnitCombo->addItems(massUnits.keys());
        } else if (unitType == "Temperature") {
            fromUnitCombo->addItems(temperatureUnits.keys());
            toUnitCombo->addItems(temperatureUnits.keys());
        } else if (unitType == "Volume") {
            fromUnitCombo->addItems(volumeUnits.keys());
            toUnitCombo->addItems(volumeUnits.keys());
        } else if (unitType == "Area") {
            fromUnitCombo->addItems(areaUnits.keys());
            toUnitCombo->addItems(areaUnits.keys());
        } else if (unitType == "Speed") {
            fromUnitCombo->addItems(speedUnits.keys());
            toUnitCombo->addItems(speedUnits.keys());
        }
    }

    void convert() {
        QString unitType = unitTypeCombo->currentText();
        double inputValue = valueInput->text().toDouble();
        QString fromUnit = fromUnitCombo->currentText();
        QString toUnit = toUnitCombo->currentText();
        double result = 0.0;

        if (unitType == "Length") {
            result = inputValue * lengthUnits[fromUnit] / lengthUnits[toUnit];
        } else if (unitType == "Mass") {
            result = inputValue * massUnits[fromUnit] / massUnits[toUnit];
        } else if (unitType == "Temperature") {
            if (fromUnit == "Celsius") {
                if (toUnit == "Fahrenheit") {
                    result = inputValue * 9.0 / 5.0 + 32;
                } else if (toUnit == "Kelvin") {
                    result = inputValue + 273.15;
                }
            } else if (fromUnit == "Fahrenheit") {
                if (toUnit == "Celsius") {
                    result = (inputValue - 32) * 5.0 / 9.0;
                } else if (toUnit == "Kelvin") {
                    result = (inputValue - 32) * 5.0 / 9.0 + 273.15;
                }
            } else if (fromUnit == "Kelvin") {
                if (toUnit == "Celsius") {
                    result = inputValue - 273.15;
                } else if (toUnit == "Fahrenheit") {
                    result = (inputValue - 273.15) * 9.0 / 5.0 + 32;
                }
            }
        } else if (unitType == "Volume") {
            result = inputValue * volumeUnits[fromUnit] / volumeUnits[toUnit];
        } else if (unitType == "Area") {
            result = inputValue * areaUnits[fromUnit] / areaUnits[toUnit];
        } else if (unitType == "Speed") {
            result = inputValue * speedUnits[fromUnit] / speedUnits[toUnit];
        }

        resultLabel->setText("Result: " + QString::number(result));
    }

private:
    void initializeUnits() {
        // Initializing conversion factors
        lengthUnits["Meter"] = 1.0;
        lengthUnits["Kilometer"] = 1000.0;
        lengthUnits["Mile"] = 1609.34;
        lengthUnits["Yard"] = 0.9144;
        lengthUnits["Foot"] = 0.3048;
        lengthUnits["Centimeter"] = 0.01;
        lengthUnits["Millimeter"] = 0.001;
        lengthUnits["Micrometer"] = 0.000001;

        massUnits["Gram"] = 1.0;
        massUnits["Kilogram"] = 1000.0;
        massUnits["Pound"] = 453.592;
        massUnits["Ounce"] = 28.3495;
        massUnits["Ton"] = 1000000.0;
        massUnits["Milligram"] = 0.001;
        massUnits["Microgram"] = 0.000001;

        temperatureUnits["Celsius"] = 0.0;
        temperatureUnits["Fahrenheit"] = 0.0;
        temperatureUnits["Kelvin"] = 0.0;

        volumeUnits["Liter"] = 1.0;
        volumeUnits["Milliliter"] = 0.001;
        volumeUnits["Cubic Meter"] = 1000.0;
        volumeUnits["Cubic Centimeter"] = 0.001;
        volumeUnits["Gallon"] = 3.78541;
        volumeUnits["Cubic Inch"] = 0.0163871;

        areaUnits["Square Meter"] = 1.0;
        areaUnits["Hectare"] = 10000.0;
        areaUnits["Acre"] = 4046.86;
        areaUnits["Square Kilometer"] = 1000000.0;
        areaUnits["Square Centimeter"] = 0.0001;
        areaUnits["Square Inch"] = 0.00064516;

        speedUnits["Meter per Second"] = 1.0;
        speedUnits["Kilometer per Hour"] = 0.277778;
        speedUnits["Mile per Hour"] = 0.44704;
        speedUnits["Foot per Second"] = 0.3048;
        speedUnits["Knots"] = 0.514444;
    }

    QComboBox *unitTypeCombo;
    QLineEdit *valueInput;
    QComboBox *fromUnitCombo;
    QComboBox *toUnitCombo;
    QPushButton *convertButton;
    QLabel *resultLabel;

    QMap<QString, double> lengthUnits;
    QMap<QString, double> massUnits;
    QMap<QString, double> temperatureUnits;
    QMap<QString, double> volumeUnits;
    QMap<QString, double> areaUnits;
    QMap<QString, double> speedUnits;
};

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    UnitConverter converter;
    converter.setWindowTitle("Unit Converter");
    converter.resize(350, 300);
    converter.show();

    return app.exec();
}

#include "main.moc"
