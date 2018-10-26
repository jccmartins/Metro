#ifndef METRO_H
#define METRO_H

#include "Bilhete.h"
#include <vector>

class Metro
{
    vector<Bilhete *> bilhetes;
    public:
        void adicionaBilhete(Bilhete *b1);
        int numeroBilhetes() const;


};

#endif // METRO_H
