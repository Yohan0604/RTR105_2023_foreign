#include <stdio.h>
void main()
{
long long input_num;
char charNum =1;
long long longNum =1;
int intNum =1;
char type;
printf("Please Enter Decimal number: ");
scanf("%lld99",&input_num);
printf("Please Enter first letter of data type:");
scanf("%c99",&type);
int counter =1;
if(type =='c')
{
char reference =1;
while(counter <=input_num)
{
charNum *= (counter+1);
reference *=counter;
if((charNum/(counter +1)) !=reference)
{
printf("Char data type is too small to store %lld factorial\n",input_num);
break;
}
counter++;
}
if(charNum ==reference *input_num)
{
printf("Factorial of the number %lld is %d",input_num,charNum);
}
}
else if(type =='i')
{
int reference =1;
while(counter = input_num)
{
intNum *= (counter +1);
reference *=counter;
if((intNum/(counter +1)) !=reference)
{
printf("int data type is too small to store %lld factorial\n",input_num);
break;
}
counter ++;
}
if(intNum ==reference*input_num)
{
printf("Factorial of the Number %lld & %d",input_num ,intNum);
}
}
else if(type=='l')
{
long long reference =1;
while (counter <= input_num)
{
longNum *= (counter +1);
reference *= counter;
if ((longNum/(counter +1)) !=reference)
{
printf("long long dat type is too small too store %lld factorial\n",input_num);
break;
}
counter++;
}
if(longNum ==reference*input_num)
{
printf("Factorial of the Number %%lld is %d",input_num,longNum);
}
}
}
