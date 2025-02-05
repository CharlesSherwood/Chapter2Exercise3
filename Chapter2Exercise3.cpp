/*FileName:Chapter2Exersice3.cpp
Programmer:Charles Sherwood
Date:2/5
Requirements:Let the user enter any amount of 
money and tax.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//create a floater for the Money
	double purchase{}, state{}, county{};

	//Get the purchase amount
	cout << "How much was the total of the purchase?:";
	cin >> purchase;
	cout << "The purchase was: $" << purchase << endl;


	//Check how much the state tax is 
	cout << "How much is the state tax?:";
	cin >> state;

	double Percent = state / 100;


	cout << "The sales tax is %" << state << endl;
	double tax1 = purchase * Percent;
	cout << "The sales tax on the purchase was: $" << tax1 << endl;


	//Check how much the county tax is 
	cout << "How much is the county tax?:";
	cin >> county;

	double P2 = county / 100;

	cout << "the county tax is %" << county << endl;
	double tax2 = purchase * P2;
	cout << "The county tax on the purchase was $" << tax2 << endl;


	//Finally add everything together
	double total = tax1 + tax2;
	double final = total + purchase;

	cout << "The total tax on this purchase would be $" << total << "\n";
	cout << "Making it a total of: $" << final << "\n";


	return 0;




}
