#include <iostream>
using namespace std;
string eded(int a){
    if(a%2==0){
        return "Cut ededdir";
    }
    else{
        return "Tek ededdir";
    }
}
int main(){
    int a;
    cout<<"Ededi daxil edin:";
    cin>>a;
    cout<<eded(a);
}
