#include<iostream>
using namespace std;

class Time{
    private:
        int h,m,s;

    public:
        Time(){
            h = 0;
            m = 0;
            s = 0;
        }
        Time(int a ,int b , int c){
            h = a;
            m = b;
            s = c;
        }

        Time operator+(Time x){
            Time r;
            r.h = h + x.h;
            r.m = m + x.m;
            r.s = s + x.s;

            if(r.s >= 60){
                r.m = r.m + (r.s/60);
                r.s = (r.s % 60);
            }
            if(r.m >= 60){
                r.h = r.h + (r.m/60);
                r.m =(r.m % 60);
            }

            return r;

        }

        bool operator==(Time x){
            if (h==x.h && m == x.m && s == x.s){
                return true;
            }
            else{
                return false;
            }
            

            


        }
        bool operator<(Time x){
            if (h>x.h){
                return true;
            }
            else if (h<x.h)
            {
                return false;
            }
            else{
                if(m>x.m){
                    return true;
                }
                else if (m<x.m)
                {
                    return false;
                }
                else{
                    if(s>x.s?true:false);
                    
                    
                }
                
            }
            
            

            
        }
        void showAddition(Time T){

            cout<<"Hours::"<<T.h;
            cout<<"Minutes::"<<T.m;
            cout<<"Seconds::"<<T.s;
            cout<<endl;

        }




};

int main(){
    Time T1(7,56,40),T2(7,46,40);

    Time T = T1 + T2;

    T.showAddition(T);

    if (T1==T2){
        cout<<"Both time are equal";
        cout<<endl;
    }
   else{ 
       if(T1<T2){
        cout<<"Second Time is less than First Time";
        }
        else{
        cout<<"First Time is less than Second Time";
        }
   }



    

    return 0;
}
