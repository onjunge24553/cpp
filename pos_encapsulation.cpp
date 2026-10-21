#include <iostream>
#include <string>
using namespace std;
class product{
private:
    int productid;
    string productname;
    double price;
    int quantity;
public:
    product(int id,string n,double p,int q){
        productid=id;
        productname=n;
        price=p;
        quantity=q;               
    }
    int getproductid(){
        return productid;
    }
    string getproductname(){
        return productname;
    }
    double getprice(){
        return price;
    }
    int getquantity(){
        return quantity;
    }
    void display(){
        cout<<"\n======PRODUCT DETAILS======\n";
        cout<<"PRODUCT ID="<<productid<<"\n";
        cout<<"PRODUCT NAME="<<productname<<"\n";
        cout<<"PRICE="<<price<<"\n";
        cout<<"QUANTITY="<<quantity<<"\n";       
    }  
};
class pos{
private:
    string cashiername;
    double totalamount;
    double amountpaid;
    double balance;
public:
    pos(string c){
        cashiername=c;
        totalamount=0;
        amountpaid=0;
        balance=0;  
    }
    double calculatetotal(product p){
        return p.getprice()*p.getquantity();
    }
    void addproduct(product p){
        totalamount+=calculatetotal(p);
    }
    void enterpayment(){
        cout<<"\nEnter amount paid :\n";
        cin>>amountpaid;
        
    }
    void paymentprocess(){
        if(amountpaid>=totalamount){
           balance=amountpaid-totalamount; 
        }
        else{
            cout<<"insufficient funds!\n";
            cout<<"plz pay=ksh "<<totalamount-amountpaid<<"\n";
        }
    }
    void displayreciept(){
        if(amountpaid>=totalamount){
            cout<<"\n======RECIEPT======\n";
            cout<<"Cashier name: "<<cashiername<<"\n";
            cout<<"totalamount: "<<totalamount<<"\n";
            cout<<"amountpaid: "<<amountpaid<<"\n";
            cout<<"balance: "<<balance<<"\n";
            cout<<"===============================\n";
            cout<<"Thankyou for shopping with us....";              
        }
        else{
            cout<<"payment is incomplete\n";
        }
    }
        
        
    
};
int main(){
    double amountpaid;
    product p1(001,"laptop",22000.90,3);
    product p2(002,"phone",10000.90,2);
    product p3(003,"ssd",3443.90,1);
    
    p1.display();
    p2.display();
    p3.display();
    pos c1("lavin");
    c1.addproduct(p1);
    c1.addproduct(p2);
    c1.addproduct(p3);
    c1.enterpayment();
    c1.paymentprocess();
    c1.displayreciept();
    
    
    
    

    return 0;
}





