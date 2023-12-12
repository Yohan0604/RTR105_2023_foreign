#include <stdio.h>

int main()
{
    char a, b, c; 
    char order; 
    printf("Enter three letters: "); 
    scanf("%c %c %c", &a, &b, &c);
    printf("Enter A for alphabet order or R for reverse order:");
    scanf(" %c", &order); 
   
    {
        
        if (a > b) 
        {
            char swap = a; 
            a = b;
            b = swap;
        }
        if (b > c)
        {
            char swap = b; 
            b = c;
            c = swap;
        }
        if (a >b)
        {
            char swap = a;
            a=b;
            b= swap;
        }
if (order == 'A' || order == 'a')
     {   printf("The sorted sequence is: %c %c %c\n", a, b, c); 
    }
else if (order == 'R' || order == 'r') 
    {
        printf("The sorted sequence is: %c %c %c\n", c,b,a); 
    }
  
} 
    return 0;
}
