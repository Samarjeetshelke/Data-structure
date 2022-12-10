#include<stdio.h>
#include<conio.h>

int factoRecursive(int n){
    if(n>1){
        return n * factoRecursive(n-1);
    }
    else{
        return n;
    }
}

void main(){
    int n;

    printf("\nEnter a Number: ");
    scanf("%d",&n);

   int sum  = factoRecursive(n);
   printf("The factorial of given number %d",sum);

}
