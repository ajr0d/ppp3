#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	cout << "How many pennies do you have?: ";
	int pennies;
	cin >> pennies;	
	
	cout << "How many nickels do you have?: ";
	int nickels;
	cin >> nickels;
	int nickel_value = nickels * 5;
	
	cout << "How many dimes do you have?: ";
	int dimes;
	cin >> dimes; 
	int dime_value = dimes * 10;
	
	cout << "How many quarters do you have?: ";
	int quarters;
	cin >> quarters;
	int quarter_value = quarters * 25;

	cout << "How many half-dollars do you have?: ";
	int half_dollars;
	cin >> half_dollars;
	int half_dollar_value = half_dollars * 50;

	cout << "How many dollars do you have?: ";
	int dollar_coins;
	cin >> dollar_coins;
	int one_dollar_value = dollar_coins * 100;

	int total_value = pennies + nickel_value + dime_value + quarter_value + half_dollar_value + one_dollar_value;
	cout << "The value of all your coins is " << total_value << " cents.";
}
