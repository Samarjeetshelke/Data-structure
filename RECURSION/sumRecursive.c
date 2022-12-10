#include<stdio.h>
#include<conio.h>

int sumRecursive(int n){
    if(n>0){
        return n + sumRecursive(n-1);
    }
    else{
        return n;
    }
}

void main(){
    int n;

    printf("\nEnter a Number: ");
    scanf("%d",&n);

   int sum  = sumRecursive(n);
   printf("The sum is %d",sum);

}
