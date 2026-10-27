#include <iostream>
#include <string>
using namespace std;
class employee{
private:
    string name;
    double salary;
public:
    employee(string n,double s){
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
        cout<<"Employee's Name: "<<name<<endl;
        cout<<"Employee's Salary: "<<salary<<endl;
    }
    
};
class manager:public employee{
private:
    double bonus;
public:
    manager(string n,double s,double b):employee(n,s){
        bonus=b;
    }
    void display() override{
        cout<<"\n=====MANAGER===="<<endl;
        cout<<" Name: "<<getname()<<endl;
        cout<<"Salary: "<<getsalary()<<endl;
        cout<<"Bonus: "<<bonus<<endl;
        cout<<"Total Earnings: "<<bonus+getsalary()<<endl;
    }
    
};
class programmer:public employee{
private:
    double overtimepay;
public:
    programmer(string n,double s,double ov):employee(n,s){
        overtimepay=ov;
    }
    void display() override{
        cout<<"\n======PROGRAMMER======\n";
        cout<<"programmer's Name: "<<getname()<<endl;
        cout<<"Salary: "<<getsalary()<<endl;
        cout<<"overtimepay: "<<overtimepay<<endl;
        cout<<"Total Earnings: "<<overtimepay+getsalary()<<endl;
    }
    
};

int main(){
    manager m("mary",50000,10000);
    programmer p("john",40000,5000);
    employee* ptr=&m;
    (*ptr).display();
    ptr=&p;
    (*ptr).display();

    return 0;
}
