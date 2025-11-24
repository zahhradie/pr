#include <iostream>
using namespace std;
double hesabla(double a){
    return a*a;
}
int hesabla(int a){
    return 4*a;
}
int main() {
    double a;
    cout<<"Kvadratin terefini daxil edin:";
    cin>>a;
    double s=hesabla(a);
    int p=hesabla((int)a);
    cout<<"Sahesi: "<<s<<endl;
    cout<<"Perimetri: "<<p<<endl;
}
