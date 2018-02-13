#include<stdio.h>
int main(){
    int x;
    float y;
    scanf("%d%f",&x,&y);
    if(x>y)
        printf("%.2f",y);
    else if(x%5!= 0){
        printf("%.2f", y);
    }
    else{
        y=y-x-.5;
        printf("%.2f",y);
    }
    return 0;
}