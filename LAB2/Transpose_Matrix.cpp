#include<iostream>
using namespace std;

class Transpose{
    private:
        int a[2][2],b[2][2],i,j;
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

        void change(){
            
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    b[i][j] = a[j][i];
                }

        

            



        }
        }

        void display(){
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    cout<<a[i][j]<<"\t";
                }
                cout<<endl;
            }

            cout<<endl;
            for(i=0;i<2;i++){
                for(j=0;j<2;j++){
                    cout<<b[i][j]<<"\t";
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
    
    int a[2][2],b[2][2],i,j;
    for(i=0;i<2;i++){
            for(j=0;j<2;j++){
                cin>>a[i][j]; 
            }
            cout<<endl;
    }
    Transpose a1(a);
    a1.change();
    a1.display();
    



    return 0;
}