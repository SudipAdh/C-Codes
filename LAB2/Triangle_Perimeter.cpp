#include<iostream>
using namespace std;

class Triangle{
    private:
        float a,b,c;

    public:
        Triangle(){
            a = 30.5;
            b = 23.6;
            c = 19.2;
        }
        Triangle(float x,float y,float z){
            a = x;
            b = y;
            c = z;

        }
        float Perimeter(){
            float peri = (a + b + c );
            return peri;
            
        }


};

int main(){

    Triangle T1;
    Triangle T2(12.0,19.2,23.4);
    float peri_default = T1.Perimeter();
    float peri_parameterized = T2.Perimeter();
    cout<<"Defafult  value of perimeter is :"<<peri_default<<endl;
    cout<<"Parameterized value of perimeter is :"<<peri_parameterized<<endl;



    return 0;
}