#include<iostream>
#include<stdlib.h>
using namespace std;

class Person{
    private:
        string name,address,sex;
        int age;


    public:
        void getInfo(){
            cout<<"Name of Person::"<<endl;
            cin>>name;
            cout<<"Address of Person::"<<endl;
            cin>>address;
            cout<<"Age::"<<endl;
            cin>>age;
            cout<<"Sex::"<<endl;
            cin>>sex; 
         }
        void displayInfo(){
            cout<<"Name of Person::"<<name<<endl;
            
            cout<<"Address of Person::"<<address<<endl;
            
            cout<<"Age::"<<age<<endl;
            
            cout<<"Sex::"<<sex<<endl;
            

        }

};

class Students:public Person{
    private:
        string nameOfSchool,addressOfSchool, level;
        int rollNo;

    public:
        Students(){
            getInfo();
            getStudentInfo();
            system("clear");
            displayInfo();
            displayStudentInfo();



        }

        void getStudentInfo(){
            cout<<"Name of School::"<<endl;
            cin>>nameOfSchool;
            cout<<"Address of School::"<<endl;
            cin>>addressOfSchool;
            cout<<"Level::"<<endl;
            cin>>level;
            cout<<"rollNo::"<<endl;
            cin>>rollNo; 
         }
         void displayStudentInfo(){
            cout<<"Name of School::"<<nameOfSchool<<endl;
            
            cout<<"Address of School::"<<addressOfSchool<<endl;
            
            cout<<"Level::"<<level<<endl;
            
            cout<<"Roll No::"<<rollNo<<endl;
            

        }
        





};

class TeachingStaff:public Person{
    private:
        string profession,level;
        int idNo,salary;

    public:
         TeachingStaff(){
            getInfo();
            getTeachersInfo();
            displayInfo();
            displayTeachersInfo();
        }
        void getTeachersInfo(){
            cout<<"Profession::"<<endl;
            cin>>profession;
            cout<<"Level::"<<endl;
            cin>>level;
            cout<<"Id No::"<<endl;
            cin>>idNo;
            cout<<"Salary::"<<endl;
            cin>>salary; 
         }
        
        void displayTeachersInfo(){
            cout<<"Profession::"<<profession<<endl;
            
            cout<<"Salary::"<<salary<<endl;
            
            cout<<"Level::"<<level<<endl;
            
            cout<<"Id No::"<<idNo<<endl;
            

        }

        



};

class NonTeachingStaff:public Person{
    private:
        string profession,salary;

    public:
        NonTeachingStaff(){
            getInfo();
            getNonTeachingInfo();
            displayInfo();
            displayNonTeachingInfo();
        }
        void getNonTeachingInfo(){
            cout<<"Profession::"<<endl;
            cin>>profession;
            cout<<"Salary::"<<endl;
            cin>>salary; 
         }
        void displayNonTeachingInfo(){
            cout<<"Profession::"<<profession<<endl;
            
            cout<<"Salary::"<<salary<<endl;
        }

        

};

int main(){
    Students s1;
    



    return 0;
}
