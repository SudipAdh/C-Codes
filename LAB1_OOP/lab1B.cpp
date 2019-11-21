#include<iostream>
using namespace std;

void cube(int num)
    {
        cout<<"Cube ="<<(num*num*num);
    }
void cube(float num)
    {
        cout<<"Cube ="<<(num*num*num);
    }
void cube(double num)
    {
        cout<<"Cube ="<<(num*num*num);
    }
int main(){
    int a;
    float b;
    double c;

    cout<<"Enter an integer number:";
    cin>>a;
    cout<<"Enter an float number:";
    cin>>b;
    cout<<"Enter an double floating number:";
    cin>>c;
    cube(a);
    cout<<"\n";
    cube(b);
    cout<<"\n";
    cube(c);
    cout<<"\n";


    return 0;
}


