#include <iostream>
using namespace std;
int reqemCemi(int a){
    int c=0,q;
    while(a>0){
        q=a%10;
        a=a/10;
        c+=q;
    }
    return c;
}
int main(){
    int a,c=0,q;
    cout<<"ededi daxil et:";
    cin>>a;
    cout<<reqemCemi(a);
}
