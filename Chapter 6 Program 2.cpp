// Brady Chiles
// 6/14/17
// bmchiles@dmacc.edu

/*
This program will accept user input of mass and velocity, then use those values to find kinetic energy.
The value of -9999 is used as a sentinel.
*/

#include <iostream>
#include <cmath>
using namespace std;

//Prototype of findKineticEnergy function.
float findKineticEnergy(float, float);

int main()
{
	
	//Variables
	float mass = 0;
	float velocity = 0;
	float kineticEnergy = 0;
	
	//Loop for data entry of mass and velocity as well as the call for the findKineticEnergy function.
	//-9999 can be entered to exit the loop/program
	while(mass != -9999 || velocity != -9999){
		cout << "Please enter the mass of the object. Enter -9999 to exit." << endl;
		cin >> mass;
		if(mass == -9999)
			break;
			
		cout << "Please enter the velocity of the object. Enter -9999 to exit." << endl;
		cin >> velocity;
			if(velocity == -9999)
				break;
		
		//Function call for findKineticEnergy as well as the output.
		kineticEnergy = findKineticEnergy(mass, velocity);
		cout << "The kinetic energy is: " << kineticEnergy << endl;
	}

	return 0;
}

//findKineticEnergy function. Accepts 2 float variables (mass and velocity) and returns the kinetic energy in the form of a float.
float findKineticEnergy(float mass, float velocity)
{
	float kineticEnergy = 0;
	kineticEnergy = (.5) * (mass) * (pow(velocity,2));
	
	return kineticEnergy;
}

