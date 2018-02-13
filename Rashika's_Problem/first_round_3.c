#include<stdio.h>
//#include<math.h>
#include<stdlib.h>


int main(){
   
    int year,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&year);
        int diff = abs(year - 2000);
        diff %= 7;
        switch(diff+1){
            case 1:
                printf("monday");
                break;
            case 2:
                printf("tuesday");
                break;
            case 3:
                printf("wednesday");
                break;
            case 4:
                printf("thursday");
                break;
            case 5:
                printf("friday");
                break;
            case 6:
                printf("saturday");
                break;
            case 7:
                printf("sunday");
                break;
        }
    }
}