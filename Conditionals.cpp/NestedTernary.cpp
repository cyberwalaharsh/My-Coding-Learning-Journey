#include<iostream>
using namespace std;
int main (){
    int x ;
    cout<<"Enter a number:- ";
    cin>>x;
    int y = (x <= 23) ? ((x > 12) ? x-4 : x*4) : ((x < 12) ? x/4 : x+4);
    cout<<y;
}