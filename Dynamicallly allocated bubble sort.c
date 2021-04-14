///Methkd 1:-....................................................................................................................................................................
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
//Method 2:-(using the function)..................................................................................................................................................
//In this progrmme we dont need to reaturn type Bcoz Wee directly works on memory location.
#include <stdio.h>
void sort(int* ptr,int n);
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
    sort(ptr,n);//function call................
    printf("\nAfter  sorting:-");
    for(i=0;i<n;i++){
        printf("\n%d",ptr[i]);
    }
    return 0;
}
void sort(int* ptr,int n){ //function defination...............
    int i;
    int tem;
    for(int j=0;j<n-1;j++){
        for(i=0;i<n-1;i++){
            if(ptr[i]>ptr[i+1]){
                tem=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=tem;
            }
        }
    }
    
        
} 
//Method 3:-
//In both thenprograamem we Haven't chale the that" if the entered nm  are already inn orderd form ".
#include <stdio.h>
void sort(int* ptr,int n);
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
    sort(ptr,n);
    printf("\nAfter  sorting:-");
    for(i=0;i<n;i++){
        printf("\n%d",ptr[i]);
    }
    
    
    
    return 0;
}
void sort(int* ptr,int n){
    int i,flg=0;
    int tem;
    for(int j=0;j<n-1&&flg==1;j++){
        flg=0;
        for(i=0;i<n-1;i++){
            if(ptr[i]>ptr[i+1]){
                flg=1;
                tem=ptr[i];
                ptr[i]=ptr[i+1];
                ptr[i+1]=tem;
            }
        }
        if(flg==0){
            printf("\nAlready sorted......");
    }
    
        
} 

//Output like:-
 
please enter the size of array:-4
Please enter he array element:-1
Please enter he array element:-2
Please enter he array element:-3

Please enter he array element:-4

befour sorting:-
1
2
3
4
Allready sorted..
After  sorting:-
1
2
3
4
This is the final way to logic.We can develope the this code further.............
