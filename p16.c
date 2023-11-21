#include<stdio.h>
int main(){
int x,y;

printf("Enter x-coordinate\n");
scanf("%d",&x);
printf("Enter y-coordinate\n");
scanf("%d",&y);
if(x<0){
    if(y<0){
    printf("You are in 3rd quadrant");
    }
    else{
    printf("You are in 2nd quadrant");
    }
}
else if(x == 0 && y ==0){
    printf("You are at origin");
}
else{
    if(y>0){
    printf("You are in 1st quadrant");
    }
    else{
    printf("You are in 4th quadrant");
    }

}
return 0;
}
