// Author: Kyle Fritz
// Date modified: 4/1/2015
// File: ResidenceDriver.cpp
// Description: Inheritance is displayed through a Residence class by a House class, a Tent class, and an Apartment class.


#include<iostream>

#include "House.h"
#include "Apartment.h"
#include "Tent.h"

using namespace std;

int main() {
  House h;
  Tent t;
  Apartment a(3, true);
  cout << "House: " << endl;
  cout << h << endl;
  //make a House object
  //use toString to print the values related to this house

  cout << "Apartment: " << endl; 
  cout << a << endl;
  //make a new Apartment object on the 2nd floor that has a washer
  //use toString to print the values related to this apartment

  cout << "Tent: " << endl;
  cout << t << endl;
  //make a new Tent object
  //use toString to print the values related to this tent
}
