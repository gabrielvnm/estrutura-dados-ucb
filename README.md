# N1 AT2 - Projeto de Estrutura de Dados
## 📚 Descrição:
Este projeto tem como objetivo praticar o acesso a arquivos, o processamento de strings e a ordenação de vetores em linguagem C.
Desenvolvemos um programa que realiza o cadastro e ordenação de [tipo de informação escolhido, ex: produtos, clientes, livros] a partir de um arquivo CSV.
O usuário pode escolher qual campo utilizar para a ordenação e gerar um novo arquivo CSV com os dados organizados.


## 🎯 Objetivo da Solução
- Ler informações de um arquivo CSV.

- Permitir a escolha do campo de ordenação pelo usuário.

- Ordenar os dados de acordo com a escolha.

- Gerar um novo arquivo CSV com os dados ordenados.

## 🛠️ Tecnologias e Ferramentas
- Visual Studio Code;

- Linguagem C;

- GitHub para versionamento;

- Compilador GCC.

## 📥 Entrada de Dados
- Um arquivo `.csv` com um item por linha.
- Cada linha contém **três campos**:
  - Um campo **texto** (ex: nome ou descrição).
  - Um campo **numérico** (ex: preço, idade, quantidade).
  - Um campo adicional (texto ou numérico).

## 📤 Saída de Dados
- Um novo arquivo `.csv` gerado pelo programa contendo os dados ordenados conforme a escolha do usuário.
- O nome do arquivo de saída é definido pelo próprio usuário durante a execução.

## 🔄 Algoritmo de Ordenação Utilizado
Utilizamos o algoritmo **Bubble Sort** para realizar a ordenação dos dados.

## 🧩 Estrutura do Código
O programa é organizado em funções principais:

- `lerCSV()`: Realiza a leitura dos dados do arquivo CSV.
- `escolherColuna()`: Permite que o usuário selecione o campo para ordenação.
- `ordenarDados()`: Ordena o vetor de registros baseado na escolha do usuário.
- `salvarCSV()`: Salva os dados ordenados em um novo arquivo CSV.
- `main()`: Coordena a execução do programa.

## 📎 Repositório GitHub

🔗 [Link para o repositório do projeto](https://github.com/usuario/repositorio)
