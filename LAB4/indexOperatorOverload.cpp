#include<iostream>

using namespace std;

class Index{
    private:
        int *array;
        int size;

    public:
        Index(){
            array = NULL;
            size = 0;
        }
        Index(int *newArray=NULL,int newSize=0){
            array = NULL;
            size = newSize;
            if (size!=0){
                array = new int[size];
                for (int i=0;i<size;i++){
                    array[i] = newArray[i];
                }
            }

            
            
        }
        int &operator[](int value){ //hard_to_understand (working on address funnction)
            if (value>=size){
                cout<<"Valu must be within Index range";
                exit(0);
            }
            
            
            return array[value];



        }
        void show(){
            cout<<"[";
            for (int i=0;i<size;i++){
                cout<<array[i]<<",";


            }
            cout<<"]";
        }

};

int main(){
    int a[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int size = 14;
    Index i(a,size);
    i[1]=1;
    i.show();
    i[3]=1;
    i.show();
    


    return 0;
}