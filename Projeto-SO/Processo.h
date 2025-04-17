#ifndef PROCESSO_H
#define PROCESSO_H

#include <iostream>
using namespace std;

class Processo {
public:
    string pid;
    int tempo_restante;

    Processo(string id, int tempo_execucao);
    void exibir() const;
};

#endif
