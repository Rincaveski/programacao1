# Como compilar um projeto em C
  Para iniciar o projeto em c é necessario estar na mesma pasta e executar o comando `gcc -Wall "nome do arquivo" -o "nome do arquivo a ser criado"`. A flag -Wall é para avisar na compilação se o código possui algum erro, a flag -o é para criar um arquivo com um nome especifico
  ## Possiveis erros
    Ao compilar com o math.h ela vai apresat erro pois não encontra a lib, devemos compilar com a flag `-lm`
# Como rodar um projeto em C
  Para rodar um projeto em c é necessario estar na mesma pasta e rodar o comando `./"nome do arquivo"`, caso o projeto tenha algum parametro, eles são inseridos após o nome do arquivo, exemplo `./"nome do arquivo" "parametro 1" "parametro 2"`
