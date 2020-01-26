#include<iostream>
using namespace std;

class Polygon{
    
        
    public:
        int length,breadth;
        Polygon(){
            length = 0;
            breadth = 0;
        }
        Polygon(int a,int b){
            length = a;
            breadth = b;
        }
        virtual void area(){
            cout<<"You missed vitrual keyword or You just wanted to print area of polygon!";
            
        }

};

class Rect:public Polygon{

    public:
        Rect(){
            length = 0;
            breadth = 0;
        }
        Rect(int a,int b){
            length = a;
            breadth = b;
        }
        void area(){
            int areas = length * breadth;
            cout<<"Area of rectangle is :"<<areas;
            

        }
    

};

class Tri:public Polygon{
    public:
        Tri(){
            length = 0;
            breadth = 0;
        }
        Tri(int a,int b){
            length = a;
            breadth = b;
        }
        void area(){
            int areas = 0.5 * (length * breadth);
            cout<<"Area of rectangle is :"<<areas;
            

        }

};

int main(){
    Polygon *r,*t;
    Rect re(2,2);
    Tri tr(2,2);

    r = &re;
    t = &tr;

    r->area();
    t->area();





    return 0;
    
}

