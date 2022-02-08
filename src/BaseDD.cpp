#include "BaseDD.hpp"

using namespace std;

void BaseDD::set_pessoas(vector<Pessoa> pessoas)
{
    this->pessoas = pessoas;
}

void BaseDD::set_dna_pessoaA(string dna)
{
    pessoaA.set_dna(dna); // seta "dna" da "pessoaA"
}