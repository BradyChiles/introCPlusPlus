// Brady CHiles 
// 5/24/17
// bmchiles@dmacc.edu

#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	//Constant variables
	float MEAL_TOTAL = 88.67;  
	float TAX_PERCENT = 0.0675;
	float TIP_PERCENT = 0.20;
	
	// Calculated variables
	float taxAmount;  
	float tipAmount;
	float totalBill;
	
	//Calculations
	taxAmount = MEAL_TOTAL * TAX_PERCENT;  
	tipAmount = (MEAL_TOTAL + taxAmount) * TIP_PERCENT;
	totalBill = MEAL_TOTAL + taxAmount + tipAmount;
	
	
	//Output
	cout << "Meal cost: " << MEAL_TOTAL << endl;
	cout << "Tax amount: " << taxAmount << endl;
	cout << "Tip amount: " << tipAmount << endl;
	cout << "Total bill: " << totalBill << endl;

	return 0;
}
