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
Você pode rodar o sistema e em logo depois digitar os comandos seguidos de ENTER
```console
cd build
./dna_profiler -d <database_file> -s <dna_sequence_file>

```

## Executar testes
```console
cd build
./dna_profiler -d ../data/data.csv -s ../data/sequence_alice.txt
./dna_profiler -d ../data/data.csv -s ../data/sequence_bob.txt
./dna_profiler -d ../data/data.csv -s ../data/sequence_charlie.txt
./dna_profiler -d ../data/data.csv -s ../data/sequence_no_match.txt
./dna_profiler -d ../data/data_teste.csv -s ../data/sequence_teste1.txt
./dna_profiler -d ../data/data_teste.csv -s ../data/sequence_teste2erro.txt

```
