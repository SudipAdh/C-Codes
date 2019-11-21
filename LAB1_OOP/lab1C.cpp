#include<iostream>
using namespace std;

namespace convert{
    float num;
    int calculation(float &meter){
        return meter * 100;
    }
}

int main(){
    cout<<"Enter length in Meter=";
    cin>>convert::num;
    float x = convert::calculation(convert::num);
    cout<<"Length in Centimeter="<<x<<"\n";



    return 0;
}