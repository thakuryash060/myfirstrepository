#include<stdio.h>
void fun(int arr[],int size){
for(int i=0;i<size;i++){
    printf("%d\t",arr[i]);
}
printf("\n");
}
void fact(int arr[],int size,int index){
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
}
int main(){
int arr[10]={7,18,17,33,8,6,48,96};
int index=3;
int size=8;
fun(arr,size);
fact(arr,size,index);
size=size-1;
fun(arr,size);
}