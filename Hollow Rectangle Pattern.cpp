#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int row,col,temp=0;
    cout<<"Enter No.of Rows ";
    cin>>row;
    cout<<"Enter No.of Colums ";
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1 || i==row || j==1 || j==col)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}
