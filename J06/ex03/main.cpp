#include <iostream>
#include <string>

#include "sickkoala.h"
#include "koalanurse.h"

int main()
{
  SickKoala myKoala("Julien");
  KoalaNurse Nurse0;
  Nurse0.readReport("julien.report");
  return 0;
}
