#include<stdio.h>
int main(){
int a,b,c;
printf("Enter 3 number\n");
scanf("%d %d %d",&a,&b,&c);
if(a>b && a>c){
printf("%d is greatest\n",a);
if(b>c){
printf("%d is 2nd greatest\n",b);
printf("%d is 3rd greatest\n",c);
}
else{
printf("%d is 2nd greatest\n",c);
printf("%d is 3rd greatest\n\n",b);
}
}
else if(a<b && b>c){
printf("%d is greatest\n\n",b);
if(a>c){
    printf("%d is 2nd greatest\n",a);
    printf("%d is 3rd greatest\n",c);
}
else{
    printf("%d is 2nd greatest\n",c);
    printf("%d is 3rd greatest\n",a);
}
}
else{
printf("%d is greatest\n",c);
if(a>b){
    printf("%d is 2nd greatest\n",a);
    printf("%d is 3rd greatest\n",b);
}
else{
    printf("%d is 2nd greatest\n",b);
    printf("%d is 3rd greatest\n",a);
}
}
}