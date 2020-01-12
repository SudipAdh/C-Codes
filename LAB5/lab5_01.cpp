#include<iostream>
#include<math.h>
using namespace std;

class Rectangle{
    friend class Polar;
    private:
        float x,y;

    public:
        Rectangle(){
            x = 0.0;
            y = 0.0;
        }
        Rectangle(float x , float y){
            x = x;
            y = y;

        }


};

class Polar{
    private:
        double distance,angle;
    public:
        Polar(){
            distance = 0.0;
            angle = 0.0;
        }
        Polar (Rectangle R){
            const double changer = 180.0/3.141593;
            distance = sqrt((R.x)*(R.x)+(R.y)*(R.y));
            angle = atan(R.y/R.x) * changer;

        }

        void show(){
            cout<<"Distance="<<distance;
            cout<<"Angle="<<angle;
        }

        
        

};

int main(){
    Rectangle R(20,30);
    

    Polar p(R);


    return 0;
}