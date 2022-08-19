#include<stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n){//Function Body
    int i ,j,temp;
    int flg;
    for(i=0;i<n;i++){
        flg=0;
        for(j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                flg=1;
                temp = arr[j];
                arr[j] =arr[j+1];
                arr[j+1] = temp;
            }
        }
        // if(flg==0){
        //     cout<<"Already Sorted....";
        //     return;
        // }
    }

    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int n;
    
    cout<<"Please the no of element u want to enter:";
    cin>>n;

    int *arr = new int(n);//Dynamic Memory allocation

    cout<<"Now Enter The Element :";//To get Element
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"Your Entered Elements Are:";//To display Element
    for(int i=0;i<n;i++){
       cout<<arr[i]<<endl; 
       
    }
    cout<<"Your sorted Elements are:";
    bubbleSort(arr,n);//Function call

    

    return 0;
}
