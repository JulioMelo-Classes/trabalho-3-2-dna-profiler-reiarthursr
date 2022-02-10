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

void BaseDD::set_strs(vector<string> strs)
{
    this->strs = strs;
}

string BaseDD::criarPerfilPessoaA()
{
    return pessoaA.criarPerfil(strs); // cria o perfil da "pessoaA" e retorna o resultado, pronto para imprimir
}
