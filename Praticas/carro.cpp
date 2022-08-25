#include <iostream>

using namespace std;


class carro{
    public:
    int ano;
    float vel, km;

 

    void setano(int a){
        ano = a;
    }
    int getano(){
        return ano;
    }
    void setvel(int v){
        vel = v;
    }
    int getvel(){
        return vel;
    }
    void setkm(int k){
        km = k;
    }
    int getkm(){
        return km;
    }
};
int main(){
    carro gol;
    gol.setano(1995);
    gol.setvel(199);
    gol.setkm(198);

    cout << "ano:" << gol.getano() << endl;
    cout << "velo:" << gol.getvel() << endl;
    cout << "km:" << gol.getkm() << endl;

    cout << "proximo carro!" << endl;
    carro hilux;
    hilux.setano(1999);
    hilux.setvel(212);
    hilux.setkm(1234);

    cout << "ano:" << hilux.getano() << endl;
    cout << "velo:" << hilux.getvel() << endl;
    cout << "km:" << hilux.getkm() << endl;

    return 0;
}