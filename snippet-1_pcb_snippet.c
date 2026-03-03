#include <stdio.h>
#define MAX 5
enum State{
    NEW,
    READY,
    RUNNING,
    WAITING,
    TERMINATED
};

struct PCB{
    int pid;
    enum State state;
    int programCounter;
    int registers[8];
    int priority;
};

struct PCB createProcess(int pid, int priority){
    struct PCB p;
    p.pid = pid;
    p.state = NEW;
    p.programCounter = 0;
    p.priority = priority;
    return p;
}

struct PCB readyQueue[MAX];
int front = 0;
int rear = -1;

void addProcess(struct PCB p){
    readyQueue[++rear] = p;
}

void contextSwitching(struct PCB *current, struct PCB *next){
    // Save Current Process State
    current->state = READY;

    // Load the next Process
    next->state = RUNNING;
}

void displayPCB(struct PCB p){
    printf("PID : %d\n", p.pid);
    printf("State : %d\n", p.state);
    printf("Priority: %d\n", p.priority);
}

int main(){
    printf("PCB Bare Scripting!");
    return 0;
}