// let investigate data types and variables
#include <stdio.h>
int main(void)
{
char c,test_symbol;//declaration of discrete variables
                   //this is just creation of correspondance
                   //variable name(or identificator)VS
                   //some place and some amount of bytes in memory
printf("Value of c variable as symbol: %c\n" ,c);
printf("Value of c variable as symbol (dec): %d\n" ,c);
printf("Value of c variable as symbol (oct): %#o\n" ,c);
printf("Value of c variable as symbol (hex): %#x\n" ,c);
//after declaration value of variable isn't known
printf("\n");
//that is why it is better(but  not obligatory) to use definition
char c_new  = 85;//definition of discrete variables
               //is declaration + assigning of value
               // = assigning operation (right partvalue is written in  memory
               //place mentioned by the left)
               //there is some time (in microseconds or in nano seconds etc.)
               //between every action
       
printf("Value of c variable as symbol: %c\n" ,c_new);
printf("Value of c variable as symbol (dec): %d\n" ,c_new);
printf("Value of c variable as symbol (oct): %#o\n" ,c_new);
printf("Value of c variable as symbol (hex): %#x\n" ,c_new);
printf("\n");
// the role of variable is to be varied (changed)
//when we need we cab assign new value!
c = 'Y';
printf("Value of c variable as symbol: %c\n" ,c);
printf("Value of c variable as symbol (dec): %d\n" ,c);
printf("Value of c variable as symbol (oct): %#o\n" ,c);
printf("Value of c variable as symbol (hex): %#x\n" ,c);

printf("\n");
c=0105;
printf("Value of c variable as symbol: %c\n" ,c);
printf("Value of c variable as symbol (dec): %d\n" ,c);
printf("Value of c variable as symbol (oct): %#o\n" ,c);
printf("Value of c variable as symbol (hex): %#x\n" ,c);

printf("\n");
c=0x4B;
printf("Value of c variable as symbol: %c\n" ,c);
printf("Value of c variable as symbol (dec): %d\n" ,c);
printf("Value of c variable as symbol (oct): %#o\n" ,c);
printf("Value of c variable as symbol (hex): %#x\n" ,c);

printf("\n");
c=85.6; //0.6 data will be trancated
printf("Value of c variable as symbol: %c\n" ,c);
printf("Value of c variable as symbol (dec): %d\n" ,c);
printf("Value of c variable as symbol (oct): %#o\n" ,c);
printf("Value of c variable as symbol (hex): %#x\n" ,c);

printf("\n");
c=1.256e2; // this notation with floating point
          // means 1.256 * 10^(2) big real number -125.3
          // also at asigning operation data about  0.3
printf("Value of c variable as symbol: %c\n" ,c);
printf("Value of c variable as symbol (dec): %d\n" ,c);
printf("Value of c variable as symbol (oct): %#o\n" ,c);
printf("Value of c variable as symbol (hex): %#x\n" ,c);


return 0;
}
