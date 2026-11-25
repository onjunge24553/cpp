#include <iostream>
#include <string>
using namespace std;
class vehicle{
private:
    string brand;
    int yearofmanufucture;
public:
    vehicle(string b,int y){
        brand=b;
        yearofmanufucture=y;
    }
    virtual void displayvehicle(){
        cout<<"\nBrand: "<<brand<<endl;
        cout<<"Year of manufucture: "<<yearofmanufucture;
    }
    
};
class car:public vehicle{
private:
    int numberofdoors;
    string enginecapacity;
public:
    car(string b,int y,int d,string e):vehicle(b,y){
        numberofdoors=d;
        enginecapacity=e;
    }
    void displayvehicle() override{
        cout<<"====CAR DETAILS====";
        vehicle::displayvehicle();
        cout<<"\nNumber of doors: "<<numberofdoors;
        cout<<"\nEngine capacity: "<<enginecapacity;
    }
};


int main(){
    car c("MAZDA DEMIO",2004,4,"1000CC");
    c.displayvehicle();
    return 0;
}
