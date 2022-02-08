#ifndef PESSOA_H
#define PESSOA_H
#include "BaseDD.hpp"
#include "Arquivos.hpp"

/**
 * @brief Centraliza as saidas para o usuário.
 * 
 */
class Sistema {
    private:
        /**
         * @brief Base de dados.
         * 
         */
        BaseDD baseDD;

        /**
         * @brief Arquivos.
         * 
         */
        Arquivos arquivos;

        /**
         * @brief Lê e armazena as informações dos arquivos na "baseDD"
         * 
         */
        void lerArqs();
    
    public:
        /**
         * @brief Construct a new Sistema object
         * 
         * @param arquivos Arquivos a serem armazenados no sistema.
         */
        Sistema(Arquivos arquivos);

        /**
         * @brief Executa todas as funções encessárias para a busca e imprime o resultado.
         * 
         */
        void executarBusca();
};

#endif