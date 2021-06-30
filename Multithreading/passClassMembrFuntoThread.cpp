#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
#include<string.h>
using namespace std;

class Task{
    public:
    void * execute();
    static void * threadFun(void *);
};

void* Task::execute(){
    cout<<"Execute from Thread ID:"<<pthread_self()<<endl;
    return NULL;
}

void* Task::threadFun(void*){
    cout<<"threadFun from Thread ID:"<<pthread_self()<<endl;
    return NULL;
}

typedef void* (*THREADFUNCPTR)(void*);

int main(){
    Task *tptr = new Task();
    pthread_t tid;
    int err = pthread_create(&tid, NULL, (THREADFUNCPTR)&Task::execute,tptr);
    if(err){
        cout<<"thread creation failed:"<<strerror(err)<<endl;
        return err;
    }

    cout<<"waiting for thread "<<tid<<"to exit"<<endl;

    err = pthread_join(tid,NULL);

    if(err)
        return err;

    err = pthread_create(&tid, NULL, (THREADFUNCPTR)&Task::threadFun,NULL);
    if(err){
        cout<<"thread creation failed:"<<strerror(err)<<endl;
        return err;
    }

    cout<<"waiting for thread "<<tid<<"to exit"<<endl;

    err = pthread_join(tid,NULL);

    if(err)
        return err;
    
}