#include<iostream>
using namespace std;
class student
{
    public:
    void input()
    {
        cout<<"Enter PRN: ";
        cin>>PRN;
        cout<<"Enter name: ";
        cin>>name;
        cout<<"Enter branch: ";
        cin>>branch;
    }
    int bookname[], bookissued[], n, i;
    void issuebook(char title, char author, int id)
    {
        cout<<"Enter no. of books to be issued: "<<endl;
        cin>>n;
        if(n<10)
        {
        for(i=0;i<n;i++)
        {
            cin>>bookname[i];
            cin>>bookissued[i];
        }
        }
        else{
            cout<<"No of books exceeded."<<endl;
        }
    }
    void returnbook()
};
main()
{
    student s1, s2;
    s1.input();
    s2.input();
    library l;
    int choice;
    while(1){
    cout<<"1. Student issues a book"<<endl;
    cout<<"2. Student returns a book "<<endl;
    cout<<"3. Student reserves a book"<<endl;
    cout<<"4. Library gets a new book"<<endl;
    cout<<"0. Exit"<<endl;
    cout<<"enter your choice: "<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:

    }
}
}
