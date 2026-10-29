#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number:- ";
    cin>>n;
    int sum =0;
    while (n!=0){
        int lastdigit = n%10;
        sum += lastdigit;
        n/=10;
    }
    cout<<"Sum Of the digits = "<<sum<<endl;
    int rev = 0;
    while (sum!=0){
        rev *=10;
        rev += sum%10;
        sum/=10;
    }
    cout<<"Reverse of the digits obtained = "<<rev;
}