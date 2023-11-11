#include<stdio.h>
int main(){
int minute;
int hour;
int minutes;
printf("Enter time\n");
scanf("%d",&minute);
hour=minute/60;
minutes=minute%60;
printf("Time is %d hour and %d minute",hour,minutes);
}