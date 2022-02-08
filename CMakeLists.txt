cmake_minimum_required(VERSION 3.5)
project(dna_profiler VERSION 0.1 LANGUAGES CXX )


### Executável
# Diretório contendo os .hpp
include_directories( include )

# Cria um executável com nome "dna_profiler"
add_executable( dna_profiler
                src/Dna.cpp
				src/Pessoa.cpp
                src/BaseDD.cpp
                src/Arquivos.cpp
                src/Sistema.cpp)

# The end
