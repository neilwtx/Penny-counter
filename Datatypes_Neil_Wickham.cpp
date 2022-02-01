/* Neil Wickham, COSC-1436-57002, VS Code. 
This program will sort the number of oennies inputed into dollars,
quarters, dimes, nickels, and pennies. */
#include <iostream>
using namespace std;

#define VALUE_DOLLAR 100
#define VALUE_QUARTER 25
#define VALUE_DIME 10
#define VALUE_NICKEL 5
#define VALUE_PENNY 1

int dollars = 0;
int quarters = 0;
int dimes = 0;
int nickels = 0;
int pennies = 0;


int main()
{
	
	//Have user input number of pennies
	cout << "Please input number of pennies: ";
	cin >> pennies;
	
	//Calculations
	dollars = pennies / VALUE_DOLLAR;
	pennies = pennies % VALUE_DOLLAR;

	quarters = pennies / VALUE_QUARTER;
	pennies = pennies % VALUE_QUARTER;
	
	dimes = pennies / VALUE_DIME;
	pennies = pennies % VALUE_DIME;

	nickels = pennies / VALUE_NICKEL;
	pennies = pennies % VALUE_NICKEL;

	//display calculations
	cout << "Dollars: "<<dollars << endl;     
	cout << "Quarters "<<quarters << endl;
	cout << "Dime "<<dimes << endl;
	cout << "Nickel "<<nickels << endl;
	cout << "Pennies "<<pennies << endl;

	system("pause");
	return 0;
}
