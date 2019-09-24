// Jacob Hardman
// Comp Sci 1
// Professor Jennifer Bailey
// 9/24/19

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	cout << setprecision(2) << fixed;

	double discountApplied = 1.00;
	int numSold;

	double totalDiscount = 0.00;
	double totalPrice = 0.00;

	const double BASE_PRICE = 99.00;
	const double LOW_DISCOUNT = 0.2;
	const double MEDIUM_DISCOUNT = 0.3;
	const double HIGH_DISCOUNT = 0.4;
	const double HUGE_DISCOUNT = 0.5;

	string userInput;
	bool goodInput = false;

	while (goodInput == false) {
		cout << "Please enter the number of units that you purchased: ";
		cin >> userInput;

		numSold = stoi(userInput);

		if (numSold >= 0) {
			goodInput = true;
		}
		else {
			cout << "Please enter a valid integer." << endl;
		}
	}

	if (numSold >= 10 && numSold <= 19) {
		discountApplied = LOW_DISCOUNT;
		totalDiscount = (numSold * BASE_PRICE) * discountApplied;
		cout << "Low Discount Applied";
	}
	else if (numSold >= 20 && numSold <= 49) {
		discountApplied = MEDIUM_DISCOUNT;
		totalDiscount = (numSold * BASE_PRICE) * discountApplied;
		cout << "Medium Discount Applied";
	}
	else if (numSold >= 50 && numSold <= 99) {
		discountApplied = HIGH_DISCOUNT;
		totalDiscount = (numSold * BASE_PRICE) * discountApplied;
		cout << "High Discount Applied";
	}
	else if (numSold >= 100) {
		discountApplied = HUGE_DISCOUNT;
		totalDiscount = (numSold * BASE_PRICE) * discountApplied;
		cout << "Huge Discount Applied";
	}
	else {
		cout << "No Discount Applied";
	}

	totalPrice = (numSold * BASE_PRICE) - totalDiscount;

	cout << "\nThe total cost of the purchase is: $" << totalPrice << endl;
	cout << "Your bulk discount saved you: $" << totalDiscount << endl;
}
