#include <iostream>
#include <string>
using namespace std;

int main (){
int age,height,bounty;
string a;
cout<<"Enter your age: ";
cin>>age;

if(age<=25){
cout<<"Enter your height: ";
cin>>height;
if(height<100){
    a = "Chopper" ;
}else if(height<180){
    a = "Usopp";
}else {
    cout<<"Enter your bounty: ";
    cin>>bounty;
    a = "Sanji";
    if(bounty>1100000000){
        a = "Zoro";
    }
}
}else if(age<=60){
    cout<<"Enter your bounty: ";
    cin>>bounty;
    a = "Franky";
    if(bounty>500000000){
        a = "Jinbe";
    }
}else{
    a = "Brook";
}


cout<<"Your character = "<<a;
    return 0;
}