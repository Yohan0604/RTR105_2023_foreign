
#include <stdio.h>
#include "functions.h" 

void age_1() //without arguments and without return
{
    int age=22;
    printf("Enter your age: \n");
    scanf("%d",&age);
    printf("My name is Yohan.\n");
    printf("I am %d years old.\n",age);
}

void age_2(int age)//with arguments and without return
{
    printf("I am %d years old.\n",age);
}

int age_3()//without arguments and with return
{
    int age;
    printf("Enter your age: \n");
    scanf("%d",&age);
    return age;
}

int age_4(int age)//with arguments and with return
{
    printf("Enter your age: \n");
    scanf("%d",&age);
    return age;
}
