#include <iostream>
using namespace std;
int main() {
    int choice, sourceCurrency, targetCurrency;
    double amount, convertedAmount;
    double pkrToEur = 0.0049;
    double pkrToCny = 0.045;
    double pkrToUsd = 0.0036;
    double eurToPkr = 203.92;
    double eurToCny = 9.18;
    double eurToUsd = 1.18;
    double cnyToPkr = 22.19;
    double cnyToEur = 0.11;
    double cnyToUsd = 0.13;
    double usdToPkr = 285.71;
    double usdToEur = 0.85;
    double usdToCny = 7.49;
    cout << "Welcome to the Currency Converter!" << endl;
    while (true) {
        cout << "Please choose an option:" << endl;
        cout << "1. Convert Currency" << endl;
        cout << "2. Exit" << endl;
        cout << "> ";
        cin >> choice;
        if (choice == 2) {
            cout << "Exiting the application. Goodbye!" << endl;
            break;
        } else if (choice != 1) {
            cout << "Invalid option. Please try again." << endl;
            continue;
        }

        cout << "Choose the source currency:" << endl;
        cout << "1. PKR" << endl;
        cout << "2. EUR" << endl;
        cout << "3. CNY" << endl;
        cout << "4. USD" << endl;
        cout << "> ";
        cin >> sourceCurrency;

        cout << "Choose the target currency:" << endl;
        cout << "1. PKR" << endl;
        cout << "2. EUR" << endl;
        cout << "3. CNY" << endl;
        cout << "4. USD" << endl;
        cout << "> ";
        cin >> targetCurrency;

        cout << "Enter the amount: ";
        cin >> amount;

        if (sourceCurrency == 1 && targetCurrency == 2)
            convertedAmount = amount * pkrToEur;
        else if (sourceCurrency == 1 && targetCurrency == 3)
            convertedAmount = amount * pkrToCny;
        else if (sourceCurrency == 1 && targetCurrency == 4)
            convertedAmount = amount * pkrToUsd;
        else if (sourceCurrency == 2 && targetCurrency == 1)
            convertedAmount = amount * eurToPkr;
        else if (sourceCurrency == 2 && targetCurrency == 3)
            convertedAmount = amount * eurToCny;
        else if (sourceCurrency == 2 && targetCurrency == 4)
            convertedAmount = amount * eurToUsd;
        else if (sourceCurrency == 3 && targetCurrency == 1)
            convertedAmount = amount * cnyToPkr;
        else if (sourceCurrency == 3 && targetCurrency == 2)
            convertedAmount = amount * cnyToEur;
        else if (sourceCurrency == 3 && targetCurrency == 4)
            convertedAmount = amount * cnyToUsd;
        else if (sourceCurrency == 4 && targetCurrency == 1)
            convertedAmount = amount * usdToPkr;
        else if (sourceCurrency == 4 && targetCurrency == 2)
            convertedAmount = amount * usdToEur;
        else if (sourceCurrency == 4 && targetCurrency == 3)
            convertedAmount = amount * usdToCny;
        else
            convertedAmount = amount; 

        cout << "Converted amount: " << convertedAmount << endl;
    }
    return 0;
}