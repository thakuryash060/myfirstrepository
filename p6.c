#include<stdio.h>
int main(){
double celcius;
double fahrenheit;
printf("Enter input\n");
scanf("%lf",&celcius);
fahrenheit = 1.8*celcius + 32;
printf("Output will be %lf",fahrenheit);
}