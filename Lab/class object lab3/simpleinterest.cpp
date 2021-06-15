//WAP in C++ to calculate simple interest from given principle, time and rate. Set the rate to 15% as default argument when rate is not provided//
#include <iostream>
#include<conio.h>
using namespace std;
class SI {
    public:
    double interest
        (double principle , double time, double rate=2){
         return ((principle*time*rate)/100);
         
         
         
    }
};
int main()
{
    SI si;
    double p,t,result;
    cout<<"Enter the respective value";
    cin>>p>>t;
    result=si.interest(p,t);
    cout<<"the SI is:"<<result;
    return 0;
}
 