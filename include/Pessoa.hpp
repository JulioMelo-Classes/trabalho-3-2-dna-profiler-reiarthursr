#ifndef PESSOA_H
#define PESSOA_H
#include <map>
#include <string>
#include <vector>

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

    public:
        /**
         * @brief Set the nome object
         * 
         * @param nome a ser setado.
         */
        void set_nome(std::string nome);

        /**
         * @brief Set the perfil object
         * 
         * @param perfil a ser setado.
         */
        void set_perfil(std::map<std::string, int> perfil);

        /**
         * @brief Get the perfil object
         * 
         * @return std::map<std::string, int> perfil.
         */
        std::map<std::string, int> get_perfil();

        /**
         * @brief Set the dna object
         * 
         * @param dna a ser setado. Somente para a "pessoaA".
         */
        void set_dna(std::string dna);

        /**
         * @brief Cria um "perfil" para a Pessoa com base em seu "dna".
         * 
         * @param stds a serem usados para a criação do perfil.
         * @return std::string resultado da criação do perfil, pronto para imprimir.
         */
        std::string criarPerfil(std::vector<std::string> stds);
};

#endif