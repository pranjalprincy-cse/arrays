//to remove duplicate element from array 

#include<stdio.h>
int main(){
    int n;
    printf("Enter the number of elements:");//here we take the number of elements
    scanf("%d",&n);

    int arr[n];
    
    printf("Enter the elements of the array:\n");

    for(int i=0;i<n;i++){
        printf("enter element %d: ",i+1);//here we take the elements
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){                   //outer loop goes from 0 to n-1
        for(int j=i+1;j<n;){                //inner loop checks every element next to i upto n-1 but the increment happens after if condition
            if(arr[i]==arr[j]){             //now if we find that two elements are identical
                for(int k=j;k<n-1;k++){     //we shift every elemnt to the left
                    arr[k]=arr[k+1];

                }
                n--;                        //we decrease the array size
            }else{
                j++;                        //and if no similar elements are found the loop runs as usual with j being incremented
            }
        }
    }

    printf("The array after duplicate element removal:");
    for(int i=0;i<n;i++){
        printf(" %d ",arr[i]);

    }
}
