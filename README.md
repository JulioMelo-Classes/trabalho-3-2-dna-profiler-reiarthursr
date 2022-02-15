# Atividade 03.2 de LP1

Aluno: Arthur Soares Ramalho

## Para compilar
```console
mkdir build
cd build
cmake ..
cmake --build .

```

## Para executar
```console
cd build
./dna_profiler -d <database_file> -s <dna_sequence_file>

```

## Executar testes
```console
cd build
./dna_profiler -d ../data/data_teste.csv -s ../data/sequence_teste0no_match.txt
./dna_profiler -d ../data/data_teste.csv -s ../data/sequence_teste1.txt
./dna_profiler -d ../data/data_teste.csv -s ../data/sequence_teste2erro.txt
./dna_profiler -d ../data/data_teste.csv -s ../data/sequence_teste3.txt

```

# Avaliação

1. Ler e validar os argumentos da linha de comando | 10 / 10
- Acho que a validação deixou a desejar, mas ok vou considerar

2. Ler e validar os dados da base de dados e armazená-los em uma classe apropriada | 10 / 10

3. Separar a interface textual das demais classes do sistema concentrando os couts e cins em um único objeto | 10 / 10

4. Implementação de uma classe para armazenar e validar o DNA de um indivíduo bem como realizar as operações de perfil | 10 / 10

5. Implementação eficiente através do uso de referencias, quando você  julgar necessário | 10 / 10

## Demais quesitos (Critério | Peso)

1. Organização do código em src, include, data | 5 / 5

2. Documentação do código usando o padrão doxygen | 5 / 5

3. Implementação e documentação de arquivos de teste | 15 / 15