#ifndef BILHETE_H
#define BILHETE_H

#include <string>

using namespace std;

class Bilhete
{
    public:
        Bilhete(string categoria);
        string getCategoria() const;
    protected:
        string categoria;
};

class Ocasional: public Bilhete{
    public:
        Ocasional(string categoria, int duracao);
        int getDuracao() const;
    private:
        int duracao;
};

class Assinatura: public Bilhete{
    public:
        Assinatura(string categoria, string nome);
        virtual int getDiscount() const = 0;
    private:
        string nome;
};

class Normal: public Assinatura{
    public:
        Normal(string categoria, string nome);
};

class Estudante: public Assinatura{
    public:
        Estudante(string categoria, string nome, int idade, int cc, string escola);
        int getDiscount() const;
    private:
        int idade, cc;
        string escola;
};

class Junior_Senior: public Assinatura{
    public:
        Junior_Senior(string categoria, string nome, int idade, int cc);
        int getDiscount() const;
    private:
        int idade, cc;
};
#endif // BILHETE_H
