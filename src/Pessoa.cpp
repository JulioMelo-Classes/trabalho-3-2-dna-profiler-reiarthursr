#include "Pessoa.hpp"

using namespace std;

void Pessoa::set_nome(string nome)
{
    this->nome = nome;
}

void Pessoa::set_perfil(map<string, int> perfil)
{
    this->perfil = perfil;
}

std::map<std::string, int> Pessoa::get_perfil()
{
    return perfil;
}

void Pessoa::set_dna(std::string dna)
{
    this->dna = dna;
}
