#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter a Real No: ";
    cin>>x;
    int y = (int) x;
   (x == y) ? cout <<"Integer" : cout<<"Not an Integer";
}