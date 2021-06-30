#include<iostream>
#include<string>
#include<boost/algorithms/string.hpp>

int main(){
    string str = "this is CPP Programming CPP";
    cout<<"String before replace: "<<str<<endl;
    findAndReplaceStr(str, "CPP", "CPlusPlus");
    cout<<"String after replace: "<<str<<endl;
}