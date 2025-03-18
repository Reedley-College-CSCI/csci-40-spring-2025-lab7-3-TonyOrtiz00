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
// TemperatureRecord findMin(const ???); for homework part 2
// TemperatureRecord findMax(const ???); for homework part 2
double findAverage(const ???);

int main() {
    // TODO: Step 1.2 - Declare an array of TemperatureRecord structs (MAX_DAYS size)
    
    int size = 0;  // Actual number of records read

    // TODO: Step 2.2 - Call readTemperatures() to load data from file

    // TODO: Step 3.2 - Print the temperatures

    // TODO: Step 4.2 - Compute and display average temperature

    return 0;
}
/* FUNCTION readTemperatures
* Reads temperature data from "temps.txt" into an array of TemperatureRecord structs
* Parameters: An array of TemperatureRecord and an integer reference to track the size (records read)
*/
// TODO: Step 2.1 - Implement readTemperatures()
// Read from "temps.txt" and store data in the array
// - Open the file "temps.txt"
// - Use a loop to read day and temperature values into the array
// - Ensure the number of records does not exceed MAX_DAYS
// - Keep track of the number of records read using the size parameter

/* FUNCTION printTemperatures()
* Prints all stored temperatures in a formatted table
* Parameter: A constant array of TemperatureRecord and an integer representing its size (number of records)
*/
// TODO: Step 3.1 - Implement printTemperatures()
// Print all stored temperatures in a formatted table
// - Iterate through the array and display each record in a formatted way
// - Ensure the output is aligned properly for readability

/* FUNCTION findAverage()
* Computes and returns the average temperature
* Parameter: A constant array of TemperatureRecord and an integer representing its size (number of records)
* Returns: A double value representing the average temperature
*/
// TODO: Step 4.1 - Implement findAverage()
// Compute and return the average temperature
// - Iterate through the array to sum all temperature values
// - Divide by the number of records to compute the average
// - Return the computed average as a double
