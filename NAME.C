void name(char a[])
{int i,j,m;
char b[15];
char ques[]="\nHow can I Help You?";
for(i=0;i<15;i++)
{b[i]=0;}
for(i=0;a[i]!='\0';i++)
{}
m=i-1;
for(i=i;a[i]!='_';i--)
{}
i++;
if
  (a[m]=='a'||a[m]=='i'||a[m]=='o'||a[m]=='u')
   {b[0]='M';
    b[1]='s ';
    }
else
    {b[0]='M';
     b[1]='r ';
     }
b[2]=' ';
j=2;
for(i=i;a[i]!='\0';i++)
{j++;
b[j]=a[i];
}
printf("\nHello ");
for(i=0;b[i]!='\0';i++)
{delay(50);
printf("%c",b[i]);
}
for(i=0;ques[i]!='\0';i++)
{delay(50);
printf("%c",ques[i]);
}
getch();
}
