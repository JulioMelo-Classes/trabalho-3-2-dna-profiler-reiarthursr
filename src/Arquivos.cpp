#include <iostream>
#include <fstream>
#include "Arquivos.hpp"

using namespace std;

Arquivos::Arquivos()
{
    arqBDD = "";
    arqDNA = "";
}

Arquivos::Arquivos(string arqBDD, string arqDNA)
{
    this->arqBDD = arqBDD;
    this->arqDNA = arqDNA;
}

pair< vector<string>, vector<Pessoa> > Arquivos::ler_arqBDD()
{
    ifstream arquivoBDD; // arquivo
    string linha; // linha lida do arquivo

    vector<string> stds; // usado para retornar os "STDs"
    vector<Pessoa> pessoas; // usado para retornas as "pessoas"

    arquivoBDD.open(arqBDD); //abrindo arquivo

    if(arquivoBDD.is_open())
    {
        // STDs
        getline(arquivoBDD, linha); // armazenando STDs na "linha"
        stds = dividir_linha(linha, ','); // armazenando variázeis em "stds"
        stds.erase(stds.begin()); // apagando variável "nome" de "stds"

        // Pessoas
        while (getline(arquivoBDD, linha))
        {
            linha.erase(linha.end()-1);//apagando último caracter----------------------

            Pessoa pessoa; // pessoa temporária. usada para inserir no vetor "pessoas"

            vector<string> tempVet = dividir_linha(linha, ','); // dividindo a linha em variáveis

            pessoa.set_nome(tempVet[0]); // armazenando nome da "pessoa"
            //cout<<"nome: ["<<tempVet[0]<<"]"<<endl;//-------------------------------------------------
            tempVet.erase(tempVet.begin()); // deletando nome da "pessoa" do "tempVet"

            map<string, int> perfil; // perfil temporário. usado na "pessoa"
            for (size_t i = 0; i < stds.size(); i++) // armazenando perfil em "pessoa"
            {
                perfil[stds[i]] = stoi(tempVet[i]);
                //cout<<"std: ["<<tempVet[i]<<"] stoi["<<stoi(tempVet[i])<<"]"<<endl;//---------------------------
            }

            pessoa.set_perfil(perfil); // setando perfil na "pessoa"

            pessoas.push_back(pessoa); // inserindo "pessoa" no vetor "pessoas"
        }
    }
    else cout<<"Erro no arquivo."<<endl;

    arquivoBDD.close(); // fechando arquivo

    return {stds, pessoas};
}

string Arquivos::ler_arqDNA()
{
    ifstream arquivoDNA; // arquivo
    string linha; // linha lida do arquivo

    arquivoDNA.open(arqDNA); //abrindo arquivo

    if(arquivoDNA.is_open())
    {
        getline(arquivoDNA, linha); // armazenando DNA na "linha"
        linha.erase(linha.end()-1);//apagando último caracter----------------------
        //cout<<"dna: ["<<linha<<"]"<<endl;//--------------------------------
    }
    else cout<<"Erro no arquivo."<<endl;

    arquivoDNA.close(); // fechando arquivo

    return linha;
}

string Arquivos::get_arqBDD()
{
    return arqBDD;
}

string Arquivos::get_arqDNA()
{
    return arqDNA;
}

vector<string> Arquivos::dividir_linha(string linha, char delimiter)
{
    vector<string> result;
	string rest = linha, block;
	size_t operator_position = rest.find_first_of(delimiter);
	while (operator_position != string::npos) {
		block = rest.substr(0, operator_position);
		rest = rest.substr(operator_position + 1);
		operator_position = rest.find_first_of(delimiter);
        if(block[0] == ' ') block.erase(0, 1);
		result.push_back(block);
	}
	
	if (rest.length() > 0)
    {
        if(rest[0] == ' ') rest.erase(0, 1);
		result.push_back(rest);
    }

	return result;
}