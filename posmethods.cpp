#include<iostream>
#include<string>
using namespace std;
class product{
public:
    string productname;
    double price;
    int quantity;
    product(string p,double pr,int q){
        productname=p;
        price=pr;
        quantity=q;
    }
    double calculatecost(){
        return price*quantity;
        
    }
    void displayreciept(){
        cout<<"==========POS RECIEPT==============\n";
        cout<<"products name= "<<productname<<"\n";
        cout<<"Price per item= "<<price<<"\n";
        cout<<"Quantity purchased= "<<quantity<<"\n";
        cout<<"Total cost= "<<calculatecost()<<"\n";
        cout<<"=====================================";
        
    }
    
    
};
int main(){
    double totalcost;
    product s("HP laptop",20000.90,23);
    s.calculatecost();
    s.displayreciept();
    return 0;
}
