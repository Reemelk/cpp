#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

#include "sickkoala.h"
#include "koalanurse.h"
#include "koaladoctor.h"

int main()
{
  std::srand(std::time(0));

  SickKoala myKoala("Julien");
  //KoalaNurse Nurse0;
  //Nurse0.readReport("julien.report");
  KoalaDoctor nb1("Matthew");
  nb1.diagnose(&myKoala);
  
  return 0;
}
