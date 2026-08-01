#include <iostream>
#include<string>
using namespace std;
struct book
{
    string name_book;
    string name_author;
    int id;
    float price;
};

int main() {
    int n;
    cout<<"Enter no. of books:";
    cin>> n;
    book b[n];
    for(int i=0; i<n ; i++)
    {
        cout<<"Enter name of book:";
        getline(cin>>ws,b[i].name_book);
        cout<<"Enter name of author:";
        getline(cin>>ws,b[i].name_author);
        cout<<"Enter ID:";
        cin>>b[i].id;
        cout<<"Enter price:";
        cin>>b[i].price;
    }
    for(int i=0; i<n ; i++)
    {
        cout<<"Name of book:"<<b[i].name_book<<endl;
        cout<<"Name of author:"<<b[i].name_author<<endl;
        cout<<"ID:"<<b[i].id<<endl;
        cout<<"Price:"<<b[i].price<<endl;
    }
    return 0;
}
