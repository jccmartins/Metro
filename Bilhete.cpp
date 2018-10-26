#include "Bilhete.h"

Bilhete::Bilhete(string categoria)
{
    this->categoria = categoria;
}

string Bilhete::getCategoria() const
{
    return categoria;
}

Ocasional::Ocasional(string categoria, int duracao):Bilhete(categoria){
    this->duracao = duracao;
};

Assinatura::Assinatura(string nome){
    this->nome = nome;
};

Normal::Normal(string categoria, string nome):
Bilhete(categoria), Assinatura(nome)
{}

Estudante::Estudante(string categoria, string nome, int idade, int cc, string escola):
Bilhete(categoria), Assinatura(nome)
{
    this->idade = idade;
    this->cc = cc;
    this->escola = escola;
}

Junior_Senior::Junior_Senior(string categoria, string nome, int idade, int cc):
Bilhete(categoria), Assinatura(nome)
{
    this->idade = idade;
    this->cc = cc;
}
