#include<iostream>
using namespace std;
char result(char,int,int*);
int main(){
    char a,b,c;
    int A,B,C;
    int count{0};
    cin>>a>>A;
    result(a,A,&count);
    cin>>b>>B;
    result(b,B,&count);
    cin>>c>>C;
    result(c,C,&count);
    if(count>=2){
        cout<<"E";
    }else{
        cout<<"N";
    }
    return 0;
}
char result(char c ,int n,int* num){
    if(c=='Y'){
        if(n>=37){
            (*num)++;
            return 'A';
        }else{
            return 'C';
        }
    }else{
        if (n>=37){
            return 'B';
        }else{
            return 'D';
        }
    }
}