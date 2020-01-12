#include<iostream>

using namespace std;

class Person{

    protected:
        string name;
        string address;

    public:
        void getNameAddress(){
            cout<<"Enter Name of Employee"<<endl;
            cin>>name;
            cout<<"Enter Address"<<endl;
            cin>>address;

        }
        void display_general(){

            cout<<"Name="<<name<<endl;
            cout<<"Address="<<address<<endl;
        }

};

class Employe:public Person{
    protected:
        string companyName;
        string post;
        int idNo;

    public:
        void getCompanyNamePostidNo(){
            cout<<"Enter Name of Company"<<endl;
            cin>>companyName;
            cout<<"Enter Post"<<endl;
            cin>>post;
            cout<<"Enter employe id no"<<endl;
            cin>>idNo;
        }
        void display_employe(){
            cout<<"Company Name="<<companyName<<endl;
            cout<<"Post="<<post<<endl;
            cout<<"Employee Id No = "<<idNo<<endl;
        }
};

class Manager:public Employe{
    protected:
        int salary;
        string branch;

    public:
        Manager(){
            getNameAddress();
            getCompanyNamePostidNo();
            get_salary_branch();
            display_manager();

        
        
        }
        void get_salary_branch(){
            cout<<"enter the salary "<<endl;
            cin>>salary;
            cout<<"enter branch "<<endl;
            cin>>branch;


        }
        void display_manager(){
            
            display_general();
            display_employe();
            cout<<"Salary="<<salary<<endl;
            cout<<"branch="<<branch<<endl;

        }

};

int main(){
    Manager M1,M2;
    

    return 0;

}