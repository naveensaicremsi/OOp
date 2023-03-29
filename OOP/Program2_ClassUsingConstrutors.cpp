#include<iostream>
using namespace std;
/*
When an object is created always the constructor is invoked.
When we create our own constructor then the reference to  default constructor is lost.
Constructor is used to initialize the attributed inside the class
3 points to remember
i.The constructor has no return type
ii.It will have the same name of class name
iii.It should have the access specifier as Public
*/
class Employee {
    string Name;
    string Company;
    int Age;
    public:
    Employee(string name, string company,int age)
    {
        Name=name;
        Company=company;
        Age=age;
    }
    void IntroduceYourSelf()
    {
        cout<<"I am "<<Name<<" from "<<Company<<"\n My age is "<<Age<<endl;
    }
};
int main()
{
    Employee e1=Employee("Naveen","Amazon",20);
    e1.IntroduceYourSelf();
    return 0;
}