#include<iostream>
using namespace std;
int main(){
    int a,c,b;
    cout<<"Enter !st number:- ";
    cin>>a;
    cout<<"Enter 2nd Number:- ";
    cin>>b;
    cout<<"Enter 3nd Number:- ";
    cin>>c;
/*if (a >= b && a >= c) cout<<a<<" is largest";
    else if (b >= a && b >= c) cout<<b<<" is largest";
    else cout << c << " is largest"; */

    
    if (a >= b) {
        if (a >= c) cout <<a<<" is largest";
           else // c > a > b
            cout<<c<<" is largest";
    }
    else { // b > a
        if (b >= c) cout<<b<<" is largest.";
          else // c > b > a
            cout<<c<<" is largest";
    }

    }
