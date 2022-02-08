#include "Pessoa.hpp"
#include <string>
#include <vector>

using namespace std;

void Pessoa::set_nome(string nome)
{
    this->nome = nome;
}

void Pessoa::set_perfil(map<string, int> perfil)
{
    this->perfil = perfil;
}