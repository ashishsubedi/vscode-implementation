#include<stdio.h>

void swap(int *a, int *b);

int main(){
    int a,b;
    scanf("%d%d", &a,&b);
    swap(&a,&b);
    printf("The swapped values are %d and %d",a,b);
    return 0;
}
void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a= *b;
    *b = temp;
}