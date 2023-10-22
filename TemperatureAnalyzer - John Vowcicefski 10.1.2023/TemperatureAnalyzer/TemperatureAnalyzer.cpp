#include <iostream>
#include <fstream>
#include <string>

using namespace std;

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

int main() {
    ifstream inputFile("FahrenheitTemperature.txt");
    ofstream outputFile("CelsiusTemperature.txt");

    if (inputFile.is_open() && outputFile.is_open()) {
        string city;
        int temperature;

        while (inputFile >> city >> temperature) {
            double celsius = fahrenheitToCelsius(temperature);
            outputFile << city << " " << celsius << endl;
        }

        inputFile.close();
        outputFile.close();

        cout << "Data conversion completed successfully." << endl;
    }
    else {
        cout << "Failed to open the input or output file." << endl;
    }

    return 0;
}