#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n%5==0 and n%3==0) cout<<"Anuj";
    else if (n%3==0) cout <<"Rajababu";
    else if (n % 5== 0) cout<<"Bhanu";
    else cout << " Ranu ";
}

