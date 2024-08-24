// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

string digits[10][3]={
    {
        " _ ",
        "| |",
        "|_|"
    },
    {
        "   ",
        "  |",
        "  |"
    },
    {
        " _ ",
        " _|",
        "|_ "
    },
    {
        " _ ",
        " _|",
        " _|"
    },
    {
        "   ",
        "|_|",
        "  |"
    },
    {
        " _ ",
        "|_ ",
        " _|"
    },
    {
        " _ ",
        "|_ ",
        "|_|"
    },
    {
        " _ ",
        "  |",
        "  |"
    },{
        " _ ",
        "|_|",
        "|_|"
    },{
        " _ ",
        "|_|",
        " _|"       
    }
    
};


int main() {
    // Write C++ code here
    string num;
    cout<<"Enter the Number: ";
    cin>>num;
    cout<<endl;
    for(int i=0;i<3;i++){
        
        for(char ch:num){
            cout<<digits[ch-'0'][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


