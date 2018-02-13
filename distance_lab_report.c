#include<stdio.h>
#include<math.h>
typedef struct{
    double x;
    double y;
}points;
double distance(points);
int main(){

    points s;
    double dist;
    
    printf("Enter x and y coordinates");
    scanf("%lf%lf",&s.x,&s.y);
    dist= distance(s);
    printf("The distance is : %g", dist);

    return 0;
}
double distance(points s){
    double dist = 0;
    dist = sqrt(pow(s.x,2)+pow(s.y,2));

    return dist;
}