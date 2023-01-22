#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"number of rows you want to print";
    cin>>num;
    for(int i=1;i<=num;i++){
        for(int j=1;j<num;j++){
            if(j==i){
                cout<<"*";
            }
            cout<<" ";

        }
  
        cout<<endl;
        
        
    }
    return 0;
}   
