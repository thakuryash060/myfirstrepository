#include<stdio.h>
int main(){
int days;
int rdays;
int years;
int weeks;
int day;
printf("Enter days:\n");
scanf("%d",&days);
years=days/365;
rdays=days%365;
weeks=rdays/7;
day=rdays%7;
printf("Now %d years %d week and %d days",years,weeks,day);

}