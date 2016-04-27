#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string name)
{
  this->m_name = name;
  this->m_status = false;
  std::cout << "Dr. " << this->m_name << " : Je suis le Dr. " << this->m_name << " ! Comment Kreoggez-vous ?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
}

std::string KoalaDoctor::getName()
{
  return (this->m_name);
}

void KoalaDoctor::diagnose(SickKoala *patient)
{
  std::string NameFile;
  std::ofstream file;
  int index;
  std::string drugStore[] = {"mars", "Buronzand", "Viagra", "Extasy", "Feuille d'eucalyptus"};

  std::cout << "Dr. " << this->m_name << " : Alors qu'est-ce qui vous goerk Mr. " << patient->getName() << " ?" << std::endl;
  patient->poke();
  NameFile = patient->getName() + ".report";
  index = random() % 5;
  file.open(NameFile.c_str());
  file << drugStore[index];
  file.close();
}

void KoalaDoctor::timeCheck()
{
  if (this->m_status)
    this->m_status = false;
  else
    this->m_status = true;
}
