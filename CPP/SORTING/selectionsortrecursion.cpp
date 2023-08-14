#include<iostream>
using namespace std;

void swap(int a[],int start,int minpos){
    int x;
    x=a[start];
    a[start]=a[minpos];
    a[minpos]=x;
}

void selectionsort(int a[],int n,int s){
    if(s>=n-1){
        return;
    }
    int minpos=s;
    for(int i=s+1;i<n;i++){
        if(a[i]<a[minpos]){
            minpos=i;
        }
    }
    swap(a,s,minpos);
    selectionsort(a,n,s+1);

}

int main(){
    int a[5];
    cout<<"\nEnter the data: ";
    int i=0;

    while(i<5){
        cin>>a[i];
        i++;
    }

    selectionsort(a,5,0);
    cout<<"\nDisplay: ";
    i=0;
    while(i<5){
        cout<<a[i];
        i++;
    }

    return 0;
}
