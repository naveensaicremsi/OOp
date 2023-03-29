/*
In the term polymorphism -> poly means many morph means forms so the term polymorphism means many forms.
The main use of the polymorphism is the base class object can be referred to a child class  object.
If the same function is defined in the base class as well as derived class the derived class method overrides the base classes method.
*/
#include<iostream>
using namespace std;
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
    void Work(){
        cout<<Name<<" do typing, painting , editing, sleeping"<<endl;
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
    void Work()
    {
        cout<<Name<<" fixes bugs using "<<FavProgrammingLanguage<<endl;
    }
};

class Teacher:public Employee{
    public:
    string Subject;
    Teacher(string name, string company,int age,string subject)
    :Employee(name,company,age)
    {
        Subject=subject;
    }
    void Work()
    {
        cout<<Name<<" teaches "<<Subject<<endl;
    }
};
int main()
{
    Employee e1=Employee("vamc","seeds",22);
    Developer d1=Developer("Naveen","Amazon",21,"C++");
    Teacher t1=Teacher("Sai","Loyola",35,"Maths");
    e1.Work();
    d1.Work();
    t1.Work();
    return 0;
}