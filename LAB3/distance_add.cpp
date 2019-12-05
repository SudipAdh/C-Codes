#include<iostream>
using namespace std;

class length2;
class length1{
    private:
        int metre,centimetre;

    public:
        length1(){
            metre = 0;
            centimetre = 0;

        }
        length1(int a, int b){
            metre = a;
            centimetre = b;

        }
        friend int add(length1 x,length2 y);

};
class length2{
    private:
        int feet,inches;

    public:
        length2(){
            feet = 0;
            inches = 0;

        }
        length2(int a, int b){
            feet = a;
            inches = b;

        }
        friend int add(length1 x,length2 y);
        
};

int add(length1 x, length2 y){
    float total_length;
    total_length = (x.metre+(x.centimetre/100)+(y.feet*0.3048 )+(y.inches * 0.0254));
    return total_length;

    
}

int main(){
    length1 A(2,400);length2 B(200,300);
    float c = add(A,B);
    cout<<"Total length in meter = "<<c;
    return 0;
}