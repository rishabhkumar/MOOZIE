void ascii()
{int i,n,t=1;
char A[]="\nEnter a Keyboard Character: ";
char ch,b[]="\nThe ASCII value is: ";
char c[]="\nWant to Enter More?(y/n): ";
clrscr();
while(t==1)
{
for(i=0;A[i]!='\0';i++)
{delay(50);
printf("%c",A[i]);
}
n=getch();
for(i=0;b[i]!='\0';i++)
{delay(50);
printf("%c",b[i]);
}
printf("%d",n);
for(i=0;c[i]!='\0';i++)
{delay(50);
printf("%c",c[i]);
}
scanf("%c",&ch);
if(ch=='y')
{printf("\nOkay!");
t=1;
clrscr();
}
else
{t=0;}
}
getch();
}


