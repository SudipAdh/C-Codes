#include<iostream>
using namespace std;

class Time{
    private:
        int hours,min,sec;

    public:
        Time(){
            hours =0;
            min = 0;
            sec = 0;
        }
        Time(int h,int m,int s){

            hours = h;
            min = m;
            sec = s;
        }

        Time Addition(Time T1,Time T2){
            Time T3;
            T3.sec = T1.sec + T2.sec;
            T3.min = T1.min + T2.min;
            T3.hours = T1.hours + T2.hours;

            if(T3.sec > 60){
                T3.min = T3.min + (T3.sec/60);
                T3.sec = (T3.sec % 60);
            }
            if(T3.min > 60){
                T3.hours = T3.hours + (T3.min/60);
                T3.min =(T3.min % 60);
            }
            
             return T3;
            
        }

        void display(Time T4){

            cout<<"Hours="<<T4.hours<<endl;
            cout<<"Minutes="<<T4.min<<endl;
            cout<<"Seconds="<<T4.sec<<endl;

        }


};

int main(){
    Time T1(2,45,57),T2(4,52,13);
    Time T3 = T1.Addition(T1,T2);
    T3.display(T3);

    return 0;
}