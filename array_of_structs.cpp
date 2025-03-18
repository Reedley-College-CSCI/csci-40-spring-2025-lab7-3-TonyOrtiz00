#include <iostream>
#include <fstream>
using namespace std;

// TODO: Step 1.1 - Define the struct TemperatureRecord
// It should contain two integer fields: day and temperature.


// Constants
const int MAX_DAYS = 31;

// Function Prototypes
void readTemperatures(???); // TODO: Fix the parameters
void printTemperatures(const ???);
TemperatureRecord findMin(const ???);
TemperatureRecord findMax(const ???);
double findAverage(const ???);

int main() {
    // TODO: Step 1.2 - Declare an array of TemperatureRecord structs (MAX_DAYS size)
    
    int size = 0;  // Actual number of records read

    // TODO: Step 2.2 - Call readTemperatures() to load data from file

    // TODO: Step 3.2 - Print the temperatures

    // TODO: Step 4.2 - Compute and display average temperature

    return 0;
}

// TODO: Step 2.1 - Implement readTemperatures()
// Read from "temps.txt" and store data in the array

// TODO: Step 3.1 - Implement printTemperatures()
// Print all stored temperatures in a formatted table

// TODO: Step 4.1 - Implement findAverage()
// Compute and return the average temperature
