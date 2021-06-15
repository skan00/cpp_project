//WAP to define a class named employee with it's data members ID,Name and Salary. Read records of five employees and display the record in tabular form [Hint- to make the data display in tabular form, use "/t"(escape sequence) for line spaces]//

#include <iostream>
using namespace std;
class employee
{
    private:
    char name[30];
    int id,salary;
    public:
    void input()
    {
        cout<<"enter the name";
        cin>>name;
        cout<<"enter id";
        cin>>id;
        cout<<"salary";
        cin>>salary;

    }
    void display()
    {
        cout<<"name"<<endl;
        cout<<"id"<<endl;
        cout<<"salary"<<endl;

    }
};
int main()
{
    employee E[5];
    for(int i=0;i<5;i++)
    {
        E[i].input();
    }
    for(int i=0;i<5;i++)
    {
        E[i].display();

    }
    return 0;

}    