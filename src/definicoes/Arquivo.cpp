#include "../includes/Arquivo.h"
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;


/**
 * 
*/
vector<string> *Arquivo::split(string fileName, char delimitador) {
    string *lines, dado, pathFile = this->default_path + fileName;
    vector<string> *dados = new vector<string>();

    stringstream ss(pathFile);

    while (getline(ss, dado, delimitador)) {
        dados->push_back(dado);
    }

    return dados;
}

map<string, vector<string>*> *Arquivo::read_csv(string fileName, char delimitador) {
        vector<map<string, string>*> *map_csv = new vector<string, vector<string>*>();
        vector<string> *conteudo_csv = this->split(fileName, ';');
        vector<string> *cabecalhos = new vector<string>();
        int indice = 0;
        for(string dado : *conteudo_csv) {
            if(indice == 0) {
                // logica de insercao
            }
        }
        
        if(dado[dado.length()-1] == '\n')
            dado = dado.replace(dado.end()-1, dado.end(), "");
}