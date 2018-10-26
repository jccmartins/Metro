#include "Bilhete.h"

Bilhete::Bilhete(string categoria){
    this->categoria = categoria;
}

string Bilhete::getCategoria() const{
    return categoria;
}

Ocasional::Ocasional(string categoria, int duracao): Bilhete(categoria){
    this->duracao = duracao;
};

int Ocasional::getDuracao() const{
    return duracao;
}

Assinatura::Assinatura(string nome){
    this->nome = nome;
};

Normal::Normal(string categoria, string nome):
Bilhete(categoria), Assinatura(nome)
{}

Estudante::Estudante(string categoria, string nome, int idade, int cc, string escola):
Bilhete(categoria), Assinatura(nome){
    this->idade = idade;
    this->cc = cc;
    this->escola = escola;
}

int Estudante::getDiscount() const{
    return 0.25;
}

Junior_Senior::Junior_Senior(string categoria, string nome, int idade, int cc):
Bilhete(categoria), Assinatura(nome){
    this->idade = idade;
    this->cc = cc;
}

int Junior_Senior::getDiscount() const{
    return 0.25;
}
