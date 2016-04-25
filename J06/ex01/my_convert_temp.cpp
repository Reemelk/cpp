#include <iostream>
#include <iomanip>
#include <string>

int main()
{
  float tmp;
  std::string name;
  float resultat;
  
  std::cin >> tmp >> name;
  std::cout.precision(3);
  if (name.compare("Celsius") == 0)
    {
      resultat = tmp * 1.8 + 32;
      std::cout << std::setw(16) << std::fixed << resultat << std::setw(16) << "Fahrenheit" << std::endl;
    }
  else if (name.compare("Fahrenheit") == 0)
    {
      resultat = ((tmp - 32) * 5) / 9;
      std::cout << std::setw(16) << std::fixed << resultat << std::setw(16) << "Celsius" << std::endl;
    }
  return 0;
}
