#include <iostream>
#include <string>
using namespace std;
class employee{
private:
  string name;
  double salary;
public:
  employee (string n,double s){
    name=n;
    salary=s;
  }
  string getname(){
    return name;
  }
  double getsalary(){
    return salary;
  }
  virtual void display(){
    cout<<"======EMPLOYEE DETAILS======";
    cout<<"\nName: "<<name;
    cout<<"\nSalary: "<<salary;
  }
  
};
class manager:public employee{
private:
  double bonus;
public:
  manager (string n,double s,double b):employee(n,s){
    bonus=b;
  }
  double getbonus(){
    return bonus;
  }
  void display() override{
    cout<<"\n\n======MANAGER DETAILS======";
    cout<<"\nName: "<<getname();
    cout<<"\nSalary: "<<getsalary();
    cout<<"\nbonus: "<<getbonus();
    cout<<"\nTotal Earnings: "<<getbonus()+getsalary();
  }
};
int main(){
  employee e("John",40000.00);
  manager m("mary",60000.00,15000.00);
  e.display();
  m.display();
  return 0;
}


