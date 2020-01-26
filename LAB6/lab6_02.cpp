#include<iostream>
using namespace std;

class Student{
    
        
    public:
        string name,address,profession;
        int roll;
        virtual void get_name(){
            cout<<"Enter name,address and roll no.";
            cin>>name>>address>>roll;
            profession = "NONE";
            
        }
        virtual void display(){
            cout<<name<<address<<roll<<profession;;
        }
        


};

class Engineering:public Student{
    public:
        void get_name(){
            cout<<"Enter name,address and roll no.";
            cin>>name>>address>>roll;
            profession = "Engineering";
            
            
        }
        void display(){
            cout<<name<<address<<roll<<profession;;
        }
        
        


};


class Medical:public Student{
    public:
        void get_name(){
            cout<<"Enter name,address and roll no.";
            cin>>name>>address>>roll;
            profession = "medical";
            
            
        }
        void display(){
            cout<<name<<address<<roll<<profession;;
        }


};

int main(){
    Student *er,*me;
    Engineering e;
    Medical m;

    er = &e;
    me = &m;

    er ->get_name();
    er ->display();
    me ->get_name();
    me ->display();

    

    return 0;
}