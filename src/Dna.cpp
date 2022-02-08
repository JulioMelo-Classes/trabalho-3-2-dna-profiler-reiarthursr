#include "Sistema.hpp"
#include "Arquivos.hpp"

int main(int argc, char *argv[]){
    Arquivos arquivos(argv[2], argv[4]); // criando "arquivos"

    Sistema sistema(arquivos); // criando "sistema"

    sistema.executarBusca(); // executar busca

    return 0;
}