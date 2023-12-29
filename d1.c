#include<stdio.h>
void fun(int arr[],int n){
    /*Traversal*/
for(int i = 0;i<n;i++){
    printf("%d\n",arr[i]);
}
}

int main(){
int arr[100]={1,7,18,45};
fun(arr,4);
}