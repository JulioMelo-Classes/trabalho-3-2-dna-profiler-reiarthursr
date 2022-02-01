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
};

#endif