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
        Ocasional(string tipo)
    private:
        int duracao;
};

class Assinatura: public Bilhete{
    public:
        Assinatura(string nome, int idade, string cc, string escola);
    private:
        string nome, escola;
        int idade, cc;
};

#endif // BILHETE_H
