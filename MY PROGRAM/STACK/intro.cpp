#include<iostream>
using namespace std;

class Stack{

    public:
    // Properties
     int *arr;
     int top;
     int size;

     //Constructor
     Stack(int length){
        this->size = length;
        arr = new int[length];
        top = -1;
     }

     //functions
     void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout << "Stack is not Empty to put your Element " << element << endl;
        }
     }

     void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout << "Stack is already Empty";
        }
     }

     bool isEmpty(){
        if(top >= 0){
            cout << "Stack is not Empty";
        }
        else{
            cout << "Stack is Empty";
        }
     }

     int peak(){
        if(top>= 0){
            return arr[top];
        }
        else{
            return -1;
        }
     }

};

int main(){

   Stack st(5);

    st.push(45);
    st.push(5);
    st.push(5);
    st.push(4);
    st.push(89);
    st.push(89);
    st.pop();
    cout << st.peak() << endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.isEmpty();

}