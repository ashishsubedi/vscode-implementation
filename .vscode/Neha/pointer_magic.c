#include<stdio.h>

int main(){

    int a =5;
    int* pa;
    pa = &a;
    int** b;
    b = &pa;
    //*b = pa;
    printf("%d\t%d\t%d\t%u\t%u\n",a,*pa,*(*b),pa,b);

}