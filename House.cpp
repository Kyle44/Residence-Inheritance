// // File: House.cpp
#include "House.h"
using namespace std;

House::House() : Residence(4, 4, true)
{

}

/*std::ostream& operator<<(std::ostream& out, const House& oRes)
{
  out << "Number of Rooms: " << oRes.m_iNoOfRooms << endl;
  out << "Number of Walls: "<< oRes.m_iNoOfWalls << endl;
  out << "Washer: " << oRes.m_bWasher << endl;
  out << "Number of Windows: " << oRes.NumWindows() << endl;
  out << "PropertyValue: " << oRes.PropertyValue()<< endl;
  return out;
}
*/
