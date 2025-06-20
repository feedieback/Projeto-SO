#ifndef IO_MANAGER_H
#define IO_MANAGER_H

class IOManager {
public:
    void requisitarIO(int pid);
    void finalizarIO(int pid);
};

#endif