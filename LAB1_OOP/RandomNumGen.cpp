#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
    int max=24;
    srand(time(0));
    int choosen = rand()%max;
    if (choosen == 0) {
        choosen = rand()%max;

    }
    else{
        cout<<"Choosen Number ="<<choosen<<endl;
    }

    
    
    return 0;
}