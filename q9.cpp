#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"number of rows you want to print";
    cin>>num;
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
            if(j==i || i+j==4){
                cout<<"* ";
            }
            cout<<" ";

        }
  
        cout<<endl;
        
        
    }
    return 0;
}   
