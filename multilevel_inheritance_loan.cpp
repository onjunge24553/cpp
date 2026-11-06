#include <iostream>
#include <string>
using namespace std;
class customer{
protected:
    string name;
public:
    customer(string n){
        name=n;
    }
    string getname(){
        return name;
    }
    void setname(string n){
        name=n;
    }
};
class loan:public customer{
private:
    double loanamount;
    double intrestrate;

public:
    loan (string n,double l,double in):customer(n){
        loanamount=l;
        intrestrate=in;
    }
    double getloanamount(){
        return loanamount;
    }
    double getintrestrate(){
        return intrestrate;
    } 
};
class homeloan:public loan{
private:
    double prorpertyvalue;
public:
    homeloan(string n,double l,double in,double p):loan(n,l,in){
        prorpertyvalue=p;
        
    }
    double getprorpertyvalue(){
        return prorpertyvalue;
    }
    void display(){
        cout<<"Name"<<getname()<<endl;
        cout<<"Loan Amount"<<getloanamount()<<endl;
        cout<<"Intrest Rate"<<getintrestrate()<<endl;
        cout<<"Prorperty Value"<<getprorpertyvalue()<<endl;
    }
    
    
};
int main(){
    homeloan h1("Kelvin",50000,0.20,100000);
    h1.display();
    return 0;
}





