#include "Sistema.hpp"
#include "Pessoa.hpp"

using namespace std;

Sistema::Sistema(Arquivos arquivos)
{
    this->arquivos = arquivos;
}

void Sistema::executarBusca()
{
    lerArqs(); // ler arquivos e armazenar informações na "baseDD"
}

void Sistema::lerArqs()
{
    string dna = arquivos.ler_arqDNA(); // ler arquivo de DNA

    pair< vector<string>, vector<Pessoa> > bdd = arquivos.ler_arqBDD();
}