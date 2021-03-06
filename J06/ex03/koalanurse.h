#ifndef __KOALANURSE_H_
#define __KOALANURSE_H_

#include <iostream>
#include "sickkoala.h"

class KoalaNurse
{
  int m_nurseID;
  bool m_status;
  std::string m_DrugName;

 public:
  KoalaNurse();
  ~KoalaNurse();
  void giveDrug(std::string DrugName, SickKoala *patient);
  std::string readReport(std::string report);
  void timeCheck();
};

#endif
