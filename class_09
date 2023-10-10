#include<stdio.h>

int main(void)
 {
 // Continue investigate data types and operations:
 // https://www.geeksforgeeks.org/data-types-in-c/
 // https://en.cppreference.com/w/c/language/operator_precedence
 // +, -, *, /, %, ...

 char c = 10, cc = 127; //cc = 128;
 int i = -4569, ii = 126;
 float f = 3.14e-2, ff = 0.2569;
 double d = 4.789e39, dd = -13.56;

 printf("\n");
 printf("c=%d\t\t(size in memory in bytes - %ld,\n\t\t",c,sizeof(c));
 printf("placement or an address in memory - %p)\n",&c);
 printf("cc=%d\t\t(size in memory in bytes - %ld,\n\t\t",cc,sizeof(cc));
 printf("placement or an address in memory - %p)\n",&cc);
 printf("i=%d\t\t(size in memory in bytes - %ld,\n\t\t",i,sizeof(i));
 printf("placement or an address in memory - %p)\n",&i);
 printf("f=%.3f\t\t(size in memory in bytes - %ld,\n\t\t",f,sizeof(f));
 printf("placement or an address in memory - %p)\n",&f);
 printf("d=%.2e\t\t(size in memory in bytes - %ld,\n\t\t",d,sizeof(d));
 printf("placement or an address in memory - %p)\n",&d);

 printf("\n");
 int *address_of_i = &i;
 printf("address of i - %p\n",address_of_i);
 int *copy_of_address_of_i = address_of_i;
 printf("copy of address of i - %p\n",copy_of_address_of_i);
 printf("value of i, obtained by using an address of it - %d\n",*address_of_i);
 printf("value of i, obtained by using an copy of address of it - %d\n",*copy_of_address_of_i);

 int **address_of_address_of_i = &address_of_i;
 printf("address of address of i - %p\n",address_of_address_of_i);
 printf("size of adress of address of i - %ld\n",sizeof(address_of_address_of_i));

 printf("\ninvestigation of / operator:\n");
 printf("char/char = ? - ");
 printf("%d / %d = %d (size of result in bytes - %ld)\n",cc,c,cc/c,sizeof(cc/c));

 char a = 4, b = 5, ab;
 ab = a >= b;
 printf("\n");
 printf("%d >= %d\nresult: %d (size of result in bytes - %ld)",a,b,a>=b,sizeof(a>=b));
 printf("\nresult from memory: %d\n",ab);


 a = 5, b = 5;
 ab = a >= b;
 printf("\n");
 printf("%d >= %d\nresult: %d (size of result in bytes - %ld)",a,b,a>=b,sizeof(a>=b));
 printf("\nresult from memory: %d\n",ab);
 printf("result from memory (just one junior byte taken): %d\n",(char)ab);

 printf("\nDear user, please, enter one symbol: ");
 scanf(" %c", &c);
 printf("Dear user, You have entered %c symbol.\n",c);

 return 0;
 }
