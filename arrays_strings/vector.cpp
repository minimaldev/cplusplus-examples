#include <cstdlib>
#include <iostream>
#include <vector>
#include <string>
#include <stdlib.h> /* exit, EXIT_FAILURE, EXIT_SUCCESS */

int main ()
{
  
  std::string hotkey;

  std::string *ptr_hotkey = &hotkey;

  std::vector<double> v;

  v.push_back(999.25);

  v.push_back(888.50);

  v.push_back(777.25);


  for(int i=0; i < v.size(); i++)
  {

    std::cout << v[i] << std::endl;

  }
  // read hot key 
  std::getline (std::cin, hotkey);
  // borrar dela memoria memoria
  delete ptr_hotkey;
  
  return EXIT_SUCCESS;
  
}