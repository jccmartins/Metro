#include "Bilhete.h"

Bilhete::Bilhete(string categoria){
    this->categoria = categoria;
}

string Bilhete::getCategoria() const{
    return categoria;
}

//EH NAO

Ocasional::Ocasional(string categoria, int duracao): Bilhete(categoria){
    this->duracao = duracao;
};

int Ocasional::getDuracao() const{
    return duracao;
}

Assinatura::Assinatura(string categoria, string nome): Bilhete(categoria){
    this->nome = nome;
};

Normal::Normal(string categoria, string nome):
Assinatura(categoria,nome)
{}

Estudante::Estudante(string categoria, string nome, int idade, int cc, string escola):
Assinatura(categoria, nome){
    this->idade = idade;
    this->cc = cc;
    this->escola = escola;
}

int Estudante::getDiscount() const{
    return 0.25;
}

Junior_Senior::Junior_Senior(string categoria, string nome, int idade, int cc):
Assinatura(categoria, nome){
    this->idade = idade;
    this->cc = cc;
}

int Junior_Senior::getDiscount() const{
    return 0.25;
}
