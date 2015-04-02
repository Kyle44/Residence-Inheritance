// File: Appartment.h
#ifndef APARTMENT_H
#define APARTMENT_H
#include "Residence.h"

class Apartment : public Residence
{
  int m_iStory;
 public:
  Apartment(int iStory, bool bWasher);
  friend std::ostream& operator<<(std::ostream&, const Apartment&);
 protected:
  int PropertyValue() const;
};

#endif
