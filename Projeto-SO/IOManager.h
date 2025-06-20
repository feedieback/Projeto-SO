#ifndef IO_MANAGER_H
#define IO_MANAGER_H

#include <iostream>
using namespace std;

class IOManager {
public:
    void requisitarIO(int pid);
    void finalizarIO(int pid);
};

#endif