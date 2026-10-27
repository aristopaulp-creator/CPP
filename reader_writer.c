#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>
#include <unistd.h>

int reader_count = 0;
int shared_data = 10;

sem_t mutex;
sem_t wrt;

void *reader(void *arg){
    int id = *(int *)arg;

    sem_wait(&mutex);
    reader_count++;

    if(reader_count == 1)
        sem_wait(&wrt);

    sem_post(&mutex);

    printf("Reader %d is reading the shared data %d\n", id, shared_data);
    sleep(1);

    sem_wait(&mutex);
    reader_count--;
    
    if(reader_count == 0)
        sem_post(&wrt);

    sem_post(&mutex);

    printf("Reader %d has finished reading.\n", id);

    return NULL;
}

void *writer(void *arg){
    int id = *(int *)arg;

    sem_wait(&wrt);
    
    shared_data++;
    printf("Writer %d is writiing shared data %d\n", id, shared_data);
    sleep(1);

    sem_post(&wrt);
    printf("Writer %d is finished writing.\n", id);

    return NULL;
}

int main(){
    pthread_t reader_threads[3], writer_threads[2];
    int reader_id[3] = {1,2,3};
    int writer_id[2] = {1,2};
    
    sem_init(&mutex, 0, 1);
    sem_init(&wrt, 0, 1);

    pthread_create(&reader_threads[0], NULL, reader, &reader_id[0]);
    pthread_create(&reader_threads[1], NULL, reader, &reader_id[1]);
    pthread_create(&writer_threads[0], NULL, writer, &writer_id[0]);
    pthread_create(&reader_threads[2], NULL, reader, &reader_id[2]);
    pthread_create(&writer_threads[1], NULL, writer, &writer_id[1]);

    pthread_join(reader_threads[0], NULL);
    pthread_join(reader_threads[1], NULL);
    pthread_join(reader_threads[2], NULL);
    pthread_join(writer_threads[0], NULL);
    pthread_join(writer_threads[1], NULL);

    sem_destroy(&mutex);
    sem_destroy(&wrt);

    printf("\nAll reader writer operations are completed.\n");
}
