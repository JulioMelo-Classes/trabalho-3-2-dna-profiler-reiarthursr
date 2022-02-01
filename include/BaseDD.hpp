#ifndef BASEDD_H
#define BASEDD_H
#include "Pessoa.hpp"
#include <string>
#include <vector>

/**
 * @brief Base de dados.
 * Armazena todas as Pessoas da base de dados, "pessoaA" e os "strs". Busca "perfil" da "pessoaA" entre as outras.
 */
class BaseDD {
    private:
        /**
         * @brief Vetor de pessoas.
         * Serão comparadas para encontrar o perfil desejado (pessoaA).
         * 
         */
        std::vector<Pessoa> pessoas;

        /**
         * @brief Pessoa que não possui "nome" e possui um "dna".
         * Deve ser comparado com outros pefis para o encontrar.
         * 
         */
        Pessoa pessoaA;

        /**
         * @brief Vetor de STRs.
         * Usado na hora de "dna" da "pessoaA" para criar um "perfil" para ela.
         * 
         */
        std::vector<std::string> strs;
};

#endif