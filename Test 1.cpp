// Brady Chiles
// 6/13/17
// bmchiles@dmacc.edu

/*
This program will calculate the total cost of a trip to Paris, France for a given number of people.
It will accept input for the total number of people as well as the average hotel cost requested. 
It will also calculate a discount if the number of people is within a certain range. (10-50 = 10%) (50+ = 20%)
*/
	
#include <iostream>
#include <iomanip>
using namespace std;
	
int main(){
		
	//Variables
	const int FLIGHT_COST = 750;
	int people = 0;
	double hotelCost = 0;
	double totalHotel = 0;
	double totalFlight = 0;
	double total = 0;
	double discountTotal = 0;
	double discount = 0;
	const double LOW_DISCOUNT = .10;
	const double HIGH_DISCOUNT = .20;
		
	//Formatting output
	cout << setprecision(2) << showpoint << fixed;
	//Intitial output for user
	cout << "This program will take the number of people and prefered average hotel cost and " <<
			"calculate the trip total to Paris, France." << endl;
		
	//Do/while loop to gather the number of people. Must be between 1 and 100
	do{	
	cout << "Please enter the number of people. (1-100ppl)" << endl;
	cin >> people;
	}while(people < 1 || people > 100);
		
	//Do/while loop to gather the hotel cost. Must be between 50 and 500
	do{
	cout << "Please enter the prefered nightly hotel cost. (50-500EU)" << endl; 
	cin >> hotelCost;
	}while(hotelCost < 50 || hotelCost > 500);
		
	//Calculates the total htel cost, total flight cost, and the combined total
	totalHotel = people * hotelCost;
	totalFlight = people * FLIGHT_COST;
	total = totalHotel + totalFlight;
		
	//Determines if the group qualifies for discounts. <10 = 0% discount    10-49 = 10% discount   50+ = 20% discount
	if(people > 10 && people < 50){
		discount = total * LOW_DISCOUNT;
	}else if(people >= 50){
		discount = total * HIGH_DISCOUNT;
	}
	
	//Calculates the new total with the discount deducted 
	discountTotal = total - discount;
		
	//Outputs all of the totals, including: hotel total, flight total, total before discount, discount, total after discount
	cout << "Flight cost total: $" << totalFlight << endl;
	cout << "Hotel cost total: $" << totalHotel << endl;
	cout << "Original toal: $" << total << endl;
	cout << "Discount: $" << discount << endl;
	cout << "Total with discount: $" << discountTotal << endl;
	
}
				
		
		
		

