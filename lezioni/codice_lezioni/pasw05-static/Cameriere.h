#ifndef CAMERIERE_H
#define CAMERIERE_H
#include<string>
using namespace std;
class Cameriere
{
public:
    Cameriere(string nomeCameriere);
    static int getClienteDaServire( );              // numero cliente da servire
    void serviCliente( );                           // servizio del prossimo cliente
    static bool isAperto( );                        // servizio ancora aperto
private:
    static int clienteDaServire;            // numero ultimo cliente da servire
    static int ultimoServito;               // numero ultimo cliente servito
    static bool servizioAperto;             // servizio aperto
    string nome;                            // nome del cameriere
};
#endif


