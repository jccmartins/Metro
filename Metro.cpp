#include "Metro.h"

void Metro::adicionaBilhete(Bilhete *b1)
{
	bilhetes.push_back(b1);
}

int Metro::numeroBilhetes()
{
    return bilhetes.size();
}
