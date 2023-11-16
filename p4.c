#include<stdio.h>
int main(){
double miles;
double km;
printf("Enter distance travelled\n");
scanf("%lf",&miles);
km = miles * 1.609344 ;
printf("Distance travelled is %lf km",km);
}