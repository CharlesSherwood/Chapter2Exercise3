/*FileName:Chapter2Exersice3.cpp
Programmer:Charles Sherwood
Date:2/5
Requirements:compute the sales tax on a $95 purchase
assuming the state sales tax is 4 percent and
the county tax is 2 percent
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//create a floater for the Money
	double purchase = 95;
	double state = .04;
	double county = .02;
	double tax1 = purchase * state;
	double tax2 = purchase * county;
	double total = tax1 + tax2;

	cout << "The purchase was a total of $95";
	cout << " The state tax is 4%,and 4% of 95 is " << tax1 << "\n";
	cout << "The county tax is 2%, and 2% of 95 is " << tax2 << "\n";
	cout << "When you add those two together you can get the total";


	cout << fixed << setprecision(2) << " The total tax is $" << total << "\n";





}
