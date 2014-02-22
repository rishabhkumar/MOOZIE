void primeno(int a)
{int b=2;
while(1)
{if(a%b==0)
{printf("\nNo! It's a Compsite Number!");
goto end;}
if(b==(a-1))
{printf("\nYup!");
goto end;}
b++;
}
end:
}

void prime(char a[])
{int i,t;
for(i=0;a[i]!='\0';i++)
{if(a[i]>=48&&a[i]<=56)
{t=a[i]-48;
break;}}
primeno(t);
getch();
}
