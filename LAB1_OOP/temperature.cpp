#include<iostream>
using namespace std;

class Fh;
class Cls{
    private:
        float fh_value;
    public:
        Cls(){
            fh_value = 0.0;
        }
        Cls(float x){
            fh_value = x;
        }
        float convert(){
            float new_temp_in_cls;
            new_temp_in_cls = ((fh_value -32)/90)*50;
            return new_temp_in_cls;
            }
        void show(float y){
            cout<<"Temp in Farenheit="<<fh_value<<"F"<<endl;
            cout<<"Temp in Celsius="<<y<<"C"<<endl;



        }
};
class Fh{
    private:
        float cls_value;
    public:
        Fh(){
            cls_value = 0.0;
        }
        Fh(float x){
            cls_value = x;
        }
        float convert(){
            float new_temp_in_fh;
            new_temp_in_fh = (((cls_value*18)/10)+32);
            return new_temp_in_fh;
            }
        void show(float y){
            cout<<"Temp in Celsius="<<cls_value<<"C"<<endl;
            cout<<"Temp in Farenhiet="<<y<<"F"<<endl;



        }
};
int main(){
    Cls c1(98);
    Fh fh1(37);

    float b = c1.convert();
    float c = fh1.convert();

    c1.show(b);
    fh1.show(c);



    return 0;
}