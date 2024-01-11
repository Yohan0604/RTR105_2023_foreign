#include <stdio.h>

void main()
{
    long long input_num;
    char charNum = 1;
    long long longNum = 1;
    int intNum = 1;
    char choice;
    printf("Please Enter Decimal Number: ");
    scanf("%lld99", &input_num);
    printf("Please Enter first letter of Data type (c) (i) (l) : ");
    scanf(" %c99", &choice);
    int counter = 1;
    if(choice == 'c')
    {
        char reference = 1;
        while(counter <= input_num)
        {
            
            charNum *= (counter + 1);
            
            
               reference *= counter; 
                
            
            
            
            if((charNum/(counter + 1)) != reference)
            {
                
                printf("Dat type is too small too store %lld factorial\n", input_num);
                break;
            }
            counter++;
            
        }
        if(charNum == reference * input_num)
        {
            printf("Factorial of number %lld!= %d", input_num, charNum);
            
        }
        
    }else if(choice == 'i')
    {
        int reference = 1;
        while(counter <= input_num)
        {
            
            intNum *= (counter + 1);
            
            
               reference *= counter; 
                
            
            
            
            if((intNum/(counter + 1)) != reference)
            {
                 
                printf("Data type is too small to store %lld factorial\n", input_num);
                break;
            }
            counter++;
            
        }
        if(intNum == reference * input_num)
        {
            printf("Factorial of Number %lld!= %d", input_num, intNum);
            
        }
        
            
    }else if(choice == 'l')
    {
        long long reference = 1;
        while(counter <= input_num)
        {
            
            longNum *= (counter + 1);
            
            
               reference *= counter; 
                
            
            
            
            if((longNum/(counter + 1)) != reference)
            {
                
                printf("Data type is too small to store %lld factorial\n", input_num);
                break;
            }
            counter++;
            
        }
        if(longNum == reference * input_num)
        {
            printf("Factorial of number %lld!= %lld", input_num, longNum);
            
        }
    }
}
