Neste laboratório nos foi instruindo a criar um arquivo .c que nele continha uma função para achar os primos dentro de determinados parametrôs, não só isso, 
mas também montá-la de forma que consigamos executá-la de forma paralela em multiplas máquinas. 
Para tal feito, nós utilizamos a biblioteca <mpi.h> e executamos da seguinte maneira:

-> mpicc -g -Wall -o mpi_primo primos.c -lm                                                  // esse comando serve para criar o executável mpi_primo
-> mpiexec -n 2 --host slave1 --host slave2 /home/ubuntu/compDistr/lab_05/primos.c           // esse comando serve para executar o exe que criamos nas máquinas slaves
