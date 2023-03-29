#include<iostream>
using namespace std;

/*
There are 3 types of access specifiers -> Public,Private,Protected.
By default the members of the class are private.
Private members are hidden inside the class they are not accessible from outside the class.
Public members can be accessed outside the class as well.
Protected members are in between to public and private.
*/
class Employee
{
    public:
    string Name;
    string Company;
    int Age;
    void IntroduceYourSelf()
    {
        cout<<"I am "<<Name<<" from "<<Company<<"\n My age is "<<Age<<endl;
    }
};

int main()
{
    Employee e1; 
    e1.Name = "Naveen";
    e1.Company = "Amazon";
    e1.Age =21;
    e1.IntroduceYourSelf();
    return 0;
}
/*
At the end of the class ; must be there 
Class is a user defined datatype.
Class is the blueprint for objects.
Object is the instance of the class.
The members of the class are accessed by the . operator .
*/