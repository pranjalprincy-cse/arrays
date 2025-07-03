//find the largest element in an array 

#include<stdio.h>
int main(){
    
    int n;
    printf("Enter the number of elements in the arrray:");
    scanf("%d",&n);

    int arr[n];

    printf("enter the elements of the array:\n");

    for(int i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }    
    }

    printf("The largest number in the array is %d", max);
}
