#include<stdio.h>
int main()
{
unsigned char num;
printf("Please enter a natural number (0-255):");

scanf("%hhu",&num);
printf("Binary representation:");
for (int i =7; i>=0; i--){
unsigned char bit=(num>>i)& 1;
printf("%u",bit);
}
printf("\n");
return 0;
}
