#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <vector>
#include <map>

/**
 * @brief Classe Pessoa.
 * pode armazenar o "nome", "perfil" (maior quantidade de cada STR em sequência) e DNA (apenas da pessoaA).
 * Usa o "dna" para criar um "perfil".
 * 
 */
class Pessoa {
    private:
        /**
         * @brief Nome da Pessoa deste perfil.
         * Usado para identificar uma Pessoa
         * Não é usado caso a Pessoa tenha um "dna".
         * 
         */
        std::string nome;

        /**
         * @brief Perfil de uma pessoa.
         * string: armazena qual é o str.
         * int: armazena a quantidade de vezes que o str.
         * Usado para compação entre perfis.
         * 
         */
        std::map<std::string, int> perfil;

        /**
         * @brief DNA de uma pessoa.
         * Usado para ser criar um perfil.
         * Não é usado caso a Pessoa tenha um "nome".
         * 
         */
        std::string dna;
};

#endif