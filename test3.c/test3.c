#include <stdio.h>

int main()
{
char a, b, c;
char order;
printf("Enter three letters: ");
scanf("%c %c %c", &a, &b, &c);
printf("Enter A for alphabet order or R for reverse order:");
scanf(" %c", &order);

int first_char=(int)a;
int second_char=(int)b;
int third_char=(int)c;

int law =first_char;
int mid=second_char;
int high=third_char;
if (law>mid)
{
mid=first_char; min+second_char;
}
if(mid>high)
{
max =mid;
mid =third_char;
if
