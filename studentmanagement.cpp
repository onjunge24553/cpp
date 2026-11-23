#include <iostream>
#include <string>
using namespace std;
class student{
private:
    string studentname;
    string admissionnumber;
    int feebalance;
public:
    void inputstudent(){
        cout<<"Enter students name: ";
        getline(cin,studentname);
        cout<<"Enter Admission number: ";
        cin>>admissionnumber;
        cout<<"Enter fee balance :";
        cin>>feebalance;
    }
    void makepayment(){
        double payment;
        cout<<"Enter Amount you want to pay: ";
        cin>>payment;
        
        if (payment>0){
            feebalance-=payment;
        }
        else{
            cout<<"Invalid payment";
        }


    }
    void displaystatus(){
        cout<<"\n====STUDENT DETAILS===="<<"\n";
        cout<<"Student name:"<<studentname<<"\n";
        cout<<"Student admission number: "<<admissionnumber;
        cout<<"\nFee balance: "<<feebalance;
    }
    


};

int main(){
    student s;
    s.inputstudent();
    s.makepayment();
    s.displaystatus();
    return 0;
}
