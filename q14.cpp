#include <iostream>
using namespace std; 
int main(){
    int a;
    cout<<"enter n"<<endl;
    cin >> a;
    int mul=1;
    
    for(int i=1; i<=10; i++){
        mul=a*i;
        cout << a << "*" << i << "=" << mul;
        cout<<endl;
    }
    return 0;
}
