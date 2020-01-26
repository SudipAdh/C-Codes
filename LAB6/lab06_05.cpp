#include<iostream>
using namespace std;




bool checker_year(int a){
    if (a>2020)
    {
        throw "Enter year in range";
    }
    else{
        return true;
    }
}
bool checker_month(int a){
    if (a>12)
    {
        throw "Enter month in range";
    }
    else{
        return true;
    }
}
bool checker_day(int a){
    if (a>30)
    {
        throw "Enter day in range";
    }
    else{
        return true;
    }
}

int main(){
        cout<<"enter year month and day";
        int y,m,d;

        cin>>y>>m>>d;
        
        try
        {
           if(checker_year(y)==true && checker_month(m)==true && checker_day(d) ==true){
               cout<<y<<"/"<<m<<"/"<<d;
           }

        }
        catch(const char*msg){
            cerr<<msg;
        
        }
        

        return 0;
}