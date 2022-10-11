#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <mpi.h>

#define MAXSIZE 300

int isPrime(int numero){
  int raiz, fator;
  raiz = (int)sqrt((double)numero);
  for (fator = 2; fator <= raiz; fator++)
    if (numero % fator == 0)
    {
      return 0;
    }
  return 1;
}

int main(int argc, char **argv){
  int myid, numprocs;
  int myTotalPrimes = 0, totalPrimes = 0;
  int *primes;
  int *myPrimes;
  int i, range, low, high;
  int j, k;
  double time;

  MPI_Init(&argc, &argv);
  MPI_Comm_size(MPI_COMM_WORLD, &numprocs);
  MPI_Comm_rank(MPI_COMM_WORLD, &myid);

  if(myid == 0){
    time = MPI_Wtime();
  }

  low = ((numprocs - myid) *low + (myid) *(MAXSIZE + 1))/(numprocs);
  high = ((numprocs - myid - 1)*low + (myid + 1) * (MAXSIZE + 1))/(numprocs) - 1;
  if (high > k)
    high = k;

  for (i = low + 1; i <= high; i++)
  {
    if (isPrime(i))
    {
      myPrimes[myTotalPrimes] = i;
      myTotalPrimes++;
      myPrimes = (int *)realloc(myPrimes, (myTotalPrimes) * sizeof(int));
    }
  }

  char hostname[500];
  gethostname(hostname, 500);

  printf("I got %d from %d\n", myTotalPrimes, myid);

  MPI_Reduce(&myTotalPrimes, &totalPrimes, 1, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);

  MPI_Gather(myPrimes, myTotalPrimes, MPI_INT, primes, myTotalPrimes, MPI_INT, 0, MPI_COMM_WORLD);

  if (myid == 0)
  {
    time = MPI_Wtime() - time;
    printf("The total primes is %d.\n", totalPrimes);

    for (int i = 0; i < totalPrimes + 1; i++)
    {
      printf("%d\n", primes[i]);
    }
  }

  MPI_Finalize();
  return 0;
}
