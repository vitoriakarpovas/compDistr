Neste laboratório nos foi instruindo a criar um arquivo .c que nele continha uma função para achar os primos dentro de determinados parametrôs, não só isso, 
mas também montá-la de forma que consigamos executá-la de forma paralela em multiplas máquinas. 
Para tal feito, nós utilizamos a biblioteca <mpi.h> e executamos da seguinte maneira:

Antes de executar, é preciso dar o seguinte comando:

-> git clone https://github.com/vitoriakarpovas/compDistr.git

Para subir o código para a máquina

-> cd compDistr/lab05                          // para entrar na pasta lab05

-> mpicc -g -Wall -o mpi_primo primos.c -lm    // esse comando serve para criar o executável mpi_primo

-> mpiexec -n 2 --host slave1 --host slave2 /home/ubuntu/compDistr/lab05/mpi_primo           // esse comando serve para executar o exe que criamos nas máquinas slaves

e ele deve retornar isso daqui:
![image](https://user-images.githubusercontent.com/73562058/195142297-f68e57db-286e-4191-aa81-93b1eb03168e.png)


speedup = serial/paralela
