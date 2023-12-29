#include<stdio.h>
void dis(int arr[],int size){
    for(int i=0;i<size;i++){
    printf(" %d\t",arr[i]);
    }
    printf("\n");
}
int insert(int arr[],int c,int size,int element,int index){
    if(size>=c){
        return -1;
    }
else{
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }                             /*right to left in bracket*/
    arr[index]=element;
}
}


int main(){

int arr[100]= {7,10,19,44,45};
int size=5;
int element=18;
int index=2;
dis(arr,size);

insert(arr,100,size,element,index);
size=size+1;
dis(arr,size);
}