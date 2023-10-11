#include <iostream>
using namespace std;

int main(){
    int a,b,c,d;
    d=0;

    for(int i=0; i<5; i++){
        cout<<"masukkan nilai a"<<endl;
        cin>>a;
        cout<<"masukkan nilai b"<<endl;
        cin>>b;

        c=a+b;
        d=d+c;
    }
        cout<<"jumlahnya adalah = "<<d;

    return 0;
}