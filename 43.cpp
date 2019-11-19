#include <iostream>
using namespace std;
int main()
{
    int m;
    cin>>m;
    if(m>2 && m<6){
        cout<<"Spring";
    }
    else if (m>5 && m<9){
     cout<<"Summer";
    }
    else if (m>8 && m<12){
        cout<<"AUtumn";
    }
    else if(m==12 || m==1 || m==2){
        cout<<"Winter";
    }
    else {
        cout<<"ERROR";
    }
    return 0;
}
