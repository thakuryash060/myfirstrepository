#include<stdio.h>
int main(){
float quantity;
float price;
float totalcost;


printf("Enter quantity\n");
scanf("%f",&quantity);
printf("Enter price\n");
scanf("%f",&price);
totalcost = quantity*price;
printf("Total amount will be %f",totalcost);
}