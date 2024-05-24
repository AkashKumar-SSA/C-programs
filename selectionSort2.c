#include<stdio.h>

void swap(int arr[],int index1,int index2){
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] =temp;
}

void selectionSort(int arr[],int size){
    // int n=size;
    int smallest;
    for(int i=0;i < size-1 ; i++){
        smallest=i;
        for(int j = i+1 ; j < size; j++){
            if(arr[j] <  arr[smallest]){
                smallest=j;
                swap(arr,i,smallest);
            }
        }  
    }      
}
void print_array(int arr[],int size){
    for(int i=0;i < size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void main(){
    int arr[]={34,57,23,9,23};
    int size = sizeof(arr)/sizeof(int);
    printf("The original array is:");
    print_array(arr,size);

    printf("\nThe sorted arrat is:");
    selectionSort(arr,size);
    print_array(arr,size);
}