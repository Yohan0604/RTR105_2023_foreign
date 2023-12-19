#include <stdio.h>

int main()
{
char type;
int i,n;
long long int fact,p_fact,n_fact;

printf("Enter the data type to use(char(c) / int(i) / long long int(l)): ");
scanf("%c",&type);

printf("please, enter one natural number: ");
scanf("%d",&n);

i = 1;
p_fact=1;
fact = 1;
n_fact=1;

if(type=='c')
{
 if(n<4)
{
 while(i<=n && p_fact==n_fact)
{
p_fact = fact;
fact = fact * i;
n_fact = fact/i;
i+=1;
}
printf("%3d! = %lld\n",i-1,fact);
}
else
{
printf("selected data type is not wrong\n");
return 0;
}
}
else if(type=='i')
{
if(n<13)
{
while(i<=n && p_fact==n_fact)
{
p_fact = fact;
fact = fact * i;
n_fact = fact/i;
i+=1;
}
printf("%3d! = %lld\n",i-1,fact);
}
else
{
printf("selected data type is wrong\n");
return 0;
}
}
else if(type=='l')
{
while(i<=n)
{
p_fact = fact;
fact = fact * i;
n_fact = fact/i;
i+=1;
if(p_fact==n_fact)
{
continue;
}
else
{
printf("selected data type is wrong\n");
return 0;
}
}
printf("%3d! = %lld\n",i-1,fact);
}
return 0;
}
