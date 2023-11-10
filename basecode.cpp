#include <iostream>
#include <iomanip>

using namespace std;

double convertUSDToEUR(double amount) {
    const double usdtoeur = 0.85;
    return amount * usdtoeur;
}

double convertUSDToGBP(double amount) {
    const double usdtogbp = 0.75;
    return amount * usdtogbp;
}

int main() {
    char choice;

    do {
        cout << "Currency Converter Menu:\n";
        cout << "1. Convert USD to EUR\n";
        cout << "2. Convert USD to GBP\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case '1':
            {
                double amount;
                cout << "Enter the amount in USD to convert: ";
                cin >> amount;

                double amounteur = convertUSDToEUR(amount);
                cout << fixed << setprecision(2);
                cout << "Converted Amount in EUR: " << amounteur << "\n";
                break;
            }

            case '2':
            {
                double amount;
                cout << "Enter the amount in USD to convert: ";
                cin >> amount;

                double amountgbp = convertUSDToGBP(amount);
                cout << fixed << setprecision(2);
                cout << "Converted Amount in GBP: " << amountgbp << "\n";
                break;
            }

            case '3':
                cout << "Exiting Currency Converter. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice. Please enter a number between 1 and 3.\n";
        }

        if (choice != '3') {
            cout << "Do you want to perform another conversion? (y/n): ";
            cin >> choice;
        }

    } while (choice == 'y' || choice == 'Y');

    return 0;
}


