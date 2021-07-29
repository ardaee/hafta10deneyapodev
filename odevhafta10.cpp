#include <iostream>
using namespace std;
class Meyve{//soru 1
public:
void yazdir(){
    cout<<"Ben meyve sinifiyim"<<endl;
}
};
class Elma: public Meyve{
public:
void yazdir(){
    cout<<"Ben elmayim"<<endl;
}
};
class Muz: public Meyve{
public:
void yazdir(){
    cout<<"Ben muzum"<<endl;
}
};

class Hayvan{//soru 2
public:
    void yer(){
        cout<<"Et, ot vb."<<endl;
    }
};
class Kopek: public Hayvan{
public:
    void yer(){
        cout<<"Et"<<endl;
    }
};

class Dikdortgen{
public:
    void alanYaz1(int x, int y){
        cout<<x*y<<endl;
    }
    void alanYaz2(int x){
        cout<<x*x<<endl;
    }
    void alanYaz1(int x, double y){
        cout<<x*y<<endl;
    }
    void alanYaz3(double x){
        cout<<x*x<<endl;
    }
};
int main(){
    int s;
    cout<<"Cevabini gormek istediginiz soru numarasini giriniz(1-3): "<<endl;
    cin>>s;
    if(s==1){
        Meyve meyve;
        meyve.yazdir();
        Elma elma;
        elma.yazdir();
        Muz muz;
        muz.yazdir();
    }else if(s==2){
        Hayvan h;
        h.yer();
        Kopek k;
        k.yer();
    }else if(s==3){
        cout<<"Asiri yuklenen fonksiyon alanYaz1'dir."<<endl;
        Dikdortgen dikt;
        dikt.alanYaz1(3,5);
        dikt.alanYaz1(4,2.1);
        dikt.alanYaz2(8);
        dikt.alanYaz3(6.7);
    }
}
