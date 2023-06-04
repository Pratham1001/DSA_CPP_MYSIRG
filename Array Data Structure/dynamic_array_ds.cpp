#include <iostream>
using namespace std;

//define a class Array with member variables to store capacity of array, last index of the last filled block of the array and a pointer
class Array{
    private:
        int capacity;
        int lastIndex;
        int *ptr;
    public:
        Array(int);
        bool isEmpty();
        void append(int);

};

void Array::append(int data){
    if(lastIndex== capacity-1 ){
        cout<<endl<< "Error: array is full";

    }
    else{
        lastIndex++;
        ptr[lastIndex]=data;
    }
}

bool Array::isEmpty()
{
   return lastIndex==-1;
}

//access constructor outside the class
Array::Array(int cap)
{
    capacity=cap;
    lastIndex=-1;
    ptr=new int [capacity];


}


int main(){


    
}