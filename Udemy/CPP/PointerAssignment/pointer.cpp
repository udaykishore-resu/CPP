#include<iostream>

using namespace std;

int Add(int *a, int *b) ;    //Add two numbers and return the sum
void AddVal(int *a, int *b, int *result); //Add two numbers and return the sum through the third pointer argument
void Swap(int *a, int *b) ;  //Swap the value of two integers
void Factorial(int *a, int *result);       //Generate the factorial of a number and return that through the second pointer argument

int Add(int *a, int *b){
    return (*a)+(*b);
}

void AddVal(int *a, int *b, int *result){
    (*result) = (*a)+(*b);
    return (*result);
}

void Swap(int *a, int *b){
    int *temp;
    (*temp) = (*a);
    (*a) = (*b);
    (*b) = (*temp);
}

void Factorial(int *a, int *result){
    for(int i=(*a);i>0;i--){
        (*result) = (*result)*i;
    }
}
int main(){
    int a=10;
    int b=20;
    int result=1;

    result=Add(&a, &b);
    AddVal(&a,&b,&result);
    Swap(&a, &b);
    Factorial(&a, &result);
}
