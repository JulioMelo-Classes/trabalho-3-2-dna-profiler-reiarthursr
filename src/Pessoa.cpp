#include "Pessoa.hpp"
//#include <iostream>//apagar---------------------------------------------------------------
using namespace std;

void Pessoa::set_nome(string nome)
{
    this->nome = nome;
}

string Pessoa::get_nome()
{
    return nome;
}

void Pessoa::set_perfil(map<string, int> perfil)
{
    this->perfil = perfil;
}

map<std::string, int> Pessoa::get_perfil()
{
    return perfil;
}

void Pessoa::set_dna(string dna)
{
    this->dna = dna;
}

string Pessoa::criarPerfil(vector<string> strs)
{
    // armazena a posição do conjunto de STRs e a quantidade de STRs neste conjunto
    vector<pair<int, int>> posQntStrs;

    for (auto& iStr: strs) // verificar cada STR
    {
        int posMaior = 0; // posição do maior conjunto de STR deste STR
        int qntMaior = 0; // quantidade de STRs do conjunto com maior quantidade de STRs deste STR

        //verificar cada posição do DNA (cada letra)
        for (size_t iPos = 0; iPos < dna.size() -iStr.size() +1 ; iPos++)
        {
            int qnt = 0; //se for maior que "qntMaior", então: "qntMaior" = "qnt"
            int letraStr = 0; // indica qual letra do STR deverá ser a próxima

            //verificar se é um conjunto de STR e contar quantos STRs possui
            for (size_t jPos = iPos; jPos < dna.size(); jPos++)
            {
                if(dna[jPos] == iStr[letraStr]) // se a letra for a próxima letra do STR
                {
                    if(letraStr >= iStr.size()-1) //se completou um STR
                    {
                        letraStr = 0;
                        qnt++;
                    }
                    else letraStr++; // passa para a próxima letra do STR
                }
                else break; // passa para a próxima posição (letra) do DNA
            }
            
            if(qnt > qntMaior) // caso tenha encontrado um conjunto de STR maior
            {
                posMaior = iPos;
                qntMaior = qnt;
            }
        }

        //cout<<iStr<<": "<<posMaior<<", "<<qntMaior<<endl;//---------------------------------------------
        posQntStrs.push_back({posMaior, qntMaior}); // armazenando valores
    }

    // criando "perfil" da "pessoaA"
    for (size_t i = 0; i < strs.size(); i++)
        perfil[strs[i]] = posQntStrs[i].second;

    return resultadoPerfil(posQntStrs, strs); // retorna o resultado a ser impresso
}

string Pessoa::resultadoPerfil(vector< pair<int, int> > posQntStrs, vector<string> strs)
{
    string resultado; // resultado a ser retornado

    // nome e quantidade de STRs "TATC [x8]"
    resultado += " ";
    for (size_t i = 0; i < dna.size(); i++) // percorrer cada letra do DNA
    {
        bool pular = false;
        for (size_t j = 0; j < strs.size(); j++) // verificar se tem conjunto de STR
        {
            if(i == posQntStrs[j].first) // verificando se está no inicio de um conjunto de STR
            {
                string addResultado = strs[j]+" [x"+to_string(posQntStrs[j].second)+"]";
                i += addResultado.size() -1; // pulando onde já foi escrito
                resultado += addResultado;

                pular = true;
                break;
            }
        }
        
        if(!pular) resultado += " ";
    }

    resultado += "\n"; // adicionando quebra de linha
    
    // indicar onde estão os conjuntos de STRs com setas "vvvvvvvvv"
    resultado += " ";
    for (size_t i = 0; i < dna.size(); i++) // percorrer cada letra do DNA
    {
        bool pular = false;
        for (size_t j = 0; j < strs.size(); j++) // verificar se tem conjunto de STR
        {
            if(i == posQntStrs[j].first) // verificando se está no inicio de um conjunto de STR
            {
                for (size_t k = 0; k < posQntStrs[j].second*strs[j].size(); k++)
                    resultado += "v"; // adicionando setas ao "resultado"

                i += posQntStrs[j].second*strs[j].size() -1;

                pular = true;
                break;
            }
        }
        
        if(!pular) resultado += " ";
    }

    resultado += "\n"; // adicionando quebra de linha

    // colorir sequência de DNA onde estão os conjuntos de STRs
    resultado += "[";
    for (size_t i = 0; i < dna.size(); i++)
    {
        bool fimConj = false; // se for fim de um conjunto de STR
        for (size_t j = 0; j < strs.size(); j++) // verificar se tem conjunto de STR
        {
            if(i == posQntStrs[j].first) // verificando se está no inicio de um conjunto de STR
                resultado += "\e[32;10m"; // ativando cor verde
            else if(i == posQntStrs[j].first + posQntStrs[j].second*strs[j].size() -1)
                fimConj = true;
        }

        resultado += dna[i];

        if(fimConj) resultado += "\e[m"; // desligando cor
    }
    
    resultado += "]";

    return resultado;
}
