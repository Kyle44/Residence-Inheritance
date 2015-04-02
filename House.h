// File: File.h
#ifndef HOUSE_H
#define HOUSE_H
#include "Residence.h"

class House : public Residence
{
 public:
  House();
  //  friend std::ostream& operator<<(std::ostream&, const House&);
};

#endif
