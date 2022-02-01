#ifndef ARQUIVOS_H
#define ARQUIVOS_H
#include <string>

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
};

#endif