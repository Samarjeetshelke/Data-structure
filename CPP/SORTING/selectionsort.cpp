#include<iostream>
using namespace std;

//without recursion
void swap(int a[],int minpos,int i){
    int x;
    cout<<"min: "<<minpos<<"\nstat: "<<i;
    x=a[minpos];
    a[minpos]=a[i];
    a[i]=x;
}

void selectionsort(int n,int a[]){
    int minpos;
    int i=0;


    for(i=0;i<(n-1);i++){
        minpos=i;
        for(int j=minpos+1;j<n;j++){
            if(a[j]<a[minpos])
                minpos=j;
        }
        cout<<"\nThe fist min pos is: "<<minpos;
        swap(a,minpos,i);
    }
}
int main(){
    int a[5];
    cout<<"\nEnter the data: ";
    int i=0;

    while(i<5){
        cin>>a[i];
        i++;
    }

    selectionsort(5,a);
    cout<<"\nDisplay: ";
    i=0;
    while(i<5){
        cout<<a[i];
        i++;
    }

    return 0;
}
