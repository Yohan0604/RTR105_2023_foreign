#include<stdio.h>
int main()
{
unsigned char num;
printf("Please enter a natural number (0-255):");

scanf("%hhu",&num);
printf("Binary representation:");
for (int i =7; i>=0; i--){
int bit=(num>>i)& 1;
printf("%d",bit);
}
printf("\n");
return 0;
}
