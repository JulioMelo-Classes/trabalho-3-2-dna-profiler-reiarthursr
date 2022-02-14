#include "Sistema.hpp"
#include "Arquivos.hpp"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
    string argd = argv[1];
    string args = argv[3];
    if(argd != "-d" || args != "-s") // verificando entrada
    {
        cout<<"Erro! ["<<argv[1]<<"] ["<<argv[3]<<"]"<<endl;
        return -1;
    }

    Arquivos arquivos(argv[2], argv[4]); // criando "arquivos"

    Sistema sistema(arquivos); // criando "sistema"

    sistema.executarBusca(); // executar busca

    return 0;
}