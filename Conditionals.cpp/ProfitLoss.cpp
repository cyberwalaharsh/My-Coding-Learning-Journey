#include<iostream>
using namespace std;
int main (){
    int cp,sp;
    cout<<"Enter the cost price = ";
    cin>>cp;
    cout<<"Enter Selling Price = ";
    cin>>sp;
    if (sp > cp) cout<<"Profit = "<< sp-cp;
    else if (sp < cp) cout <<"Loss = "<<cp-sp;
    else cout <<"No Profit No Loss. ";
}