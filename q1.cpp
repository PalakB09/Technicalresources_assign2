#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows to be printed\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<=(n-i);j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
} 
