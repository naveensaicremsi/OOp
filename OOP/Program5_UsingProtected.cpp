#include<iostream>
using namespace std;

/*
The term protected is used in the base class so that whatever the members inside the base class that are defined with protected key word can be private to both the base class and the
derived class.
if it is public then they are public to both the classes .
This is the definition of protected keyword.
*/
class Employee{
    protected:
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
    string sample()
    {
        return Name;
    }
};
int main()
{
    Developer d=Developer("Naveen","Amazon",21,"C++");
    d.IntroduceYourSelf();
    d.AskForPromotion();
    d.Language();
    cout<<d.sample()<<endl;
    return 0;
}