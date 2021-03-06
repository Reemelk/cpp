#include <iostream>
#include <string>
#include <fstream>

#include "koalanurse.h"
#include "sickkoala.h"

KoalaNurse::KoalaNurse()
{
  this->m_nurseID = 1;
  this->m_status = false;
}

KoalaNurse::~KoalaNurse()
{
  std::cout << "Nurse " << this->m_nurseID << ": Enfin un peu de repos !" << std::endl;
}

void KoalaNurse::giveDrug(std::string DrugName, SickKoala *patient)
{
  this->m_DrugName = DrugName;
}

std::string KoalaNurse::readReport(std::string report)
{
  std::string DrugName;
  std::string patient;
  std::ifstream file;
  if (report.compare(report.rfind(".report"),report.size() - report.rfind(".report"),".report") == 0)
    {
      patient = report.substr(0,report.find_last_of("."));
      file.open(report.c_str(), std::fstream::in);
      file >> DrugName;
      file.close();
      std::cout << "Nurse " << this->m_nurseID << ": Kreog ! Il faut donner un " << DrugName << " a Mr. " << patient << " !" << std::endl;
    }
  return (DrugName);
} 

void KoalaNurse::timeCheck()
{
  if (this->m_status)
    {
      std::cout << "Nurse " << this->m_nurseID << ": Je rentre dans ma foret d'eucalyptus !" << std::endl;
      this->m_status = false;
    }
  else 
    {
      std::cout << "Nurse " << this->m_nurseID << ": Je commence le travail !" << std::endl;
      this->m_status = true;
    }
}
