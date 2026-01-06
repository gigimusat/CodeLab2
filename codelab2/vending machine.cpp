#include <iostream>
#include <string>
using namespace std;

// Vending machine program
int main()
{
    string product; // Variable to store selected product
    int price = 0; // Variable to store product price
    int money = 0; // Variable to store inserted money

    cout << "Welcome to the Vending Machine!" << endl; // Welcome message
    cout << "Available products:" << endl; // Display available products
    cout << "1. Cola - £2" << endl;
    cout << "2. Biscuits - £1" << endl;
    cout << "3. Coffee - £2" << endl;
    cout << "4. Water - £1" << endl;
    cout << "5. Chocolate - £2" << endl;

    cout << "\nPlease enter the product you want (Cola/Biscuits/Coffee/Water/Chocolate): "; // User input for product
    cin >> product;

    if (product == "Cola") {
        price = 2;
    }
    else if (product == "Biscuits") {
        price = 1;
    }
    else if (product == "Coffee") {
        price = 2;
    }
    else if (product == "Water") {
        price = 1;
    }
    else if (product == "Chocolate") {
        price = 2;
    }
    else {
        cout << "Invalid product selected." << endl;
        return 0;
    }

    cout << "The price of " << product << " is £" << price << "." << endl; // Display price
    cout << "Please enter the amount of money you are inserting: £"; // User input for money
    cin >> money;

    if (money < price) {
        cout << "Insufficient funds. Transaction cancelled." << endl; // Insufficient funds handling
    }
    else {
        int change = money - price;
        cout << "Thank you for your purchase of " << product << "!" << endl; // Successful purchase message

        // Optional suggestion
        if (product == "Cola" || product == "Coffee") {
            cout << "Suggestion: Would you like to buy Biscuits with your " << product << "?" << endl; // Suggestion for complementary product
        }

        if (change > 0) {
            cout << "Your change is £" << change << "." << endl; // Display change if any
        }
    }

    return 0; // End of program
}
