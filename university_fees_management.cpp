#include <iostream>
#include <string>
using namespace std;
class student{
private:
    string name;
    string regno;
    double fees;
public:
    void setname(string n){
        name=n;
    }
    void setregno(string r){
        regno=r;
    }
    void setfees(double f){
        fees=f;
    }
    string getname(){
        return name;
    }
     string getregno(){
         return regno;
     }
    double getfees(){
         return fees;
     }
    student(string n,string r,double f){
        name=n;
        regno=r;
        fees=f;            
    }     
};
class scholarshipstudent:public student{
private:
    double scholarshipamount;
public:
    void setscholarshipamount(double s){
        scholarshipamount=s;
    }
    double getscholarshipamount(){
        return scholarshipamount;
    }
    scholarshipstudent(string n,string r,double f,double s):student(n,r,f){
        scholarshipamount=s;
    }
    double calculatebalance(){
        return getfees()-scholarshipamount;
    }
    void display(){
        cout<<"student's name="<<getname()<<"\n";
        cout<<"Registration number="<<getregno()<<"\n";
        cout<<"Fees="<<getfees()<<"\n";
        cout<<"scholarship amount="<<scholarshipamount<<"\n";
        cout<<"Remaining balance="<<calculatebalance()<<"\n";
    }    
};
int main(){
    scholarshipstudent s("kelvin","CT101/G/24553/24",50000.90,5000);
    s.display();    
   return 0;    
}
