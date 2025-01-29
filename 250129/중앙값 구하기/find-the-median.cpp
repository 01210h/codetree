#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if(b<a){
        swap(a,b);//무조건 a<b
    }
    int mid=b;
    if(c<b&&a<c){
        mid=c;
    }else if(c<b&&c<a){
        mid=a;
    }
    cout<<mid;

    return 0;
}