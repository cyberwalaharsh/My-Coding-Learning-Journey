#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a Number:- ";
    cin>>a;
    long long fact =1;
    for(int i = 1; i <= a; i++){
        fact *= i;
    }    
cout<<"Factorial of the given no. = "<<fact;
}