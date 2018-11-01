#include "Bilhete.h"

Bilhete::Bilhete(string categoria)
{
    this->categoria = categoria;
}

string Bilhete::getCategoria() const
{
    return categoria;
}

<<<<<<< HEAD
//EH NAO

Ocasional::Ocasional(string categoria, int duracao): Bilhete(categoria){
=======
Ocasional::Ocasional(string categoria, int duracao) : Bilhete(categoria)
{
>>>>>>> 780df084511b93aee24a868b4b6570509582c788
    this->duracao = duracao;
};

int Ocasional::getDuracao() const
{
    return duracao;
}

Assinatura::Assinatura(string categoria, string nome) : Bilhete(categoria)
{
    this->nome = nome;
};

Normal::Normal(string categoria, string nome) : Assinatura(categoria, nome)
{
}

Estudante::Estudante(string categoria, string nome, int idade, int cc, string escola) : 
Assinatura(categoria, nome), idade(idade), cc(cc), escola(escola)
{
}

int Estudante::getDiscount() const
{
    return desconto;
}

Junior_Senior::Junior_Senior(string categoria, string nome, int idade, int cc) : 
Assinatura(categoria, nome), idade(idade), cc(cc)
{
}

int Junior_Senior::getDiscount() const
{
    return desconto;
}
