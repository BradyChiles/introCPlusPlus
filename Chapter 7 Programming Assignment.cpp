// Brady Chiles
// 6/21/17
// bmchiles@dmacc.edu

/*
This program will feed an array, its size, and an integer into a function that will find all of the numbers in the array greater than the integer given.
It will then print out all of the numbers that are greater.
*/
#include <iostream>
using namespace std;

//Function prototype
void greaterThan(int [], int, int);

int main()
{
	//Variables
	int size = 6;
	int nums[size] = {4,3,9,17,52,12};
	int n = 5;

	//Function call
	greaterThan(nums,size,n);
	
	return 0;
}

//Function to find the elements in the array that are greater than n
void greaterThan(int nums[], int size, int n){
	//Variables (array to hold the elements that are greater, and a place holder for the greather than array)
	int greater[size];
	int place = 0;
	//Loops through the provided array and checks if the element is greater than n. If so, it will pump it into the new array.
	for(int i = 0; i < size; i++){
		if(nums[i] > n){
			greater[place] = nums[i];
			place++;
		}
	}
	
	//Output of all the elements greater than the provided integer.
	cout << "These numbers in the array are greater than " << n << ":" << endl;
	for(int t = 0; t < place; t++){
		cout << greater[t] << endl;
	}
}
