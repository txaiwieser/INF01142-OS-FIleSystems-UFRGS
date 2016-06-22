# SistemaDeArquivosT2FS-SISOP-INF-UFRGS

Implementação de um Sistema de Arquivos que empregue alocação indexada para a criação de arquivos e diretórios para a disciplina de Sistemas Operacionais na UFRGS 2016.

O objetivo deste trabalho é a aplicação dos conceitos de sistemas operacionais na implementação de um Sistema de Arquivos que empregue alocação indexada para a criação de arquivos e diretórios.
Esse Sistema de Arquivos será chamado, daqui para diante, de T2FS (Task 2 – File System – Versão 2016.1) e deverá ser implementado, OBRIGATORIAMENTE, na linguagem “C”, sem o uso de outras bibliotecas, com exceção da libc. Além disso, a implementação deverá executar na máquina virtual fornecida no Moodle.
O sistema de arquivos T2FS deverá ser disponibilizado na forma de um arquivo de biblioteca chamado libt2fs.a. Essa biblioteca fornecerá uma interface de programação através da qual programas de usuário e utilitários – escritos em C – poderão interagir com o sistema de arquivos.
A figura 1 ilustra os componentes deste trabalho. Notar a existência de três camadas de software. A camada superior é composta por programas de usuários, tais como os programas de teste (escritos pelo professor ou por vocês mesmos), e por programas utilitários do sistema.
A camada intermediária representa o Sistema de Arquivos T2FS. A implementação dessa camada é sua responsabilidade e o principal objetivo deste trabalho.
Por fim, a camada inferior, que representa o acesso ao disco, é implementada pela apidisk, que será fornecida junto com a especificação deste trabalho. A camada apidisk emula o driver de dispositivo do disco rígido e o próprio disco rígido. Essa camada é composta por um arquivo que simulará um disco formatado em T2FS, e por funções básicas de leitura e escrita de setores lógicos desse disco. As funções básicas de leitura e escrita simulam as solicitações enviadas ao driver de dispositivo (disco T2FS).

