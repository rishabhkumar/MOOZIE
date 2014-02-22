#include"prime.c"
#include"msg.c"
#include"time.c"
#include"name.c"
#include"fact2.c"
#include"type.c"
#include"bin1.c"
#include"game.c"
#include"ascii1.c"
#include"soundc1.c"
#include"piano1.c"

int search(char str1[],char str2[])
{int i=0,j=0,k=0,t=0,m=0;
clrscr();
m=strlen(str2);
while(i<=46)
{if(str1[i]==str2[k])
{for(j=0;j<m;j++)
{if(str1[i+j]==str2[j])
{t=1;
if(j==(m-1))
{goto jump;}
}
else
{t=0;}}}
i++;
k=0;
}
jump:
return t;
}


void main()
{int i,t=0;
char start[]="\n\n\n\t\tWelcome to the Moozie Artificial Intelligence";
char myname[]="\n\n\t\tMy name is Moozie.\n\n\t\tI am Created By Rishabh Kumar\n\n\t\tDate of Birth is 19th January 2014";
char exit[]="\nThank You for using Moozie Sir Rishabh.\nSee you later sir!";
char health[]="\nI am Perfectly Fine Sir.\nThanks for Asking!";
char warning[]="\nPlease don't use abusive languages!\n";
char love[]="\nNeither me nor my creator(Rishabh) knows anything about\nLOVE, so it would be better if you dont consult us :)";
char marry[]="\nHow shall we be having kids?";
char feedback[]="\nIt is my Pleasure serving you!";
char input[50];
clrscr();
for(i=0;start[i]!='\0';i++)
{delay(50);
printf("%c",start[i]);
}
sound(200);
delay(200);
nosound();
sound(250);
delay(200);
nosound();
sound(300);
delay(200);
nosound();
getch();
jump:
for(i=0;i<50;i++)
{input[i]=0;}
clrscr();
msg();
for(i=0;i<7;i++)
{printf(" ");}
i=0;
t=0;
printf("\n\nUser: ");
while(t!=13)
{t=input[i]=getche();
i++;}
if(search(input,"piano")==1)
{piano();
goto jump;}
else if(search(input,"your")!=1&&search(input,"name")==1)
{name(input);
goto jump;}
else if(search(input,"fuck")==1||search(input,"screw")==1||search(input,"idiot")==1)
{type(warning);
goto jump;}
else if(search(input,"time")==1&&search(input,"not")!=1)
{samay();
goto jump;}
else if(search(input,"soundcontrol")==1)
{soundc1();
goto jump;}
else if(search(input,"prime")==1)
{prime(input);
goto jump;}
else if(search(input,"ascii")==1)
{ascii();
goto jump;}
else if(search(input,"i")==1&&search(input,"love")==1&&search(input,"you")==1)
{type(love);
goto jump;}
else if(search(input,"marry")==1&&search(input,"me")==1&&search(input,"dont")!=1)
{type(marry);
goto jump;}
else if(search(input,"factorial")==1)
{factorial(input);
goto jump;
}
else if(search(input,"game")==1)
{game();
goto jump;}
else if((search(input,"good")==1||search(input,"awsome")==1)&&search(input,"you")==1&&search(input,"not")!=1)
{type(feedback);
delay(650);
goto jump;}
else if(search(input,"your")==1&&search(input,"name")==1)
{intro:
type(myname);
delay(650);
goto jump;}
else if(search(input,"introduce")==1&&search(input,"yourself")==1)
{goto intro;}
else if(search(input,"who")==1&&search(input,"are")==1&&search(input,"you")==1)
{goto intro;}
else if(search(input,"hey")==1||search(input,"hi")==1||search(input,"help")==1)
{printf("\nHello Sir! How can I help you?\n");
delay(650);
goto jump;}
else if(search(input,"exit")==1||search(input,"off")==1||search(input,"shut_down")==1||search(input,"bye")==1)
{for(i=0;exit[i]!='\0';i++)
{delay(50);
printf("%c",exit[i]);
}
delay(750);
goto boom;
}
else if(search(input,"binary")==1)
{binary(input);
goto jump;}
else if(search(input,"how")==1&&search(input,"are")==1&&search(input,"you")==1)
{for(i=0;health[i]!='\0';i++)
{delay(50);
printf("%c",health[i]);}
delay(650);
goto jump;
}
else
{printf("\nDatabase Incomplete!");
delay(750);
goto jump;}
boom:
sound(300);
delay(200);
nosound();
sound(250);
delay(200);
nosound();
sound(200);
delay(200);
nosound();
}
