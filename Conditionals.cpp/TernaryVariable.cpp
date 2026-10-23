#include<iostream>
using namespace std;
int main(){
    int x ;
    cout<<"Enter a Number = ";
    cin>>x;
    int y = (++x > 12) ? x-4 : x*4;
    cout<<y;
}