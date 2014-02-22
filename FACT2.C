void fact(int t)
{int fact=1;
t=t-48;
while(t>1)
{fact=fact*t;
t--;}
printf("\nFactorial is: %d",fact);
}
void factorial(char a[])
{int i,t;
for(i=0;a[i]!='\0';i++)
{t=a[i];
if(t>48&&t<=56)
{fact(t);
break;}
}
getch();
}
