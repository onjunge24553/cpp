#include <iostream>
using namespace std;
int main(){
    int choice;
    do{
        cout<<"\n====ATM MENU====\n";
        cout<<"1. check balance\n";
        cout<<"2. withdraw money\n";
        cout<<"3. deposit money\n";
        cout<<"4. exit\n";
        cout<<"Enter your choice\n";
        cin>>choice;
        if (choice==1){
            cout<<"check balance\n";
        }
        else if(choice==2){
            cout<<"withdraw money\n";
        }
        else if(choice==3){
            cout<<"deposit money\n";
        }
        else if(choice==4){
            cout<<"exit\n";
        }
        else{
            cout<<"invalid choice!\n";
        }
        
    }while(choice!=4);
    return 0;
    
}
