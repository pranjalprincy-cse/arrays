//find the second largest element 
#include<stdio.h>
int main (){
    int n;
    printf("Enter the number of elements in the array: ");//here we take the number of elements 
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        printf("Element %d : ",i+1);//here we get the elements of the array
        scanf("%d",&arr[i]);

    }
    if (n<2){
        printf("Need at least 2 elements"); //here we print error message if the array has less than 2 elements 
    }

    int largest;
    int second;

    if(arr[0]>arr[1]){
        largest=arr[0];
        second=arr[1];
    }else{                          //here we assume the first and second element to be largest and second largest
        largest=arr[1];
        second=arr[0];
    }

    for(int i=0;i<n;i++){
        if(arr[i]>largest){//here is we find a value greater then the 1st number,that number becomes largest and the previous largest becomes second
            second=largest;
            largest=arr[i];
        }else if(arr[i]>second && arr[i]<largest){//here if we find a number between the two,that number becomes second 
            second=arr[i];
        }
    }

    printf("Second largest number is:%d",second);
    }

    






