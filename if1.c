#include <stdio.h>

int main()
{
    char a, b, c; 
    char order; 
    printf("Enter three letters: "); 
    scanf("%c %c %c", &a, &b, &c);
    printf("Enter A for alphabet order or R for reverse order:");
    scanf(" %c", &order); 
    if (order == 'A' || order == 'a') 
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
        printf("The sorted sequence is: %c %c %c\n", a, b, c); 
    }
    else if (order == 'R' || order == 'r') 
    {
       
        if (a < b) 
        {
            char swap = a;
            a = b;
            b = swap;
        }
        if (b < c) 
        {
            char swap = b;
            b = c;
            c = swap;
        } 
        {
            char swap = a;
            a = b;
            b = swap;
        }
        printf("The sorted sequence is: %c %c %c\n", a, b, c); 
    }
    
 
    return 0;
}
