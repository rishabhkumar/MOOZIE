void options();
void logo();
void start();
void verify();
void game()
{int n;
clrscr();
logo();
textbackground(0);
clrscr();
options();
}

void options()
{int n;
clrscr();
printf("\nWhat you want to do?\n");
printf("\n1.Instructions\n2. Play\n3. Exit\n");
scanf("%d",&n);
switch(n)
{case 1: clrscr();
	 textcolor(3);
	 cprintf("\nThis is a two player gane.\nOne Player first writes a Arbitrarily guessed ONE-DIGIT Number.\nThen the @nd Player gets 3 chances to guess it!\nIts Simple! Enjoy!!");
	 printf("\nClick any button to play the Game!");
	 getch();
	 clrscr();
	 textcolor(3);
	 cprintf("\nEnter a One-Digit-Number: ");
	 scanf("%d",&n);
	 verify(n);
	 start(n);
	 break;
 case 2: clrscr();
	 textcolor(3);
	 cprintf("\nEnter a One-Digit-Number: ");
	 scanf("%d",&n);
	 verify(n);
	 start(n);
	 break;
 case 3:goto boom;
 deafult:printf("\nWrong Choice entered you Dumbass!");
 }
 boom:
 getch();
 }

void verify(int n)
{int i;
i=n/10;
if(i==0)
{printf("\nThe Number you entered is an One-Digit-Number!\nHence, You can play the game!");
system("pause");
}
else
{printf("\nThe Number you Entered is not an One-Digit Number! Screw You!");
printf("\nPress any key to Exit!");
getch();
exit(1);
}
}

void start(int n)
{int n1,i;
clrscr();
for(i=3;i>0;i--)
{printf("\nEnter a Number: ");
scanf("%d",&n1);
if(n1==n)
{printf("\nYes! You Guessed it Right!");
printf("\nPress any key to exit!");
getch();
exit(1);
}
else
{printf("\nSorry! Wrong Guess! Try Again!(%d chances more left)",(i-1));}
if(n1==32)
{printf(" %d",n);}
}
getch();
}

void logo()
{textbackground(4);
clrscr();
printf("\n\n\n\n\n\n\n\t\t\tWelcome To Coding Masters!");
printf("\n\n\n\t\t\tA Product of AR CORP. LTD.\n\n\n\t\t\t");
system("pause");
}


