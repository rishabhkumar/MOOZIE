void body()
{int i;
char a,start[]="\n\n\n\n\t\tWELCOME TO PIANO PROGRAMME!";
char b[]="\n\nPress Note Buttons: ";
clrscr();
for(i=0;start[i]!='\0';i++)
{delay(50);
printf("%c",start[i]);
}
getch();
clrscr();
for(i=0;b[i]!='\0';i++)
{delay(50);
printf("%c",b[i]);
}
jump:
a=getch();
if(a=='z')
{sound(800);
delay(200);
nosound();
goto jump;
}
if(a=='x')
{sound(820);
delay(200);
nosound();
goto jump;
}
if(a=='c')
{sound(840);
delay(200);
nosound();
goto jump;
}
if(a=='v')
{sound(860);
delay(200);
nosound();
goto jump;
}
if(a=='b')
{sound(880);
delay(200);
nosound();
goto jump;
}
if(a=='n')
{sound(880);
delay(200);
nosound();
goto jump;
}
if(a=='m')
{sound(900);
delay(200);
nosound();
goto jump;
}
if(a=='a')
{sound(600);
delay(200);
nosound();
goto jump;
}
if(a=='s')
{sound(620);
delay(200);
nosound();
goto jump;
}
if(a=='d')
{sound(640);
delay(200);
nosound();
goto jump;
}
if(a=='f')
{sound(660);
delay(200);
nosound();
goto jump;
}
if(a=='g')
{sound(680);
delay(200);
nosound();
goto jump;
}
if(a=='h')
{sound(700);
delay(200);
nosound();
goto jump;
}
if(a=='j')
{sound(720);
delay(200);
nosound();
goto jump;
}
if(a=='k')
{sound(740);
delay(200);
nosound();
goto jump;
}
if(a=='l')
{sound(760);
delay(200);
nosound();
goto jump;
}
if(a=='e')
{clrscr();
printf("\nThanks! Bye!");
getch();
exit(1);
}
}


void menu()
{int i,n;
char start[]="\n\n\tWelcome to the Piano Programme!\nSelect the Options from below:-\n1. Instructions\n2.Programme\nEnter the Choice: ";
char inst[]="\n\n\tFor this programme to run, when the Play Screen Appears,\nYou can press any button on the Keyboard from:\nA-L: For High Frequencies and\nZ-M: For Low Frequencies";
char a[]="\n\nWorng Choice selected Duffer!";
clrscr();
for(i=0;start[i]!='\0';i++)
{delay(50);
printf("%c",start[i]);
}
scanf("%d",&n);
switch(n)
{case 1:for(i=0;inst[i]!='\0';i++)
	{delay(50);
	 printf("%c",inst[i]);
	 }
	 getch();
	 body();
	 break;
 case 2: body();
	 break;
 default: for(i=0;a[i]!='\0';i++)
	  {delay(50);
	  printf("%c",a[i]);
	  }
	  getch();
	  break;
}
}



void password()
{int j=3,i,n;
char pass1[5],start[]="\n\n\n\t\tEnter the Password: ";
char a[]="\n\nWrong! You've now ";
char b[]=" chances left: ";
clrscr();
for(i=0;start[i]!='\0';i++)
{delay(50);
printf("%c",start[i]);
}
scanf("%s",&pass1);
jump:if(strcmp(pass1,"piano")==0)
{menu();}
else
{for(j=j;j>0;j--)
{for(i=0;a[i]!='\0';i++)
{delay(50);
printf("%c",a[i]);
}
delay(50);
printf("%d",j);
for(i=0;b[i]!='\0';i++)
{delay(50);
printf("%c",b[i]);
}
scanf("%s",&pass1);
j--;
goto jump;
}}
getch();
}


void piano()
{password();
}
