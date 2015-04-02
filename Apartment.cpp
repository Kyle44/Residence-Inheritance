// File: Apartment.cpp
#include "Apartment.h"
using namespace std;

Apartment::Apartment(int iStory, bool bWasher) : Residence(4,4,bWasher)
{
  m_iStory = iStory;
}

int Apartment::PropertyValue() const
{
  int iPropertyValue = Residence::PropertyValue();
  if(HasWasher())
    iPropertyValue += 100;
  return iPropertyValue;
}

std::ostream& operator<<(std::ostream& out, const Apartment& oRes)
{
  out << "Number of Rooms: " << oRes.m_iNoOfRooms << endl;
  out << "Number of Walls: "<< oRes.m_iNoOfWalls << endl;
  out << "Washer: " << oRes.m_bWasher << endl;
  out << "Number of Windows: " << oRes.NumWindows() << endl;
  out << "PropertyValue: " << oRes.PropertyValue()<< endl;
  out << "Story: " << oRes.m_iStory << endl;
  return out;
}
