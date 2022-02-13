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

pair<bool, string> BaseDD::buscarPerfil()
{
    for (auto& iP: pessoas) // comparando "perfil" de cada pessoa
    {
        bool achou = true;
        for (auto& iStr: strs) // comparando a quantidade de cada STR
        {
            if(pessoaA.get_perfil()[iStr] != iP.get_perfil()[iStr]) // se a quantidade for diferente
            {
                achou = false;
                break;
            }
        }
        
        if(achou) // se encontrar o "perfil" na Base de Dados
            return {true, iP.get_nome()}; // retorna o nome da pessoa
    }

    return {false, ""}; // caso não encontre o "perfil" na Base de Dados
}
