//Brady Chiles
//6/7/17
//bmchiles@dmacc.edu

/*
This program will take input from the user of the quantity of units they would like to purchase.
It will then determine which tier of discounts they qualify for.
Afterwards it will determine the amount discounted as well as the new discounted price.
Finally it will output back to the user the original price, discount amount and final discounted price.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	
	//Variables
	int basePrice = 129;
	int quantity = 0;
	int totalPrice = 0;
	float discountPercent = 0;
	float discount = 0;
	float discountPrice = 0;
	float tierOneDiscount = .20;
	float tierTwoDiscount = .30;
	float tierThreeDiscount = .40;
	float tierFourDiscount = .50;
	int maxDiscount = 500;
	int lowestQuantity = 10;
	
	//Low and high bounds for tiers
	int lowTierOne = 10;
	int highTierOne = 19;
	int lowTierTwo = 20;
	int highTierTwo = 49;
	int lowTierThree = 50;
	int highTierThree = 99;
	int lowTierFour = 100;
	
	cout << setprecision(2) << showpoint << fixed;
	
	//Asks for quantity
	cout << "Please enter the quantity you would like to order." << endl;
	cin >> quantity;
	
	//Calculates total price;
	totalPrice = basePrice * quantity;
	
	//Determines if user qualifies for discount
	if(quantity < lowestQuantity)
		cout << "Must order more than " << lowestQuantity << " units to qualify for a discount." << endl;
	
	//First tier discount
	else if(quantity >= lowTierOne && quantity <= highTierOne)
		discountPercent = tierOneDiscount;
	
	//Second tier discount
	else if(quantity >= lowTierTwo && quantity <= highTierTwo)
		discountPercent = tierTwoDiscount;
	
	//Third tier discount
	else if(quantity >= lowTierThree && quantity <= highTierThree)
		discountPercent = tierThreeDiscount;
		
	//Fourth tier discount	
	else if(quantity >= lowTierFour)
		discountPercent = tierFourDiscount;
		
	//Calculates the amount to bew discounted	
	discount = totalPrice * discountPercent;
	
	//Maximizes the discount available to $500
	if(discount > maxDiscount)
		discount = 500;
	
	//Determines the new price with the discoutn taken off
	discountPrice = totalPrice - discount;
	
	//Output for original price, discount and discounted price	
	cout << "Previous price: $" << totalPrice << endl;
	cout << "Discount: $" << discount << endl;
	cout << "Discounted price: $" << discountPrice << endl;
		
		
	return 0;
}
