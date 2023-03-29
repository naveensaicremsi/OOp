#include<iostream>
using namespace std;

class Employee{
  string Name;
  string Company;
  int Age;
  public:
  Employee(string name, string company,int age) 
  {
    Name = name;
    Age = age;
    Company=company;
  }
  string getName()
  {
    return Name;
  }
  void setName(string name)
  {
    Name=name;
  }
  string getCompany()
  {
    return Company;
  }
  void setCompany(string company)
  {
    Company = company;
  }
  int getAge()
  {
    return Age;
  }
  void setAge(int age)
  {
    Age = age;
  }
    void IntroduceYourSelf()
    {
        cout<<"I am "<<Name<<" from "<<Company<<"\n My age is "<<Age<<endl;
    }
};
int main()
{
    Employee e1=Employee("Naveen","Amazon",21);
    Employee e2("Vinay","Flipkart",30);
    e1.setName("Naveen Sai Cremsi");
    cout<<e1.getName()<<endl;
    cout<<e1.getCompany()<<endl;
    cout<<e1.getAge()<<endl;
    e1.IntroduceYourSelf();
    return 0;
}