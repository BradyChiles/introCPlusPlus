/*
This program accepts two weights from the user: the pallet weight and
the total weight including the widgets. It will then find the number of widgets 
o the pallet by subtracting pallet weight from the total, and dividing the remainder by the 
widget weight.
*/
/*
Brady Chiles
5/30/17
bmchiles@dmacc.edu
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

//Variables
	const float widgetWeight = 13.2;
	int numWidgets;
	float palletWeight;
	float totalWeight;
	
	cout << setprecision(5) << fixed;

//Pallet weight output/input
	cout << "How much does the pallet weigh by itself?" << endl;
	cin >> palletWeight;

//Total weight output/input
	cout << "How much does the pallet weigh with the widgets?" << endl;
	cin >> totalWeight;

//Expression to find widgit weight
	numWidgets = static_cast<int>((totalWeight - palletWeight)) / static_cast<int>(widgetWeight);

//Output of widgit weight to user
	cout << "There are " << numWidgets << " widgets on the pallet." << endl;
	
	return 0;
}
