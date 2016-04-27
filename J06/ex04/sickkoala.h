#ifndef __SICKKOALA_H_
#define __SICKKOALA_H_

#include <iostream>

class SickKoala
{
  std::string m_name;

 public:
  SickKoala(std::string name);
  ~SickKoala();
  std::string getName();
  void poke();
  bool takeDrug(std::string response);
  void overDrive(std::string idk);
};

#endif
