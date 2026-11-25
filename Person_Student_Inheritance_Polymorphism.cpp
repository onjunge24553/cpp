#include <iostream>
#include <string>
using namespace std;
class person{
private:
    string name;
    int age;
public:
    person(string n,int a){
        name=n;
        age=a;
    }
    string getname(){
        return name;
    }
    int getage(){
        return age;
    }
   virtual void displayperson(){
       cout<<"\nName: "<<name;
       cout<<"\nAge: "<<age;
   }
};
class student:public person{
private:
    string admissionnumber;
    int yearofstudy;
public:
    student(string n,int a,string ad,int y):person(n,a){
        admissionnumber=ad;
        yearofstudy=y;
        
    }
    void displayperson() override{
        cout<<"====STUDENTS DETAILS====";
        person::displayperson();
        
        cout<<"\nAdmission number: "<<admissionnumber;
        cout<<"\nClass: "<<yearofstudy;
    }
    
};
int main(){
    student s("Agnes Njeri",20,"CT101/G/24553/24",4);
    s.displayperson();
    return 0;
}
