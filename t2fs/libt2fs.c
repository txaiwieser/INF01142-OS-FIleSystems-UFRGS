


//Informa a identificação dos desenvolvedores
int identify2 (char *name, int size){

}

//Função usada para criar um novo arquivo no disco
FILE2 create2 (char *filename){

}

//Função usada para remover um arquivo do disco
int delete2 (char *filename){

}

//Função que abre um arquivo existente no disco
FILE2 open2 (char *filename){

}

//Função usada para fechar um arquivo
int close2 (FILE2 handle){

}

//Função usada para realizar a leitura de uma certa quantidade de bytes (size) de um arquivo
int read2 (FILE2 handle, char *buffer, int size){

}

//Função usada para realizar a escrita de uma certa quantidade de bytes (size) de um arquivo
int write2 (FILE2 handle, char *buffer, int size){

}

//Altera o contador de posição (current pointer) do arquivo
int seek2 (FILE2 handle, unsigned int offset){

}

//Função usada para criar um novo diretorio
int mkdir2 (char *pathname){

}

//Função usada para remover um diretório existente no disco
int rmdir2 (char *pathname){

}

//Função que abre um diretório existente no disco
DIR2 opendir2 (char *pathname){

}

//Função usada para ler as entradas de um diretório
int readdir2 (DIR2 handle, DIRENT2 *dentry){

}

//Função usada para fechar um arquivo
int closedir2 (DIR2 handle){

}

//Função usada para alterar o diretório corrente
int chdir2 (char *pathname){

}

//Função usada paraobter o caminho do diretorio corrente
int getcwd2 (char *pathname, int size){

}