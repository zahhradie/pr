#include <iostream>
using namespace std;
int reqemSayi(int a){
    int q,k=0;
    while(a>0){
        q=a%10;
        a=a/10;
        k+=1;
    }
    return k;
int main(){
    int a;
    cout<<"eded daxil edin:";
    cin>>a;
    cout<<"say="<<reqemSayi(a);
}
