// Overloading operators for Array class 
#include<iostream> 
#include<cstdlib> 
  
using namespace std; 
  
// A class to represent an integer array 
class Array 
{ 
private: 
    int *ptr; 
    int size; 
public: 
    Array(int *, int); 
  
    // Overloading [] operator to access elements in array style 
    int &operator[] (int); 
  
    // Utility function to print contents 
    void print() const; 
}; 
  
  
// Implementation of [] operator.  This function must return a 
// refernce as array element can be put on left side 
int &Array::operator[](int index) 
{ 
    if (index >= size) 
    { 
        cout << "Array index out of bound, exiting"; 
        exit(0); 
    } 
    return ptr[index]; 
} 
  
// constructor for array class 
Array::Array(int *p = NULL, int s = 0) 
{ 
    size = s; 
    ptr = NULL; 
    if (s != 0) 
    { 
        ptr = new int[s]; 
        for (int i = 0; i < s; i++) 
            ptr[i] = p[i]; 
    } 
} 
  
void Array::print() const
{ 
    for(int i = 0; i < size; i++) 
        cout<<ptr[i]<<" "; 
    cout<<endl; 
} 
  
// Driver program to test above methods 
int main() 
{ 
    int a[] = {1, 2, 4, 5}; 
    Array arr1(a, 4); 
    arr1[2] = 6; 
    arr1.print(); 
    arr1[8] = 6; 
    return 0; 
}