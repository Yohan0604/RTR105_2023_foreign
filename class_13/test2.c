#include<stdio.h>

int main()
{
unsigned char num;
printf("Please enter a natural number (0-255):");

scanf("%hhu",&num);
printf("Binary representation:%hhu",((num&0x80)>>7));
printf("%hhu",((num&0x40)>>6));
printf("%hhu",((num&0x20)>>5));
printf("%hhu",((num&0x10)>>4));
printf("%hhu",((num&8)>>3));
printf("%hhu",((num&4)>>2));
printf("%hhu",((num&2)>>1));
printf("%hhu",((num&1)>>0));

printf("\n");

