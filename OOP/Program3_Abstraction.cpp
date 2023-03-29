/*
Abstraction - Hiding the complex things in the procedure so that it looks simple.
What is abstract class
Abstract class has the methods declared in it but their definition lies in derived class.
virtual states that if the same function is defined in the derived class please use that implementation.
*/
#include<iostream>
using namespace std;

class Abstraction_class{
   public:
   virtual void AskForPromotion()=0;
};
class Employee:Abstraction_class {
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
int main()
{
    Employee e1("Naveen","Amazon",32);
    Employee e2("Vinay","Flipkart",30);
    e1.AskForPromotion();
    e2.AskForPromotion();
}