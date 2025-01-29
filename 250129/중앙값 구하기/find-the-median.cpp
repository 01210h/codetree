#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    int mid=b;
    if(b<a){
        swap(a,b);//a<b
    }else if(c<b&&a<c){
        swap(b,c);
    }else if(c<b&&c<a){
        swap(a,b);
    }
    cout<<b;

    return 0;
}