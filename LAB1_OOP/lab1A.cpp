#include<iostream>
using namespace std;

namespace Square{
    int num;
    void fun(int x){

    cout<< x*x;

    }
}
namespace Cube{
    int num;
    void fun(int x){

    cout<<x*x*x;

    }
}
int main(){
    cout<<"Enter the number to get its square::";
    cin>>Square::num;
    cout<<"Enter the number to get its cube::";
    cin>>Cube::num;
    Square::fun(Cube::num);
    cout<<"\n";
    Cube::fun(Square::num);
    cout<<'\n';



    return 0;
}
