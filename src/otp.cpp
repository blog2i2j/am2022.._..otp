#include <iostream>
#include "gen.cpp"

using namespace std;

int main(){
    string ch; //to get characters

    cout<<"enter chars:";
    cin>>ch;

    gen generate(ch);
}