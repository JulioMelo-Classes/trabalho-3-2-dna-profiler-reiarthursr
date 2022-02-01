cmake_minimum_required(VERSION 3.5)
project(dna VERSION 0.1 LANGUAGES CXX )


### Executável
# Diretório contendo os .hpp
include_directories( include )

# Cria um executável com nome "dna", adiciona neste executável os arquivos src/dna.cpp src/sistema.cpp src/executor.cpp
add_executable( dna
                src/Dna.cpp
				src/Pessoa.cpp
                src/BaseDD.cpp
                src/Arquivos.cpp
                src/Sistema.cpp)

# The end
