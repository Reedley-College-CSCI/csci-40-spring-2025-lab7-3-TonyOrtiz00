#include <iostream>
#include <fstream>
using namespace std;


struct TemperatureRecord {
    int day;
    int temperature;
};
// TODO: Step 1 - Define the struct TemperatureRecord
// It should contain two integer fields: day and temperature.


// Constants
const int MAX_DAYS = 31;

// Function Prototypes
void readTemperatures(TemperatureRecord records[],int &size); 
void printTemperatures(const TemperatureRecord records[], int size);
TemperatureRecord findMin(const TemperatureRecord records[], int size);
TemperatureRecord findMax(const TemperatureRecord records[], int size);
double findAverage(const TemperatureRecord records[], int size);

int main() {

    TemperatureRecord records[MAX_DAYS];
    int size = 0;

    readTemperatures(records, size);
    printTemperatures(records, size);

    TemperatureRecord minRecord = findMin(records, size);
    TemperatureRecord maxRecord = findMax(records, size);
    double average = findAverage(records, size);

    cout << "\nLowest Temperature: Day " << minRecord.day << " at " <<
        minRecord.temperature << "C" << endl;
    cout << "Highest Temperature: Day " << maxRecord.day << " at " <<
        maxRecord.temperature << "C" << endl;
    cout << "Average Temperature: " << average << "C" << endl;
    return 0;
}

void readTemperatures(TemperatureRecord records[], int &size) {
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
void printTemperatures(const TemperatureRecord records[], int size) {
    cout << "Day\tTemp" << endl;
    for (int i = 0; i < MAX_DAYS; i++) {
        cout << records[i].day << "\t" << records[i].temperature << endl;
    }
}

TemperatureRecord findMin(const TemperatureRecord records[], int size) {
    TemperatureRecord minRecord = records[0];
    for (int i = 0; i < size; i++) {
        if (records[i].temperature < minRecord.temperature) {
            minRecord = records[i];
        }
    }
    return minRecord;
}

TemperatureRecord findMax(const TemperatureRecord records[], int size) {
    TemperatureRecord maxRecord = records[0];
    for (int i = 0; i < size; i++) {
        if (records[i].temperature > maxRecord.temperature) {
            maxRecord = records[i];
        }
    }
    return maxRecord;
}

double findAverage(const TemperatureRecord records[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += records[i].temperature;
    }
    return static_cast<double>(sum) / size;
}
