// Brady Chiles
// 7/18/17
// bmchiles@dmacc.edu

/*
THis program will store 4 structs in an array to represent a menu for a food truck. It will store, the name, price, and quantity.
It will then loop through, asking how many of each item was entered, displaying the total amount due.
At the end of the program it will display the total money made as well as how much stock is left.
*/
#include <iostream>
#include <string>
using namespace std;

struct food{
	string name;
	double price;
	int quantity;
};

void printMenu(food [], int);
double enterOrder(food [], int);
void foodLeft(food [], int);

int main()
{
	double totalSales = 0;
	string sentinel = "Y";
	int arraySize = 4;
	food burger {"Burgers", 10.00, 100};
	food fries {"Fries", 5.00, 100};
	food drink {"Drinks", 3.00, 100};
	food shake {"Shakes", 5.00, 100};
	food allFood[arraySize] {burger, fries, drink, shake};
	
	printMenu(allFood, arraySize);
	cout << "Would you like you to enter an order? Y/N" << endl;
	cin >> sentinel;
	
	while(sentinel == "Y" || sentinel == "y"){
		totalSales += enterOrder(allFood, arraySize);
		cout << "Would you like to enter another order? Y/N" << endl;
		cin >> sentinel;
	}
	
	cout << "Total sales: $" << totalSales << endl;
	foodLeft(allFood, arraySize);s

	return 0;
}

void printMenu(food allFood [] , int size){
	for(int i = 0; i < size; i++){
		cout << allFood[i].name << ": $" << allFood[i].price << endl;
	}
	cout << endl;
}

double enterOrder(food allFood [], int size){
	int order;
	int success;
	double orderTotal;
	for(int i = 0; i < size; i++){
		do{
			cout << "Please enter the amount of " << allFood[i].name << " you would like to order." << endl;
			cin >> order;
		
			if((allFood[i].quantity - order) >= 0){
				orderTotal += order * allFood[i].price;
				allFood[i].quantity -= order;
				success = 1;
			}else{
				cout << "You ordered too many " << allFood[i].name << ". There are " << allFood[i].quantity << " left." << endl;
			}
		}while(success == 0);
	}
	cout << "Order total: $" << orderTotal << endl << endl;
	return orderTotal;
}

void foodLeft(food allFood [], int size){
	for(int i = 0; i < size; i++){
		cout << allFood[i].name << " left: " << allFood[i].quantity << endl;
	}
}
