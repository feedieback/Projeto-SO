#include "FileManager.h"
#include <iostream>
#include <algorithm>
using namespace std;

void FileManager::criarArquivo(const string& nome) {
    arquivos.push_back(nome);
    cout << "Arquivo '" << nome << "' criado.\n";
}

void FileManager::deletarArquivo(const string& nome) {
    auto it = remove(arquivos.begin(), arquivos.end(), nome);
    if (it != arquivos.end()) {
        arquivos.erase(it, arquivos.end());
        cout << "Arquivo '" << nome << "' deletado.\n";
    }
    else {
        cout << "Arquivo '" << nome << "' nao encontrado.\n";
    }
}

void FileManager::listarArquivos() {
    if (arquivos.empty()) {
        cout << "Nenhum arquivo encontrado.\n";
        return;
    }

    cout << "\nArquivos no sistema:\n";
    for (const auto& arquivo : arquivos) {
        cout << "- " << arquivo << "\n";
    }
}
