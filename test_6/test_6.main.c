#include <stdio.h>
#include "functions.h"

/*
void age_1(); //without arguments and without return
void age_2(int age); //with arguments and without return
int age_3(); //without arguments and with return
int age_4(int age); //with arguments and with return
*/

int main() {
   
    int age_2n;
    int age_3n;
    int age_4n;
    
    printf("\nage_1 function: Without arguments and Without return\n");
    printf("------------------------------------------------------\n");
    age_1();
    
    
    printf("\nage_2 function: With arguments and Without return\n");
    printf("---------------------------------------------------\n");
    printf("Enter your age: \n");
    scanf("%d",&age_2n);
    printf("My name is Yohan Hasitha Thejan.\n");
    age_2(age_2n);
    
    
    printf("\nage_3 function: Without arguments and With return\n");
    printf("---------------------------------------------------\n");
    
    age_3n=age_3();
    printf("My name is Yohan Hasitha Thejan.\n");
    printf("I am %d years old.\n",age_3n);
   
   
   printf("\nage_4 function: With arguments and With return\n");
   printf("------------------------------------------------\n");
   age_4n=age_4(age_4n);
   printf("My name is Yohan Hasitha Thejan.\n");
   printf("I am %d years old.\n",age_4n);
   
    return 0;
}

