#include<iostream>

using namespace std;

int main(){
    int num;
    cout<<"enter num";
    cin>>num;
    for(int i=1;i<=num;i++){
        if(i<=((num+1)/2))
        {
        for(int m=0;m<=(num-i);m++){
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++){
            cout<<"*";
            
        }}


        else {
        for (int m = 1; m <= (i - ((num + 1) / 2)+((num/2)+1)); m++) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * (num - i) + 1); k++) {
            cout << "*";
        }
    }
    cout<<endl;
}
  return 0;
}
