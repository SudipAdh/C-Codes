#include<iostream>
using namespace std;

class check{
    private:
        char a[100];
        int x;
    public:
        check(){

            
            x = 0;  
        }
        check(char b[],int y){
            for (int i=0; b[i]!='\0';i++){
                a[i] = b[i];
            }
            x = y;
            
        }


        int count(check z){
            int counts=0;
            for (int i = 0 ; z.a[i] != '\0';i++){
                counts = counts + 1;


            }
            z.x = counts;
            return z.x;
        }
};
int main()
    {
        char a[] = "abcdefghijklmnopqrstuvwxyz";
        int n = 10;
        check b(a,n);
        int c = b.count(b);
        cout<<c;


        
        return 0;

    }

    