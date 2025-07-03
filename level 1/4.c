//sumn and average of all the elements of an array 

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
    
    int sum=0;  //initialize sum as 0

    for(int i=0;i<n;i++){
        sum=sum+arr[i];     //keep adding elements as the loop progresses
    }

    printf("Sum is %d\n",sum);
    printf("Average is %d",sum/n);

}