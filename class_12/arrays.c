// touched (set or get) with one identifier - a[0], a[1], a[2]
// (bad) alternative - a1, a2, a3 - why bad? - because it is not useful for
// algoritimization - programmer should manually name every variable - a1, a2, ...
// for arrays it is times simpler - i=0; a[i]; i++; a[i]; i++; a[i]; ...

// NB! name of array is a pointer
// NB! indexing of elements of array starts with 0
// NB! address of array is an address of 0-th element of array

#include<stdio.h>

int main()
 {
 int i_array_1[10]; // declaration of int data array (10 elements with
                    //                                unpredictable values)

 int i_array_2[3] = {1,2,3}; // definition of int data array
 int i_array_3[5] = {4,5,6}; // the last two (3-rd and 4-th) will value 0
 int i_array_with_zeros[5] = {0}; // values of all elements of array are 0

 int i_array_2D[2][3] = {{7,8,9},    // [2 - number of rows][3 - number of colums]
                        {10,11,12}}; // dimensions coould be mutiple (even more tahn 2)

 printf("address of i_array_2: %p\n",i_array_2);

 int i=0;
 printf("address of %d-th element of i_array_2: %p\n",i,&i_array_2[i]);
 printf("value of %d-th element of i_array_2: %d\n",i,i_array_2[i]);
 //printf("value of %d-th element of i_array_2: %d\n",*(i_array_2));
 printf("value of %d-th element of i_array_2: %d\n\n",i,*(i_array_2+i));

 i++;
 printf("address of %d-st element of i_array_2: %p\n",i,&i_array_2[i]);
 printf("value of %d-st element of i_array_2: %d\n",i,i_array_2[i]);
 printf("value of %d-st element of i_array_2: %d\n\n",i,*(i_array_2+i));



 printf("\n\nmasīva i_array_2D 0.2. elementa adrese: %p\n",&i_array_2D[0][2]);
 printf("masīva i_array_2D 0.2. elementa vērtība: %d\n",i_array_2D[0][2]);
 printf("masīva i_array_2D 0.2. elementa vērtība: %d\n",*(*(i_array_2D+0)+2));

 printf("masīva i_array_2D 1.0. elementa adrese: %p\n",&i_array_2D[1][0]);
 printf("masīva i_array_2D 1.0. elementa vērtība: %d\n",i_array_2D[1][0]);
 printf("masīva i_array_2D 1.2. elementa vērtība: %d\n",*(*(i_array_2D+1)+0));
 printf("masīva i_array_2D 1.2. elementa vērtība: %d\n",*(i_array_2D+3));

 int *i_pointer_to_array = i_array_2D;
 //printf("masīva i_array_2D 1.0. elementa adrese: %p\n",&i_pointer_to_array[1][0]);
 //printf("masīva i_array_2D 1.0. elementa vērtība: %d\n",&i_pointer_to_array[1][0]);
 //printf("masīva i_array_2D 1.2. elementa vērtība: %d\n",*(*(i_pointer_to_array+1)+0));
 printf("masīva i_array_2D 1.2. elementa vērtība: %d\n",*(i_pointer_to_array+0));
 printf("masīva i_array_2D 1.2. elementa vērtība: %d\n",*(i_pointer_to_array+3));

 return 0;
 }
