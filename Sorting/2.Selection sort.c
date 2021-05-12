/*Selection sort in C to sort numbers of an array in ascending order. With a little modification, it arranges numbers in descending order.

Selection sort algorithm (for ascending order)
Find the minimum element in the array and swap it with the element in the 1st position.
Find the minimum element again in the remaining array[2, n] and swap it with the element at 2nd position, now we have two elements at their correct positions.
We have to do this n-1 times to sort the array.
*/or
/*Selection Sort:-
In selection sort, the smallest value among the unsorted elements of the array is selected in every pass and inserted to its appropriate position into the array.

First, find the smallest element of the array and place it on the first position. Then, find the second smallest element of the array and place it on the second position.
The process continues until we get the sorted array.

The array with n elements is sorted by using n-1 pass of selection sort algorithm.

*/
 METHOD:-
   
   
   /******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void sort(int* ,int);

int main()
{
    int *arr,n;
    
    printf("\nPlease enter the size :-");
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
        printf("\nenter the val for array[%d]:-",i);
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    printf("\nprintng data:-");
    for(int i=0;i<n;i++){
        
        printf("\n%d",arr[i]);
    }

    return 0;
}

void sort(int *arr,int n){
    int i=0,j=0,k=0,flg=1;
    for(i=0;i<n;i++){
        for(j=0;j<(n-1) &&  flg==1;j++){
            for(k=j+1;k<n;k++){
                flg=0;
                if(*(arr+j) > *(arr+k)){
                   flg=1;
                   int temp =  *(arr+j);
                   *(arr+j) = *(arr+k);
                   *(arr+k) = temp;
                }
            }
        }
    }
    
}
