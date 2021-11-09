#include <iostream>
#include "compte.h"
using namespace Banque;
using namespace std;


int main()
{
    compte();
    c.consulter_solde();
    c.retirer_argent(2000);
    c.deposer_argent(1000);
    transferer(c,2000);
}
