#include "Pessoa.hpp"
#include <iostream>//apagar---------------------------------------------------------------
using namespace std;

void Pessoa::set_nome(string nome)
{
    this->nome = nome;
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

string Pessoa::criarPerfil(std::vector<std::string> strs)
{
    string resultadoPerfil; // resultado a ser impresso

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
            for (size_t jPos = iPos; jPos < dna.size() -iStr.size() +1; jPos++)
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

        cout<<iStr<<": "<<posMaior<<", "<<qntMaior<<endl;//---------------------------------------------
        posQntStrs.push_back({posMaior, qntMaior}); // armazenando valores
    }

    //criar o perfil usando "posQntStrs"-----------------------------------------------

    //função que monta o "resultadoPerfil" que será imprimido----------------------------
        
    resultadoPerfil = "";//----------------------------------------------------------
    return resultadoPerfil;
}
