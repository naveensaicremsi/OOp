#include<iostream>
using namespace std;

/*
Inheritance - There will be two classes named base class and child class the child class has the properties of base class as well as the propertied associated with it.
By default the default specifier is private in inheritance means the are not accessible out side the derived class to get access outside the derived class we use public access specifier
If the derived class also have the constrictor then it should contain the properties of base class as well as the derived class properties inside the derived class constructor.
*/
class Employee{
    public:
    string Name;
    string Company;
    int Age;
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
    void AskForPromotion()
    {
        if(Age>30)
        {
            cout<<Name<<" is eligible for promotion"<<endl;
        }
        else
        {
            cout<<"Sorry, "<<Name<<" is not eligible for promotion"<<endl;
        }
    }
};

class Developer:public Employee{
    public:
    string FavProgrammingLanguage;
    Developer(string name, string company,int age,string favProgrammingLanguage)
    :Employee(name, company, age)
    {
        FavProgrammingLanguage=favProgrammingLanguage;
    }
    void Language()
    {
        cout<<FavProgrammingLanguage<<endl;
    }
};

int main()
{
    Developer d=Developer("Naveen","Amazon",21,"C++");
    d.IntroduceYourSelf();
    d.AskForPromotion();
    d.Language();
    return 0;
}