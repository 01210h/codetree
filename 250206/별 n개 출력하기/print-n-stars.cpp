#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        cout<<"*";
        if(i!=n){
            cout<<endl;
        }
        i++;
    }

   return 0;
}