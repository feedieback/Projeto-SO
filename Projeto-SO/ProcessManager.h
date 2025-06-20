#ifndef PROCESS_MANAGER_H
#define PROCESS_MANAGER_H

#include <queue>
#include <vector>
#include <string>
#include "Process.h"
#include <iostream>
using namespace std;

class ProcessManager {
public:
    void criarProcesso(const string& nome, int tempo, int prioridade);
    void listarProcessos();

private:
    queue<Process> readyQueue;
    vector<Process> processos;
};

#endif