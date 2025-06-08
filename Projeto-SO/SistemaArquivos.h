#ifndef SISTEMA_ARQUIVOS_H
#define SISTEMA_ARQUIVOS_H

#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

struct Arquivo {
    string nome;
    string conteudo;
    Arquivo(const string& nome) : nome(nome), conteudo("") {}
};

class SistemaArquivos {
private:
    unordered_map<string, Arquivo> arquivos;
public:
    void criarArquivo(const string& nome);
    void escreverArquivo(const string& nome, const string& conteudo);
    void lerArquivo(const string& nome);
    void listarArquivos();
    void deletarArquivo(const string& nome);
};

#endif