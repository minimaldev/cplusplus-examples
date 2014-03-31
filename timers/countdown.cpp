#include <iostream>
#include <string>
#include <time.h>
#include <stdlib.h> /* exit, EXIT_FAILURE, EXIT_SUCCESS */

void wait ( int seconds )
{
    clock_t endwait;
    endwait = clock () + seconds * CLK_TCK ;
    while (clock() < endwait) {}
}

// example with for bucle
void pomodoro(int h=1, int m=59, int s=59) 
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
        wait (1);
        system("cls");
        std::cout << hour << " :hours " << min << " :mins " << sec << " :secs" << std::endl;
      }
    }
  }
  wait (1);
}

int main ()
{  

  std::string hotkey;

  std::string *ptr_hotkey = &hotkey;
  int hour=0, minutes=0, seconds=59;
  pomodoro(hour, minutes, seconds);
  // read hot key 
  std::getline (std::cin, hotkey);
  // free mememory
  delete ptr_hotkey;
  
  return EXIT_SUCCESS;
}

