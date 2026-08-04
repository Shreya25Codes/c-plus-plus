#include <iostream>
using namespace std;

int main() {
    string name;
    string address;
    float amount,final_amount;
    char purchase_type;
    cout<<"Enter name:";
    getline(cin,name);
    cout<<"Enter Address:";
    getline(cin,address);
    cout<<"Enter amount of purchase:";
    cin>>amount;
    cout<<"1. Enter L for Laptop."<<endl;
    cout<<"2. Enter D for Desktop."<<endl;
    cout<<"Enter choice:";
    cin>>purchase_type;
    switch(purchase_type)
    {
        case 'l':
        case 'L':if(amount<=25000)
                 {
                    final_amount=amount;
                 }
                 else if(amount>25000 && amount<=57000)
                 {
                    final_amount=amount-(amount*0.05);
                 }
                 else if(amount>57000 && amount<=100000)
                 {
                    final_amount=amount-(amount*0.075);
                 }
                 else if(amount>100000)
                 {
                    final_amount=amount-(amount*0.10);
                 }
          
                 cout<<"Name:"<<name<<endl;
                 cout<<"Address:"<<address<<endl;
                 cout<<"Final amount of purchase:"<<final_amount;
                 break;

        case 'd':
        case 'D':if(amount<=25000)
                 {
                    final_amount=amount-(amount*0.05);
                 }
                 else if(amount>25000 && amount<=57000)
                 {
                    final_amount=amount-(amount*0.076);
                 }
                 else if(amount>57000 && amount<=100000)
                 {
                    final_amount=amount-(amount*0.1);
                 }
                 else if(amount>100000)
                 {
                    final_amount=amount-(amount*0.15);
                 }
                 cout<<"Name:"<<name<<endl;
                 cout<<"Address:"<<address<<endl;
                 cout<<"Final amount of purchase:"<<final_amount;
                 break;

        default:
        {
            cout<<"Enter valid choice.";
        }
    }
    return 0;
} 
