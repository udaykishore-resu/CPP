#include<iostream> 
using namespace std; 
  
class Sample { 
    const int i; 
public: 
    Sample(int x):i(x) {}  //Initializer list must be used 
    int getVal() { return i; } 
}; 
  
int main() { 
    Sample t1(10); 
    cout<<t1.getVal()<<endl; 
    return 0; 
} 
