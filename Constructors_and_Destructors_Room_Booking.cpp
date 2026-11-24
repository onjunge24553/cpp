#include <iostream>
#include <string>
using namespace std;
class roombooking{
private:
    string guestname;
    int roomnumber;
    int numberofdaysbooked;
public:
    roombooking(string g,int r,int num){
        guestname=g;
        roomnumber=r;
        numberofdaysbooked=num;
        cout<<"\nRoom booking confirmed\n";
    }
    void displaybooking(){
        cout<<"\n====BOOKING DETAILS====\n";
        cout<<"Guest name: "<<guestname<<endl;
        cout<<"Room number: "<<roomnumber<<endl;
        cout<<"Number of days booked: "<<numberofdaysbooked<<endl;
    }
    ~roombooking(){
        cout<<"\nBooking endend,room released";
    }
    
};


int main(){
    roombooking r("LUMUMBA MERCYLINE",10,5);
    r.displaybooking();
    
    return 0;
}
