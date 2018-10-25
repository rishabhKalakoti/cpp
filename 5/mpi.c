#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
	printf("\n");
    // Initialize the MPI environment
	double start =  MPI_Wtime();
    MPI_Init(NULL, NULL);

    // Get the number of processes
    int world_size;
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    // Get the rank of the process
    int world_rank;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);

    // Get the name of the processor
    char processor_name[MPI_MAX_PROCESSOR_NAME];
    int name_len;
    MPI_Get_processor_name(processor_name, &name_len);
	double end= MPI_Wtime();
    // Print off a hello world message
    printf("Processor: %s\nProcess rank %d out of %d \nTime: %lf\n\n",
           processor_name, world_rank + 1, world_size,end-start);
	
    // Finalize the MPI environment.
    MPI_Finalize();
}

