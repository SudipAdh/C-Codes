#include<iostream>
using namespace std;

class vector{
    private:
        int a[3];

    public:
        vector(){
            for(int i =0;i<=2;i++){
                a[i] = 0;
            }


        }
        vector(int b[3]){
            for(int i =0;i<=2;i++){
                a[i] = b[i];
            }


        }
        vector add(vector x,vector y){
            
            vector z;
            for(int i =0;i<=2;i++){
                z.a[i] =x.a[i]+y.a[i];
            }

            return z;
            

        }
        void display(vector v){
            for(int i =0;i<=2;i++){
                cout<<v.a[i]<<"\t";
            }

        }


};

int main(){
    
     int a[3],b[3];
     for(int i =0;i<=2;i++){
        cin>>a[i];
        
     }
     cout<<endl;
     for(int i =0;i<=2;i++){
        cin>>b[i];
     }
     vector v1(a),v2(b);
     vector v0 = v1.add(v1,v2);
     v1.display(v0);


     


        


    return 0;
}