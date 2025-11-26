#include <iostream>
#include <string>
using namespace std;
//vending machine program
int main() {
    //variables
    string item;
    double price = 0.0;
    double moneyInserted = 0.0;
    double change = 0.0;

    //display items
    cout << "Welcome to the Vending Machine!" << endl;
    cout << "Available items:" << endl;
    cout << "1. Soda - £1.25" << endl;
    cout << "2. Chips - £1.00" << endl;
    cout << "3. Candy - £0.75" << endl;

    //user selects item
    cout << "Please enter the item you want (Soda/Chips/Candy): ";
    cin >> item;

    //set price based on item
    if (item == "Soda") {
        price = 1.25;
    } else if (item == "Chips") {
        price = 1.00;
    } else if (item == "Candy") {
        price = 0.75;
    } else {
        cout << "Invalid item selected." << endl;
        return 1;
    }

    //user inserts money
    cout << "The price is £" << price << ". Please insert money: ";
    cin >> moneyInserted;

    //check if enough money was inserted
    if (moneyInserted < price) {
        cout << "Insufficient funds. Transaction cancelled." << endl;
        return 1;
    }

    //calculate change
    change = moneyInserted - price;

    //dispense item and change
    cout << "Dispensing " << item << "." << endl;
    if (change > 0) {
        cout << "Returning change: £" << change << endl;
    }
    cout << "Thank you for your purchase!" << endl;

    return 0;
}
