#include<iostream>
using namespace std;
int add(int a,int b){
    return a+b;
}
int divide(int a,int b){
    return a/b;
}
int subtract(int a,int b){
    return a-b;
}
int multiply(int a,int b){
    return a*b;
}
int main(){
    int a;
    int b;
    int answer;
    int choice;
    cout<<"Enter number a: \n";
    cin>>a;
    cout<<"Enter number b: \n";
    cin>>b;
    do{
        cout<<"====WELCOME====\n";
        cout<<"\n\n1.ADD\n";
        cout<<"2.subract\n";
        cout<<"3.divide\n";
        cout<<"4.multiply\n\n";
        cout<<"Enter choice: ";
        cin>>choice;      
        if (choice==1){
            answer=add(a,b);
            cout<<a<<"+"<<b<<"="<<answer;
        }
        else if (choice==2){
            answer=subtract(a,b);
            cout<<a<<"-"<<b<<"="<<answer;      
        }
        else if (choice==3){
            answer=divide(a,b);
            cout<<a<<"/"<<b<<"="<<answer;
        }
        else if (choice==4){
            answer=multiply(a,b);
            cout<<a<<"*"<<b<<"= "<<answer;
        }
    
        
        else {
            cout<<"Enter a valid choice\n";
        }
    

                
        
    }while(choice!=4);
    
    return 0;
}
