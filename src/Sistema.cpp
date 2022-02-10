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
    cout<<"================================================="<<endl<<endl;
    cout<<"\e[34;10mThis program loads a DNA database and an unknown"<<endl;
    cout<<"DNA sequence and tries to find a match between"<<endl;
    cout<<"the input DNA sequence and the DNA database.\e[m"<<endl<<endl;

    lerArqs(); // ler arquivos e armazenar informações na "baseDD"

    // cria o perfil da "pessoaA" e retorna o resultado, pronto para imprimir
    string resultadoPerfil = baseDD.criarPerfilPessoaA();

    //comparar com base de dados----------------------------------------------------
}

void Sistema::lerArqs()
{
    cout<<"[+] Preparing to read the DNA Database file [\e[31;10m"<<arquivos.get_arqBDD()<<"\e[m]"<<endl;
    string dna = arquivos.ler_arqDNA(); // ler arquivo de DNA

    cout<<"[+] Preparing to read unknown DNA sequence file [\e[31;10m"<<arquivos.get_arqDNA()<<"\e[m]"<<endl;
    pair< vector<string>, vector<Pessoa> > bdd = arquivos.ler_arqBDD();

    cout<<"[+] Processing data, please wait."<<endl<<endl;
    cout<<"[+] Input files successfully read."<<endl;
}