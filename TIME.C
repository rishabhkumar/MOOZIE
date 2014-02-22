#include<time.h>
void samay()
{
   time_t t;

   time(&t);
   printf("Today's date and time: %s\n", ctime(&t));
   getch();
}
