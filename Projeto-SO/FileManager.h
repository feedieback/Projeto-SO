#ifndef FILE_MANAGER_H
#define FILE_MANAGER_H

#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class FileManager {
public:
    void criarArquivo(const string& nome);
    void deletarArquivo(const string& nome);
    void listarArquivos();

private:
    vector<string> arquivos;
};

#endif
