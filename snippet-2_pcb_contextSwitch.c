#include <stdio.h>
#include <string.h>

struct PCB{
    int pid;
    int programCounter;
    int registerA;
    char state[10];
};

void contextSwitch(struct PCB *current, struct PCB *next){
    printf("Saving State of Process : %d\n", current->pid);
    strcpy(current->state, "READY");

    printf("Loading State of Process : %d\n", next->pid);
    strcpy(next->state, "RUNNING");

    printf("Context Switch: P%d -> P%d\n\n", current->pid, next->pid);
    printf("Context Switching")
}

int main(){
    struct PCB p1 = {1, 120, 45, "RUNNING"};
    struct PCB p2 = {2, 45, 10, "READY"};

    printf("Initially Processe are Running: %d %d", p1.pid, p2.pid);

    //! Making the Context Switch
    contextSwitch(&p1, &p2);

    printf("Process %d State : %s\n", p1.pid, p1.state);
    printf("Process %d State : %s\n", p2.pid, p2.state);

    return 0;
}