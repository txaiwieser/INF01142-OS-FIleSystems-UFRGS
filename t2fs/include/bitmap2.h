
#ifndef __BITMAP2__
#define	__BITMAP2__

/**
	Retorna a informa��o do estado do bloco l�gico �blockNumber� do disco.
	Retorna �0�, se o bloco estiver ocupado e um valor diferente de zero, caso esteja livre.
*/
extern	int isBlockFree2 (unsigned int blockNumber);

/**
	Libera o bloco l�gico �blockNumber�. Isso � feito escrevendo na �rea de bitmap do disco.
	Retorna �0�, se a escrita foi bem sucedida; retorna um valor diferente de zero, caso tenha ocorrido algum erro.
*/
extern	int freeBlock2 (unsigned int blockNumber);

/**
	Aloca (ocupa) o bloco l�gico �blockNumber�. Isso � feito escrevendo na �rea de bitmap do disco.
	Retorna �0�, se a escrita foi bem sucedida; retorna um valor diferente de zero, caso tenha ocorrido algum erro.
*/
extern	int allocBlock2 (unsigned int blockNumber);

/**
	Procura no bitmap de aloca��o de blocos por um bloco livre.
	Retorna o n�mero do bloco encontrado; retorna �0� se n�o encontrou nenhum bloco livre ou em caso de erro.
*/
extern	unsigned int searchFreeBlock2 (void);

#endif
