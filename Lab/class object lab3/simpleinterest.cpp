//WAP in C++ to calculate simple interest from given principle, time and rate. Set the rate to 15% as default argument when rate is not provided//
#include <iostream>
#include<conio.h>
using namespace std;
class SI {
    public:
    double interest
        (double principle , double time, double rate=0.15){
         return ((principle*time*rate)/100);
         
         
         
    }
};
int main()
{
    SI si;
    double p,t,r,result,choice;
    cout<<"Enter the default rate(Y=1/N=0)"<<endl;
    cin>>choice;
    if (choice==1){
    cout<<"Enter the respective value:";
    cin>>p,t,result; 
    }
    else if (choice==0)
    {
        cout<<"Enter the rate "<<endl;
        cout<<"time"<<endl;
        cout<<"principle"<<endl;
        cin>>p>>t>>r;
    }
    result=si.interest(p,t);
    cout<<"the SI is:"<<result;
    return 0;
}