#ifndef BILHETE_H
#define BILHETE_H


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
        Ocasional(int duracao, string categoria)
    private:
        int duracao;
};

class Assinatura{
    public:
        Assinatura(string nome);
    private:
        string nome;
};

class Normal: public Bilhete, public Assinatura{
    public:
        Normal(string categoria, string nome);
};

class Estudante: public Bilhete, public Assinatura{
    public:
        Estudante(string categoria, string nome, int idade, int cc, string escola);
    private:
        int idade, cc;
        string escola;
};

class Junior_Senior: public Bilhete, public Assinatura{
    public:
        Junior_Senior(string categoria, string nome, int idade, int cc);
    private:
        int idade, int cc;
};
#endif // BILHETE_H
