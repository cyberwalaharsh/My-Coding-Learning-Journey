#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:- ";
    cin>>a;

  /*  if (a == 1) cout<<"Monday";
    else if (a == 2) cout<<"Tuesday";
    else if (a == 3) cout<<"Wednesday";
    else if (a == 4) cout<<"Thursday";
    else if (a == 5) cout<<"Friday";
    else if (a == 6) cout<<"Saturday";
    else if (a == 7) cout<<"Sunday";
    else cout<<"Invalid Day"; */
   
    // switch case kaise use krte hai :- 

    
    switch(a){
        case 1: cout<<"Monday"; break;
        case 2: cout<<"Tuesday"; break;
        case 3: cout<<"Wednesday"; break;
        case 4: cout<<"Thursday"; break;
        case 5: cout<<"Friday"; break;
        case 6: cout<<"saturday"; break;
        case 7: cout<<"Sunday"; break;
        default: cout<<"Invalid Day";
    }
}