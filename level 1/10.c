//check if the array is sorted

#include<stdio.h>
int main(){
    int n;              //take the number of elements 
    printf("Enter the number of elements  of the array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of the array:\n");

    for(int i=0;i<n;i++){
        printf("Enter element %d : ",i+1);//take the elements 
        scanf("%d",&arr[i]);
    }
    int ascending=1;
    int descending=1;               //here we assume the array is sorted 

    for(int i=0;i<n-1;i++){
        if(arr[i]<arr[i+1]){         //if its ascending,descending becommes 0
            descending=0;
        }else if(arr[i]>arr[i+1]){          
            ascending=0;             //if its descending,ascending becomes 0
        }
        }

    if(ascending){
        printf("Array is in ascending order.");
    }else if(descending){
        printf("Array is ij descending order.");
    }else{
        printf("Array is not sorted.");
    }
}
