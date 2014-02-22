void soundc1()
{int i=300,k;
char a;
char start[]="\nWELCOME TO SOUND CONTROL PROGRAMME!\n";
char s1[]="\nPress 'u' for increasing Sound Frequency and\n'i' for decreasing it!\n";
clrscr();
for(k=0;start[k]!='\0';k++)
{delay(50);
printf("%c",start[k]);
}
getch();
clrscr();
for(k=0;s1[k]!='\0';k++)
{delay(50);
printf("%c",s1[k]);
}
jump:
a=getch();
if(a=='u')
{i=i+10;
sound(i);
delay(200);
nosound();
goto jump;
}
else if(a=='i')
{i=i-10;
sound(i);
delay(200);
nosound();
goto jump;
}
else
{printf("\nWrong Button! Bye!");
}
getch();
}
