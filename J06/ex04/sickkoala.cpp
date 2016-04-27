#include <iostream>
#include <string>

#include "sickkoala.h"
#include "koalanurse.h"

SickKoala::SickKoala(std::string name)
{
  this->m_name = name;
}

SickKoala::~SickKoala()
{
  std::cout << "Mr. " << m_name << ": Kreooog !! Je suis gueriiii !" << std::endl;
}

void SickKoala::poke()
{
  std::cout << "Mr. " << m_name << ": Gooeeeeerrk !! :'(" << std::endl;
}

bool SickKoala::takeDrug(std::string response)
{
  if (response.compare("mars") == 0)
    {
      std::cout << "Mr. " << m_name << ": Mars, et ca kreog !" << std::endl;
      return true;
    }
else if (response.compare("Buronzand") == 0)
  {
    std::cout << "Mr. " << m_name << ": Et la gatigue a fait son temps !" << std::endl;
    return true;
  }
 else
   {
     std::cout << "Mr. " << m_name << ": Goerkreog !" << std::endl;
     return false;
   }
}

void SickKoala::overDrive(std::string gibberish)
{
  std::cout << "Mr. " << m_name << ": " <<  gibberish.replace(gibberish.begin(), gibberish.begin()+7,"1337 !") << std::endl;
}

std::string SickKoala::getName()
{
  return (this->m_name);
}
