//merge two arrays 

#include<stdio.h>
int main(){
    int m;
    printf("Enter the number of elements of first array:");//here we take the number of elements of the first array
    scanf("%d",&m);

    int arr1[m];

    printf("Enter the elements of the first array:\n");//here we take the elements of the first array
    for(int i=0;i<m;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr1[i]);
    }

    int n;
    printf("Enter the number of elements of second array:");//here we tale the number of elements of the second array
    scanf("%d",&n);

    int arr2[n];

    printf("Enter the elements of the second array:\n");//here we take the elements of second array
    for(int i=0;i<n;i++){
        printf("Element %d: ",i+1);
        scanf("%d",&arr2[i]);
    }

    int arr[m+n];//create a new array with m+n elements

    for(int i=0;i<m;i++){//copy first array into the new array
        arr[i]=arr1[i];
    }
    for(int i=0;i<n;i++){
        arr[m+i]=arr2[i];//copy second array into the new array
    }

    printf("merged array: ");
    for(int i=0;i<m+n;i++){
        printf(" %d ",arr[i]);
    }
}
