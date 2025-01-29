#include<iostream>
using namespace std;

int main(){
    int age,a;
    char ch,c;

    cin>>age>>ch;
    cin>>a>>c;
    
    if(age>=19&&ch=='M'||a>=19&&c=='M'){
        cout<<"1";
    }else{
        cout<<"0";
    }
    return 0;
}