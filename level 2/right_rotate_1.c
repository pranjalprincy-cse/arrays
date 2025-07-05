//right rotate array by one position

#include<stdio.h>

int main(){
    int n;
    printf("Enter the number of elements of the array:");
    scanf("%d",&n);

    int arr[n];

    printf("Enter the elements of the array:\n");
    for(int i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    int last=arr[n-1];//here we store the last element in last 

    for(int i=n;i>0;i--){//here we shift all elements to the right
        arr[i]=arr[i-1];
    }

    arr[0]=last;//here we assign the last value to the first element 

    printf("Array after rotation:");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);
    }
}
