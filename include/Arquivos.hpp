#ifndef ARQUIVOS_H
#define ARQUIVOS_H
#include "Pessoa.hpp"
#include <vector>
#include <string>
#include <utility>

/**
 * @brief Lê e os arquivos e armazena os resultados em BaseDD (STRs, Pessoas e DNA).
 * 
 */
class Arquivos {
    private:
        /**
         * @brief Armazena o local do arquivo da Base de dados.
         * 
         */
        std::string arqBDD;

        /**
         * @brief Armazena o local do arquivo de DNA.
         * 
         */
        std::string arqDNA;

        /**
         * Este método serve para dividir uma linha em várias partes com base num delimitador.
         * Serve para ler os arquivos de forma fácil, dividindo as variáves nescessárias!
         * @param linha é a linha a ser dividida.
         * @param delimiter é a divisão entre cada parte. ele não entrará em nenhuma das strings do retorno.
         * @return retorna o vetor de string onde contem cada parte da string que foi dividida.
         */
        std::vector<std::string> dividir_linha(std::string linha, char delimiter);

    public:
        /**
         * @brief Construct a new Arquivos object
         * 
         * @param arqBDD Arquivo da Base de dados.
         * @param arqDNA Arquivo do DNA.
         */
        Arquivos(std::string arqBDD, std::string arqDNA);

        /**
         * @brief Lê o arquivo da Base de dados e envia os resultados para "BaseDD".
         * 
         * @return std::pair< std::vector<std::string>, std::vector<Pessoa> > STRs + Pessoas.
         */
        std::pair< std::vector<std::string>, std::vector<Pessoa_> > ler_arqBDD();

        /**
         * @brief Lê o arquivo de DNA e envia o resultado para "BaseDD"
         * 
         * @return std::string DNA.
         */
        std::string ler_arqDNA();
};

#endif