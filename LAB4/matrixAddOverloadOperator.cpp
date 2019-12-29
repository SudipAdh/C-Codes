#include<iostream>
using namespace std;

class MatrixAdd{
    private:
        int m[2][2];

    public:
        MatrixAdd(){
            int i,j;
            for (i=0;i<=1;i++){
                for(j=0;j<=1;j++){
                    m[i][j]=0;

                }
                
            }

        }
        MatrixAdd(int a[2][2]){
            int i,j;
            for (i=0;i<=1;i++){
                for(j=0;j<=1;j++){
                    m[i][j]=a[i][j];

                }
                
            }

        }
        MatrixAdd operator+(MatrixAdd x){
            MatrixAdd R;
            int i ,j ;
            for (i=0;i<=1;i++){
                for(j=0;j<=1;j++){
                    R.m[i][j] = m[i][j] + x.m[i][j];

                }
                
            }
            return R;

        }
        void show (MatrixAdd x){
            int i,j;
            for (i=0;i<=1;i++){
                for(j=0;j<=1;j++){
                    cout<<x.m[i][j];
                    cout<<'\t';

                }
                cout<<'\n';
                
            }

        }


};
int main(){
    int i,j,a[2][2],b[2][2];
    for (i=0;i<=1;i++){
        for(j=0;j<=1;j++){
            cin>>a[i][j];
            cout<<'\t';

        }
        cout<<'\n';
        
    }


    for (i=0;i<=1;i++){
        for(j=0;j<=1;j++){
            cin>>b[i][j];
            cout<<'\t';

        }
        cout<<'\n';
        
    }

    MatrixAdd M1(a),M2(b),M3;
    M3 = M1 + M2;
    M3.show(M3);



    


    return 0;
}