#ifndef PROCESS_H
#define PROCESS_H

#include <string>
#include <iostream>
using namespace std;

class Process {
public:
    string nome;
    int tempoTotal;
    int prioridade;

    Process(const string& nome, int tempo, int prioridade)
        : nome(nome), tempoTotal(tempo), prioridade(prioridade) {}
};

#endif