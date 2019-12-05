#include<iostream>
using namespace std;

class check{
    private:
        string a;
        int x;
    public:
        check(){

            a = '\0';
            x = 0;  
        }
        check(string b,int y){
             a = b;
            x = y;
            
        }


        int count(check z){
            int counts=0;
            for (int i = 0 ; i < z.a.size();i++){
                counts = counts + 1;


            }
            z.x = counts;
            return z.x;
        }
};
int main()
    {
        string a = "abcdefghijklmnopqrstuvwxyz";
        int n = 10;
        check b(a,n);
        int c = b.count(b);
        cout<<c;


        
        return 0;

    }

    