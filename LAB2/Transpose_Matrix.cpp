#include<iostream>
using namespace std;

class Transpose{
    private:
        int a[2][2],i,j;
    public:
        Transpose(){
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    a[i][j] = 0;
                }
            }


        }
        Transpose(int b[2][2]){
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    a[i][j] = b[i][j];
                }
            }
            
        }

        Transpose change(Transpose z){
            Transpose x;
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    x.a[i][j] = z.a[j][i];
                }
            }
            return x;
        }

        void display(Transpose F){
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    cout<<a[i][j]<<"\t";
                }
                cout<<endl;
            }

            cout<<endl;
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    cout<<F.a[i][j]<<"\t";
                }
                cout<<endl;
            }
        } 
        /*void display(){
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    cout<<a[i][j];
                }
                cout<<endl;
            }
        } */
                
        





};

int main(){
    
    int a[2][2],i,j;
    for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cin>>a[i][j]; 
            }
            cout<<endl;
    }
    Transpose a1(a);
    Transpose F = a1.change(a1);
    a1.display(F);
    



    return 0;
}
