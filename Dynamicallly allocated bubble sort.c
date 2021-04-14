#include <stdio.h>

int main()
{
    int tem,i=0,n;
    int *ptr;
   // system("cls");
    printf("please enter the size of array:-");
    scanf("%d",&n);
    ptr = (int*)malloc(n * sizeof(int));
    for(i=0;i<n;i++){
        printf("\nPlease enter he array element:-");
        scanf("%d",&*(ptr+i));
    }
    printf("\nbefour sorting:-");
    for(i=0;i<n;i++){
        printf("\n%d",ptr[i]);
    }
    for(int j=0;j<n-1;j++){
        for(i=0;i<n-1;i++){
            if(ptr[i]>ptr[i+1]){
                tem=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=tem;
            }
        }
    }
    printf("\nAfter  sorting:-");
    for(i=0;i<n;i++){
        printf("\n%d",ptr[i]);
    }
        
    
    
    
    return 0;
}
