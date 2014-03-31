#include <iostream>
#include <string>
#include <stdlib.h> /* exit, EXIT_FAILURE, EXIT_SUCCESS */

int main ()
{

  std::string str;

  std::string *ptr_str = &str;

  std::string hotkey;

  std::string *ptr_hotkey = &hotkey;

  str.append("here: ");

  str.append("here: a + a ");

  str.append("here: ");

  str.append("here: ");

  std::cout << str <<  std::endl;

  // read hot key 
  std::getline (std::cin, hotkey);

  // borrar dela memoria memoria
  delete ptr_str, hotkey;
  
  return EXIT_SUCCESS;
  
}