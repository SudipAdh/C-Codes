#include<iostream>
using namespace std;

class Matrix{
    private:
    int a[3][3][3];

    public:
        Matrix(){
            int i,j,k;
            for (i=0;i<=2;i++){
                for(j=0;j<=2;j++){
                    for(k=0;k<=2;k++){
                        a[i][j][k] = 0;
                    }

                }
                
            }
        }
        Matrix(int x[3][3][3]){
            
            int i,j,k;
            for (i=0;i<=2;i++){
                for(j=0;j<=2;j++){
                    for(k=0;k<=2;k++){
                        a[i][j][k] = x[i][j][k];
                        
                    }

                }
                
            }
            

        }

        Matrix operator*(Matrix x){
            Matrix  R;

            int i,j,k;
            for (i=0;i<=2;i++){
                for(j=0;j<=2;j++){
                    for(k=0;k<=2;k++){
                        R.a[i][j] = R.a[i][j] + (a[i][k] * x.a[k][j]);
                    }

                }
                
            }



            return R;


        }
        void show(Matrix m){
            int i,j,k;
            for (i=0;i<=2;i++){
                for(j=0;j<=2;j++){
                    for(k=0;k<=2;k++){
                        cout<<m.a[i][j]<<"\t";
                    }
                    cout<<"\n";

                }
                cout<<'\n';
                
            }
        }


};
int main(){
    int i,j,k,a[3][3][3],b[3][3][3];
    for (i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            for(k=0;k<=2;k++){
                cin>>a[i][j][k];
                cout<<"\t";
            }
            cout<<"\n";

        }
        cout<<'\n';
        
    }
    for (i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            for(k=0;k<=2;k++){
                cin>>b[i][j][k];
                cout<<"\t";
            }
            cout<<"\n";

        }
        cout<<'\n';
        
    }
    Matrix M1(a),M2(b),M3;
    M3 = M1 * M2;

    M3.show(M3);


    
    return 0;
}