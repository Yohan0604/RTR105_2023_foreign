#include <stdio.h>

void main()
{
    long long input_num;
    char charNum = 1;
    long long longNum = 1;
    int intNum = 1;
    char choice;

    printf("Please Enter Decimal Number: ");
    scanf("%lld", &input_num);
    printf("Please Enter first letter of Data type Char(c) Int(i) Long(l)\n: ");
    scanf(" %c", &choice);

    if (choice == 'c')
    {
        char reference = 1;
        int counter = 1;

        while (counter < input_num)
        {
            charNum *= (counter + 1);
            reference *= counter;

            if (charNum / (counter + 1) != reference)
            {
                printf("Selected Data type is too small to store number %lld\n", input_num);
                break;
            }

            counter++;
        }

        if (charNum == reference * input_num)
        {
            printf("Factorial Of Number %lld! = %d\n", input_num, charNum);
        }
    }
    else if (choice == 'i')
    {
        int reference = 1;
        int counter = 1;

        while (counter < input_num)
        {
            intNum *= (counter + 1);
            reference *= counter;

            if (intNum / (counter + 1) != reference)
            {
                printf("Selected data type is too small to store factorial of number %lld\n", input_num);
                break;
            }

            counter++;
        }

        if (intNum == reference * input_num)
        {
            printf("Factorial Of Number %lld! = %d\n", input_num, intNum);
        }
    }
    else if (choice == 'l')
    {
        long long reference = 1;
        long long counter = 1;

        while (counter < input_num)
        {
            longNum *= (counter + 1);
            reference *= counter;

            if (longNum / (counter + 1) != reference)
            {
                printf("Selected data type is too small to store factorial of number %lld\n", input_num);
                break;
            }

            counter++;
        }

        if (longNum == reference * input_num)
        {
            printf("Factorial of Number %lld! = %lld\n", input_num, longNum);
        }
    }
}
