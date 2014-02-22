void actionbaby();
void binary(char a[])
{int n,i,m;
clrscr();
for(i=0;a[i]!='\0';i++)
{}
i--;
n=a[i];
m=n-48;
actionbaby(m);
getch();
}
void actionbaby(int n)
{int k,m,A[5],i;
clrscr();
k=n;
for(i=0;i<5;i++)
{m=n/2;
A[i]=n%2;
if(m==1)
{A[i+1]=1;}
n=n/2;}
printf("\nThe Binary Equivalent of %d is: (Represented in max 5 digits) ",k);
printf("\n\n\t\t\t\t");
for(i=4;i>=0;i--)
{if(A[i]<2)
{printf("%d ",A[i]);}
}
}
