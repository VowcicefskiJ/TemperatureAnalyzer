Temperature Converter


Overview:

The Temperature Converter is a C++ program designed to read temperatures in Fahrenheit from an input file, convert them to Celsius, and then write the converted temperatures to an output file. The program assumes that each line of the input file contains a city name followed by its temperature in Fahrenheit.


Features:

File Reading: Reads temperatures in Fahrenheit from an input file named FahrenheitTemperature.txt.
Temperature Conversion: Converts the read temperatures from Fahrenheit to Celsius.
File Writing: Writes the converted temperatures along with their respective city names to an output file named CelsiusTemperature.txt.
Compilation & Execution


To compile and run the program, follow these steps:

Ensure you have a C++ compiler installed (e.g., g++).
Navigate to the directory containing the source code.


Compile the program:

g++ -o temp_converter main.cpp

Run the compiled program:

./temp_converter
Usage
Prepare an input file named FahrenheitTemperature.txt in the same directory as the program. Each line of the file should contain a city name followed by its temperature in Fahrenheit, separated by a space.


NewYork 85
LosAngeles 90
Chicago 78

Execute the program.


After successful execution, an output file named CelsiusTemperature.txt will be generated in the same directory. This file will contain the city names along with their temperatures in Celsius.

NewYork 29.4444
LosAngeles 32.2222
Chicago 25.5556


Code Structure:

Function fahrenheitToCelsius: Converts a given temperature in Fahrenheit to Celsius.


Main Function:

Opens the input and output files.
Reads each line from the input file, converts the temperature, and writes the result to the output file.
Closes the files after processing.
Displays a success or failure message based on the file operations.
