#include <iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    if(x>2 && x<=5){
        cout<<x+10;
    }
    else if (x>7 && x<40){
     cout<<x-100;
    }
    else if (x<0 || x>3000){
        cout<<x*3;
    }
    else {
        cout<<0;
    }
    return 0;
}
