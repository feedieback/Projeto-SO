#ifndef PROCESSO_H
#define PROCESSO_H

#include <iostream>
#include "SistemaArquivos.h"
using namespace std;

class Processo {
public:
    string pid;
    int tempo_restante;
    SistemaArquivos* fs;

    Processo(string id, int tempo_execucao, SistemaArquivos* fs);
    void exibir() const;

    void criarArquivo(const string& nome);
    void escreverArquivo(const string& nome, const string& conteudo);
    void lerArquivo(const string& nome);
    void deletarArquivo(const string& nome);
};

#endif
