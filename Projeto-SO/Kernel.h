#ifndef KERNEL_H
#define KERNEL_H

#include "ProcessManager.h"
#include "MemoryManager.h"
#include "FileManager.h"
#include "IOManager.h"
#include <iostream>
using namespace std;

class Kernel {
public:
    Kernel();
    void iniciar();
    void executar();
    void interfaceUsuario();

private:
    ProcessManager pm;
    MemoryManager mm;
    FileManager fm;
    IOManager io;
};

#endif
