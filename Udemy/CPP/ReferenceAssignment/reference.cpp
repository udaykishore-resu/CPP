#include<iostream>

using namespace std;

void Add(int a,int b, int &result) ;    //Add two numbers and return the result through a reference parameter
void Factorial(int a, int &result) ;    //Find factorial of a number and return that through a reference parameter
void Swap(int &a, int &b) ;            //Swap two numbers through reference arguments

void Add(int a,int b, int &result){
    result= a+b;
}

void Swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void Factorial(int a, int &result){
    for(int i=a;i>0;i--){
        result = result*i;
    }
}
int main(){
    int a=10;
    int b=20;
    int result=1;

    Add(a, b, result);
    Swap(a, b);
    Factorial(a, result);
}
