#include "IOManager.h"
#include <iostream>
using namespace std;

void IOManager::requisitarIO(int pid) {
    cout << "Requisicao de IO para PID " << pid << ".\n";
}

void IOManager::finalizarIO(int pid) {
    cout << "IO finalizada para PID " << pid << ".\n";
}