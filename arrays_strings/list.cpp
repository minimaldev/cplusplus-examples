
#include <iostream>
#include <string>
#include <list>
#include <stdlib.h> /* exit, EXIT_FAILURE, EXIT_SUCCESS */

int main ()
{
  
  std::string hotkey;

  std::string *ptr_hotkey = &hotkey;

  std::list<double> my_list;

  my_list.push_back(999.25);

  my_list.push_back(888.50);

  my_list.push_back(777.25);


  for(std::list<double>::iterator list_iter = my_list.begin(); 
      list_iter != my_list.end(); list_iter++)
  {

    std::cout << *list_iter << std::endl;
  
  }

  // read hot key 
  std::getline (std::cin, hotkey);
  // borrar dela memoria memoria
  delete ptr_hotkey;
  
  return EXIT_SUCCESS;
  
}