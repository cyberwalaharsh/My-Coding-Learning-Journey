#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number:- ";
    cin>>n;
    for(int i=1;i<=sqrt(n);i++){
        if(n%1==0){   //factor mil gya
            cout<<i<<" ";
            if (i != n/1) cout<<n/i<<" ";
        }
    }
}