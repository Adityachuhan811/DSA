#include<stdio.h>
 
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            printf("the element %d is at index is %d" , element,i);
            return i;
        }
    }
    return -1;
}
 

 
int main(){
   
    int arr[] = {1,2,3,4,5,67,8,9,69,10,11,12,13,114,};
    int size = sizeof(arr)/sizeof(int);
    int element = 69;
    linearSearch(arr, size, element);
   
    return 0;
}
