//WAP to define a class in C++ as shown : class name - Student attributes - name, roll, address, percentage methods - input(), display()//

#include <iostream>
using namespace std;
class student
{
    
    
    
    public:
    char name[30];
    int roll;
    char address[20];
    double perc;
    void input() 
    {
        cout<<"enter total number of students:";
        cin>>name;
        cout<<"enter roll no:";
        cin>>roll;
        cout<<"enter the address:";
        cin>>address;
        cout<<"percentage";
        cin>>perc;

    }
    void display()
    {
        if (perc>45)
        {
            cout<<"you are abhove 45"<<endl;
            cout<<"name"<<name<<endl;
            cout<<"roll no"<<roll<<endl;
            cout<<"percentage"<<perc<<endl;
    
        }
        else{
            cout<<"sorry you are below 45";
        }
    }



};
int main()
{
student s1;
s1.input();
s1.display();
return 0;
}