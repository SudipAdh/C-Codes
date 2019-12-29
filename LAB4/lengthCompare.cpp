#include<iostream>
using namespace std;

class Compare{
    private:
        int m,cm;

    public:
        Compare(){
                m =0;
                cm = 0;
                
            }
        Compare(int a,int b){

            m = a;
            cm = b;
            
        }

        bool operator==(Compare x){
            if (m==x.m && cm == x.cm){
                return true;
            }
            else{
                return false;
            }

        }
        bool operator<=(Compare x){

            if (m>x.m){
                return true;
            }
            else if (m<x.m)
            {
                return false;
            }
            else{
                if(cm>x.cm){
                    return true;
                }
                else if (cm<x.cm)
                {
                    return false;
                }

                
            }
        }


};

int main(){
    Compare C1(12,50),C2(12,50);
    if(C1==C2){
        cout<<"Both lengths are equal";

    }
    else if (C1<=C2){
        cout<<"FIRST length is GREATER than SECOND";
    }
    else{
        cout<<"SECOND length is GREATER than first";
    }


    return 0;
}