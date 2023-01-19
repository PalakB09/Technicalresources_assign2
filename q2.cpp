#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"enter the number of rows\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j>0;j--){
            cout<<"a";
        }
        cout<<endl;
    }
    return 0;
}
