#include<iostream>
#include<string>
using namespace std;

void findAndReplaceStr(string & str, string toFind, string toReplace){
    //first occurence of the string
    int pos = str.find(toFind);
    //search till the end
    while(pos!=string::npos){
        //replace the string 
        str.replace(pos, toFind.size(),toReplace);
        //next occurence from current position
        pos = str.find(toFind,pos+toReplace.size());
    }
}

int main(){
    string str = "this is CPP Programming CPP";
    cout<<"String before replace: "<<str<<endl;
    findAndReplaceStr(str, "CPP", "CPlusPlus");
    cout<<"String after replace: "<<str<<endl;
}