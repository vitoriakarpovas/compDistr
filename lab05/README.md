Neste laboratório nos foi instruindo a criar um arquivo .c com uma função para achar os primos dentro de determinados parametrôs, e montá-la para que seja possível executá-la de forma paralela em multiplas máquinas. 
Para tal feito, nós utilizamos a biblioteca <mpi.h> e executamos da seguinte maneira:

Antes de executar, é preciso dar o seguinte comando em todas as máquinas para clonar o git onde está o código:

-> git clone https://github.com/vitoriakarpovas/compDistr.git

Em seguida, entramos na pasta onde está o código e criamos o executável, também em todas as máquinas:

-> cd compDistr/lab05 

-> mpicc -g -Wall -o mpi_primo primoAtualizado.c -lm 

Por fim, na máquina master, rodamos o seguinte comando para executar o executável criado (em duas máquinas slave):

-> mpiexec -n 2 --host slave1 --host slave2 /home/ubuntu/compDistr/lab05/mpi_primo 

Retorno esperado:
![image](https://user-images.githubusercontent.com/64614300/195726770-753c963a-4a4d-46ec-8377-9048e5e0b567.jpg)



----------------------------------------------------------------------------------------------------------------------
speedup em duas máquinas slaves:

![WhatsApp Image 2022-10-13 at 8 24 47 PM](https://user-images.githubusercontent.com/64480334/195728833-af73f99e-2d5a-4a6e-9ad9-bb9e7675d896.jpeg)
