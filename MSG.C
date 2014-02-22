#include<time.h>
void msg()
{ int a,b,c;
   time_t t;

   time(&t);
   a=((ctime(&t)[11]) - 48)*10;
   b=(ctime(&t)[12]) - 48;
   c=a+b;
   if(c>=0&&c<12)
   {printf("\t\t\t     Good Morning Sir!");}
   else if(c>=12&&c<15)
   {printf("\t\t\t     Good Afternoon Sir!");}
   else
   {printf("\t\t\t     Good Evening Sir!");}

  }
