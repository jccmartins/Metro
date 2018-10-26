#include "Bilhete.h"

Bilhete::Bilhete(string categoria)
{
    this->categoria = categoria;
}

string Bilhete::getCategoria() const
{
    return categoria;
}

Ocasional::Ocasional(int duracao, string categoria):Bilhete(categoria){
    this->duracao = duracao;
};

Assinatura::Assinatura(string nome, int idade, string cc, string escola): Bilhete(categoria){
    this->nome = nome;
    this->idade = idade;
    this->cc = cc;
    this->escola = escola;
};
