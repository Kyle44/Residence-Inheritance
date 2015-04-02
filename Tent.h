// File: Tent.h
#ifndef TENT_H
#define TENT_H
#include "Residence.h"

class Tent : public Residence
{
 public:
  Tent();
  int PropertyValue() const;
  int NumWindows() const;
};

#endif
