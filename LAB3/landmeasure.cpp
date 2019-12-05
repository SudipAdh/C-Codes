#include<iostream>
using namespace std;

class Landmeasure{
    private:
        int ropani,ana,paisa,dam;
    public:
        Landmeasure(){

            ropani = 0;
            ana = 0;
            paisa = 0;
            dam = 0;
        }
        Landmeasure(int a, int b , int c, int d){
            ropani = a;
            ana = b;
            paisa = c;
            dam = d;

        }
        Landmeasure Sum(Landmeasure x1,Landmeasure x2){
            Landmeasure x3;
            x3.dam = x1.dam + x2.dam;
            x3.paisa = x1.paisa + x2.paisa;
            x3.ana = x1.ana + x2.ana;
            x3.ropani = x1.ropani + x2.ropani;

            if(x3.dam>4){
                x3.paisa = x3.paisa + (x3.dam/4);
                x3.dam = x3.dam % 4;
            }
            if(x3.paisa>4){
                x3.ana = x3.ana + (x3.paisa/4);
                x3.paisa = x3.paisa % 4;
            }
            if(x3.ana>16){
                x3.ropani = x3.ropani + (x3.ana/16);
                x3.ana = x3.ana % 16;
            }

            return x3;


        }

        void show(Landmeasure o1){
            cout<<"Ropani="<<o1.ropani<<endl;
            cout<<"Ana="<<o1.ana<<endl;
            cout<<"Paisa="<<o1.paisa<<endl;
            cout<<"Dam="<<o1.dam<<endl;



        }

    
};

int main(){
    Landmeasure l1(12,3,8,32),l2(3,4,6,12),sum;

    sum = l1.Sum(l1,l2);
    l1.show(sum) ;
    return 0;
}