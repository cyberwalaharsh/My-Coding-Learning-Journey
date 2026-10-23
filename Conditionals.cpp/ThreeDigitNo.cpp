#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Entere a number = ";
    cin>>n;
    if (n >= 100){
        if (n <= 999) cout<<"3 Digit Number";
        else cout <<" Not a 3 Digit Number";
    }
    else cout <<"Not a 3 Digit Number";
}