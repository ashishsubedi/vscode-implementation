#include<stdio.h>
void asd(int * );

int main(){
    int a[] = {1,2,3,4,5} ;
    /* a = &a[0];
    a+1 = &a[1];
    *(a+1) = a[1]; */
   // int *;
    asd(a);
    for (int i = 0; i < 5; i++)
    {
       
        printf("%d",a[i]);
    }
}
void asd(int* b){
    for(int i = 0; i <5; i++)
        // *(pa+i) = *(pa+i)+1;
        b[i] = b[i] + 1;
    // return b;
    //printf("Inside Function: %d\n", a[i]);
}

