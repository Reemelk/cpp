#ifndef __KOALADOCTOR_H_
#define __KOALADOCTOR_H_

#include <iostream>
#include "sickkoala.h"

class KoalaDoctor
{
  std::string m_name;
  bool m_status;

 public:
  KoalaDoctor(std::string name);
  ~KoalaDoctor();
  std::string getName();
  void diagnose(SickKoala *patient);
  void timeCheck();
};

#endif
