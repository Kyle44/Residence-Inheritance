// File: Residence.h
#ifndef RESIDENCE_H
#define RESIDENCE_H

#include <iostream>
class Apartment;
class Residence
{
  int m_iNoOfRooms;
  int m_iNoOfWalls;
  bool m_bWasher;

 public:
  Residence(int iRooms, int iWalls, bool bWasher);
  virtual int PropertyValue() const;
  virtual int NumWindows() const;
  friend std::ostream& operator<<(std::ostream&, const Residence&);
  friend std::ostream& operator<<(std::ostream&, const Apartment&);
 protected:
  bool HasWasher() const;
};

#endif
