#include "Sistema.hpp"
#include "Pessoa.hpp"

using namespace std;

Sistema::Sistema(Arquivos arquivos)
{
    this->arquivos = arquivos;
}

void Sistema::executarBusca()
{
    cout<<"================================================="<<endl;
    cout<<"Welcome to the Basic DNA Profiler, v1.0"<<endl;
    cout<<"Arthur Soares Ramalho"<<endl;
    cout<<"================================================="<<endl<<endl;
    cout<<"\e[34;10mThis program loads a DNA database and an unknown"<<endl;
    cout<<"DNA sequence and tries to find a match between"<<endl;
    cout<<"the input DNA sequence and the DNA database.\e[m"<<endl<<endl;

    lerArqs(); // ler arquivos e armazenar informações na "baseDD"

    // cria o perfil da "pessoaA" e retorna o resultado, pronto para imprimir
    string resultadoPerfil = baseDD.criarPerfilPessoaA();

    // procurando perfil na Base de Dados
    cout<<"[+] Searching the database for a match... please wait."<<endl<<endl<<endl;

    auto buscaPerfil = baseDD.buscarPerfil(); // comparando perfil com a base de dados, retornando o nome

    if(buscaPerfil.first) // se encontrar o perfil
    {
        cout<<"Match ID (99.9%): "<<buscaPerfil.second<<endl;
        cout<<"DNA Profile:"<<endl;
        cout<<resultadoPerfil<<endl;
    }
    else // se não encontrar o perfil
        cout<<">>> Sorry, no match in our database."<<endl;
}

void Sistema::lerArqs()
{
    cout<<"[+] Preparing to read the DNA Database file [\e[31;10m"<<arquivos.get_arqBDD()<<"\e[m]"<<endl;
    baseDD.set_dna_pessoaA(arquivos.ler_arqDNA()); // ler arquivo de DNA e setando na base de dados

    cout<<"[+] Preparing to read unknown DNA sequence file [\e[31;10m"<<arquivos.get_arqDNA()<<"\e[m]"<<endl;
    pair< vector<string>, vector<Pessoa> > bdd = arquivos.ler_arqBDD(); // ler arquivo de BDD
    baseDD.set_strs(bdd.first); // setando STRs na base de dados
    baseDD.set_pessoas(bdd.second); // setando vetor de pessoas na base de dados

    cout<<"[+] Processing data, please wait."<<endl<<endl;
    cout<<"[+] Input files successfully read."<<endl;
}