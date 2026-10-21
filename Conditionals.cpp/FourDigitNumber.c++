#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a Number:- ";
    cin>>a;
    // Method 1 If Else se...
    // if (a >= 1000 && a <= 9999) cout<<"4 Digit Number";
   //  else cout<<"Not a 4 Digit Number";

   // Method 2 Ternary Operator
   // Iska syntax (2) type ka pehla -- (condition) ? cout<<"IF TRUE PRINT THIS " :  cout<<"IF FALSE PRINT THIS";
   // doosra style -- cout << ((condition) ? "TRUE" : "FALSE");

  cout<< (( a >= 1000 && a <= 9999 ) ? "4 Digit Number" : "Not a 4 Digit number");
}