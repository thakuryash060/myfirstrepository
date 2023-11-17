#include<stdio.h>
int main(){
int A;
int B;
int C;
printf("Enter values\n");
scanf("%d %d %d",&A,&B,&C);
if(A+B+C == 180 && A>0 && B>0 && C>0){
printf("Triangle can be formed");
}
else{
printf("Can't be formed");
}
}