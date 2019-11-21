#include<iostream>
using namespace std;


float A(float a,float b,float c=0){
        float s = (a+b+c)/2;
        return (s*(s-a)*(s-b)*(s-c));
    }
float A(float x,float y=3.4){
         float s = x*y;
         return s;
        
    }

int main(){
    float area = A(1.9,2.2,3.2);
    float area_rect = A(1.9);


    cout<<"Area Of triangle="<<area;
    cout<<"Area Of rectangle="<<area_rect;
    return 0;



}