#ifndef __SICKKOALA_H_
#define __SICKKOALA_H_

#include <iostream>

#include "koaladoctor.h"
#include "koalanurse.h"

class SickKoala
{
  std::string m_patient;

 public:
  SickKoala(std::string name);
  ~SickKoala();
  void poke();
  bool takeDrug(std::string response);
  void overDrive(std::string idk);
  std::string getName();
};

#endif