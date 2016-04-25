#include <iostream>
#include <string>

#include "koaladoctor.h"
#include "sickkoala.h"
#include "koalanurse.h"

KoalaDoctor::KoalaDoctor(std::string name)
{
  std::cout << "Dr. " << name << ": Je suis le Dr. " << name << " ! Comment Kreoggez-vous ?" << std::endl;
  this->m_doctorName = name;
}

KoalaDoctor::~KoalaDoctor()
{
}

/*void KoalaDoctor::diagnose(SickKoala *patient)
{
  std::cout << "Dr. " << m_doctorName << ": Alors qu'est ce qui vous goerk Mr. " << patient.&SickKoala::getName << " ?" <<std::endl;
  //patient.&SickKoala::poke();
  }*/
