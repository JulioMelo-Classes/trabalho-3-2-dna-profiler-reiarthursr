#include "Pessoa.hpp"

using namespace std;

Pessoa::Pessoa()
{
    nome = "";
    perfil = {};
    dna = "";
}

void Pessoa::set_nome(string nome)
{
    this->nome = nome;
}

void Pessoa::set_perfil(map<string, int> perfil)
{
    this->perfil = perfil;
}

void Pessoa::set_dna(std::string dna)
{
    this->dna = dna;
}
