#include <iostream>
#include <iomanip>

using namespace std;

double incomeCalc() {
    // Declare a variable of type int called year and set it equal to 2020
    int year = 2020;

    // Declare variables to store the total income and income input
    double income = 0.0;
    double totalIncome = 0.0;

    // Loop that iterates from 2020 to 2024
    for (int i = 0; i < 5; i++) {
        // Output the prompt for the current year's income
        cout << "Enter income for " << year << ": ";

        // Get the income for the current year
        cin >> income;

        // Add the income to the running total
        totalIncome += income;

        // Increment the year
        year++;
    }

    // Calculate the average income
    double average = totalIncome / 5;

    // Print the average income formatted to 2 decimal places
    cout << fixed << setprecision(2);
    cout << "Income (averaged over the past 5 years) is: $" << average << endl;

    return average;
}

#ifndef TESTING
int main() {
    incomeCalc();
    return 0;
}
#endif
