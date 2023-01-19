#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
         cout<<" ";
           
        }
        for(int m=1;m<=n-i;m++){
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}
