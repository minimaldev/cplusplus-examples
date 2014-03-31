#include <iostream>
#include <string>
#include <stdlib.h> /* exit, EXIT_FAILURE, EXIT_SUCCESS */
#include <windows.h>
// timer windows 
void pomodoro(int h=0, int m=59, int s=59) 
{
  for (int hour = h; hour >= 0; hour--)
  {
    for (int min = m; min >= 0 ; min--)
    {
      if ( min == 0)
      m = 59;
      for (int sec = s; sec >= 0; sec--)
      {
        if ( sec == 0 )
        s = 59;
        Sleep(1000);
        system("cls");
        std::cout << hour << " :hours " << min << " :mins " << sec << " :secs" << std::endl;
      }
    }
  }
  Sleep(1000);
}


int main ()
{

  std::string timer;

  std::string *ptr_str = &timer;

  std::string hotkey;

  std::string *ptr_hotkey = &hotkey;

  pomodoro();
  // read hot key 
  std::getline (std::cin, hotkey);

  // borrar dela memoria memoria
  delete ptr_str, ptr_hotkey;
  
  return EXIT_SUCCESS;
  
}