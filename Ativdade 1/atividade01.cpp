#include <iostream>

using namespace std;

class mercado{
    public:
        string nome;
        string tipo;
        int quant;
        int lucro;

    void imprimir(){
        cout << "nome: " << nome << endl;
        cout << "tipo: " << tipo << endl;
        cout << "quantidade: " << quant << endl;
        cout << "lucro: " << lucro << endl;

    }

    void porte(){
        if(lucro == 1000){
            cout << "porte: grande" << endl;
            cout << endl;
        }else if(lucro > 500 and lucro < 1000){
            cout << "porte: medio" << endl;
            cout << endl;
        }else{
            cout << "porte: pequeno" << endl;
            cout << endl;
        }
    }

    mercado(){
        nome = "";
        tipo = "";
        quant = 0;
        lucro = 0;

    }
};

int main(){
    mercado *m1 = new mercado;
    mercado *m2 = new mercado;
    mercado *m3 = new mercado;
    

    m1->nome = "sao francisco";
    m1->tipo = "super mercado";
    m1->quant = 320;
    m1->lucro = 400;
    m1->imprimir();
    m1->porte();

    m2->nome = "betinho";
    m2->tipo = "super mercado";
    m2->quant = 430;
    m2->lucro = 600;
    m2->imprimir();
    m2->porte();

    m3->nome = "pinheiro";
    m3->tipo = "super mercado";
    m3->quant = 530;
    m3->lucro = 1000;
    m3->imprimir();
    m3->porte();

    return 0;
}