#include <iostream>
#include <string>
using namespace std;

int main() 
{ 
	string itemName;
	float itemPrice;
	int itemQuantity;
	float total;

	cout << "Enter Item Name: ";
	getline(cin, itemName);

	cout << "Enter itemPrice: ";
	cin >> itemPrice;

	cout << "Enter item Quantity: ";
	cin >> itemQuantity;

	total = itemPrice * itemQuantity;
	cout << "---Invoice---" << endl;
	cout << "item:"<< itemName<<endl;
	cout <<"Price: $"<<itemPrice<< endl;
	cout <<"Quantity : "<<itemQuantity<< endl;
	cout << "total: $"<<total<<endl;

	return 0;
	
}
