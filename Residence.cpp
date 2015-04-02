// File: Residence.cpp
#include "Residence.h"
using namespace std;

Residence::Residence(int iRooms, int iWalls, bool bWasher)
{
  m_iNoOfRooms = iRooms;
  m_iNoOfWalls = iWalls;
  m_bWasher = bWasher;
}

int Residence::PropertyValue() const
{
  return (m_iNoOfRooms * 10000);
}

int Residence::NumWindows() const
{
  return (m_iNoOfWalls*2);
}

bool Residence::HasWasher() const
{
  return m_bWasher;
}

std::ostream& operator<<(std::ostream& out, const Residence& oRes)
{
  out << "Number of Rooms: " << oRes.m_iNoOfRooms << endl;
  out << "Number of Walls: "<< oRes.m_iNoOfWalls << endl;
  out << "Washer: " << oRes.m_bWasher << endl;
  out << "Number of Windows: " << oRes.NumWindows() << endl;
  out << "PropertyValue: " << oRes.PropertyValue()<< endl;
  return out;
}
