#include <iostream>

using namespace std;

class mercado{
    private:
        string nome, tipo;
        int quant, lucro;

    public:
    void imprimir(){
        cout << "nome: " << getnome() << endl;
        cout << "tipo: " << gettipo() << endl;
        cout << "quantidade: " << getquant() << endl;
        cout << "lucro: " << getlucro() << endl;

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

    void setnome(string n){
        nome = n;
    }
    string getnome(){
        return nome;
    }

    void settipo(string t){
        tipo = t;
    }
    string gettipo(){
        return tipo;
    }

    void setquant(int q){
        quant = q;
    }
    int getquant(){
        return quant;
    }

    void setlucro(int l){
        lucro = l;
    }
    int getlucro(){
        return lucro;
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
    

    m1->setnome("sao francisco");
    m1->settipo ("super mercado");
    m1->setquant(320);
    m1->setlucro (400);
    m1->imprimir();
    m1->porte();

    m2->setnome("betinho");
    m2->settipo("super mercado");
    m2->setquant(430);
    m2->setlucro(600);
    m2->imprimir();
    m2->porte();

    m3->setnome("pinheiro");
    m3->settipo ("super mercado");
    m3->setquant(530);
    m3->setlucro(1000);
    m3->imprimir();
    m3->porte();

    return 0;
}