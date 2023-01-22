#include<iostream>

using namespace std;

int main(){
    int num;
    int a=1,b=1;
    cout<< "enter the number of rows";
    cin>> num;
    cout<<"0"<<endl;
    cout << 1 << " " << 1 << endl;
    for(int i=3;i<=num;i++){
        for(int j=1;j<=i;j++){
            int c=a+b;
            cout<<c<<" ";
            a=b;
            b=c;
            
        }
        cout<<endl;
    }
    return 0;
}
