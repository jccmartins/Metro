#include "Metro.h"

using namespace std;

void Metro::adicionaBilhete(Bilhete *b1)
{
	bilhetes.push_back(b1);
}

int Metro::numeroBilhetes() const
{
    return bilhetes.size();
}
