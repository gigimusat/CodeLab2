#include <iostream>
using namespace std;

// Vending Machine Application
// Developed as part of a C++ programming CodeLab
int main()
{
    int productCode; // Variable to store user input for product code
    int price = 0; // Variable to store the price of the selected product
    int money = 0; // Variable to store the amount of money inserted by the user
    string product; // Variable to store the name of the selected product
    char answer; // Variable to store user response for suggestions
    bool continueShopping = true;

    cout << "=================================\n";
    cout << "   Welcome to the Vending Machine\n";
    cout << "=================================\n\n";

    // Prompt user to insert money
    cout << "Please insert money (£): ";
    cin >> money;

    // Validate inserted money
    if (money <= 0) {
        cout << "Invalid amount entered. Program ending.\n";
        return 0;
    }

    // Main shopping loop
    while (continueShopping && money > 0) {

        // Display available products
        cout << "\nAvailable products:\n";
        cout << "1. Cola       - £2\n";
        cout << "2. Biscuits   - £1\n";
        cout << "3. Coffee     - £2\n";
        cout << "4. Water      - £1\n";
        cout << "5. Chocolate  - £2\n";
        cout << "0. Finish and get change\n";

        cout << "\nEnter product code: ";
        cin >> productCode;

        // Check for finish code
        if (productCode == 0) {
            break;
        }

        // Determine selected product and price
        if (productCode == 1) {
            product = "Cola";
            price = 2;
        }
        else if (productCode == 2) {
            product = "Biscuits";
            price = 1;
        }
        else if (productCode == 3) {
            product = "Coffee";
            price = 2;
        }
        else if (productCode == 4) {
            product = "Water";
            price = 1;
        }
        else if (productCode == 5) {
            product = "Chocolate";
            price = 2;
        }
        else {
            cout << "Invalid product code. Please try again.\n"; // Input validation
            continue;
        }

        // Check if user has enough money
        if (money < price) {
            cout << "Insufficient funds for this item.\n";
            continue;
        }

        // Dispense product and deduct price
        money -= price;
        cout << product << " dispensed successfully.\n";

        // Suggest Biscuits if Cola or Coffee was purchased
        if (product == "Cola" || product == "Coffee") {
            cout << "Would you like to buy Biscuits for £1? (Y/N): ";
            cin >> answer;

            if ((answer == 'Y' || answer == 'y') && money >= 1) {
                money -= 1;
                cout << "Biscuits dispensed.\n";
            }
            else if (answer == 'Y' || answer == 'y') {
                cout << "Not enough money for Biscuits.\n";
            }
        }

        cout << "Remaining balance: £" << money << endl; // Display remaining balance
    }

    // End of transaction
    cout << "\nTransaction complete.\n";
    cout << "Change returned: £" << money << endl;

    return 0;
}