#include <iostream>
#include <fstream>
using namespace std;


struct TemperatureRecord {
    int day;
    int temperature;
};
struct TemperatureRecord records[31];
// TODO: Step 1 - Define the struct TemperatureRecord
// It should contain two integer fields: day and temperature.


// Constants
const int MAX_DAYS = 31;

// Function Prototypes
void readTemperatures(TemperatureRecord records[],int &size); // TODO: Fix the parameters
void printTemperatures(const TemperatureRecord records[], int size);
TemperatureRecord findMin(const TemperatureRecord records[], int size);
TemperatureRecord findMax(const TemperatureRecord records[], int size);
double findAverage(const TemperatureRecord records[], int size);

int main() {
    
    TemperatureRecord records[MAX_DAYS];
    int size = 0;  // Actual number of records read

    // TODO: Step 3 - Call readTemperatures() to load data from file

    // TODO: Step 4 - Print the temperatures

    // TODO: Step 5 - Compute and display min, max, and average temperature

    return 0;
}

void readTemperatures(TemperatureRecord records[], int& size) {
    ifstream inputFile("temps.txt");
    if (!inputFile) {
        cout << "Error" << endl;
    }
    size = 0;
    while (inputFile >> records[size].day >> records[size].temperature) {
        size++;
        if (size >= MAX_DAYS)
            break;
    }
}
void printTemperatures(TemperatureRecord records[], int size) {
    cout << "Day\tTemp" << endl;
    for (int i = 0; i < MAX_DAYS; i++) {
        cout << records[i].day << "\t" << records[i].temperature << endl;
    }
}
// TODO: Step 7 - Implement printTemperatures()
// Print all stored temperatures in a formatted table

// TODO: Step 8 - Implement findMin()
// Return the TemperatureRecord with the lowest temperature

// TODO: Step 9 - Implement findMax()
// Return the TemperatureRecord with the highest temperature

// TODO: Step 10 - Implement findAverage()
// Compute and return the average temperature
