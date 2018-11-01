#include "Bilhete.h"
#include <iostream>

Bilhete::Bilhete(string categoria)
{
    this->categoria = categoria;
}

string Bilhete::getCategoria() const
{
    return categoria;
}


//OCASIONAL

Ocasional::Ocasional(string categoria, int duracao) : Bilhete(categoria)
{
    this->duracao = duracao;
};

int Ocasional::getDuracao() const
{
    return duracao;
}

void Ocasional::info() const {

    cout << "Ocasional - ";
    cout << "Categoria: " << categoria;
    cout << " / Duracao: " << duracao << endl;
}


//ASSINATURA

Assinatura::Assinatura(string categoria, string nome) : Bilhete(categoria)
{
    this->nome = nome;
};


//NORMAL

Normal::Normal(string categoria, string nome) : Assinatura(categoria, nome)
{
}

double Normal::getDiscount() const
{
    return desconto;
}

void Normal::info() const {

    cout << "Assinatura Normal - ";
    cout << "Categoria: " << categoria;
    cout << " / Nome: " << nome << endl;
}

//ESTUDANTE

Estudante::Estudante(string categoria, string nome, int idade, int cc, string escola) : 
Assinatura(categoria, nome), idade(idade), cc(cc), escola(escola)
{
}

double Estudante::getDiscount() const
{
    return desconto;
}

void Estudante::info() const {

    cout << "Assinatura Estudante - ";
    cout << "Categoria: " << categoria;
    cout << " / Nome: " << nome;
    cout << " / Idade: " << idade;
    cout << " / CC: " << cc;
    cout << " / Escola: " << escola << endl;
}


//JUNIOR E SENIOR

Junior_Senior::Junior_Senior(string categoria, string nome, int idade, int cc) : 
Assinatura(categoria, nome), idade(idade), cc(cc)
{
}

double Junior_Senior::getDiscount() const
{
    return desconto;
}

void Estudante::info() const {

    cout << "Assinatura Estudante - ";
    cout << "Categoria: " << categoria;
    cout << " / Nome: " << nome;
    cout << " / Idade: " << idade;
    cout << " / CC: " << cc  << endl;
}
