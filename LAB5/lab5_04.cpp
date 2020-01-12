#include<iostream>
#include<stdlib.h>
using namespace std;

class Student{
    

       

    public:
        string name,level;
        int rollNo;
        void getInfo(){
            cout<<"Name of Student::"<<endl;
            cin>>name;
            cout<<"Level::"<<endl;
            cin>>level;
            cout<<"rollNo::"<<endl;
            cin>>rollNo;
        }
        void displayInfo(){
            cout<<"Name of Student::"<<name<<endl;
            
            cout<<"Level::"<<level<<endl;
            
            cout<<"rollNo::"<<rollNo<<endl;
            
        }

        



};

class Test:public Student{
    
        

    public:
        float science,english,nepali;
        void getmarks(){
            cout<<"Enter marks in science"<<endl;
            cin>>science;
            cout<<"Enter marks in english"<<endl;
            cin>>english;
            cout<<"Enter marks in Nepali"<<endl;
            cin>>nepali;

        }

        void displaymarks(){
            cout<<"marks in science::"<<science<<endl;
            
            cout<<"marks in english::"<<english<<endl;
            
            cout<<"marks in Nepali::"<<nepali<<endl;
            

        }


};

class ResultOfStudent:public Test{
    
        

    public:
     ResultOfStudent(){
        getInfo();
        getmarks();
        float total = science + english + nepali;
        float percentage = (total /300) * 100;

        system("clear");

        displayInfo();
        displaymarks();
        cout<<"Total= "<<total<<endl;
        cout<<"Percentage="<<percentage;
     
     
     }




};

int main(){
    ResultOfStudent s1;


    return 0;
}

