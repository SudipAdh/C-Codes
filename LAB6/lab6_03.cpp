#include<iostream>
#include<math.h>
using namespace std;

double root(int x){
   if (x==0){
       throw "zero can't be square rooted";
   }
   else{
       return sqrt(x);
   }

}

int main(){
    cout<<"enter a number to be square rooted";
    int a;
    cin>>a;
    try
    {
        int z = root(a);
        cout<<"Root is ="<<z;


    }
    catch(const char*msg)
    {
        cerr<<msg;
    }
    
    

    return 0;
}