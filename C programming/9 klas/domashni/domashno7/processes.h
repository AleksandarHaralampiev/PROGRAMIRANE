#ifndef PROCESSES_H
#define PROCESSES_H

#define MAX_PROCESSES 5

struct Process {
    int id;
    char name[30];
};

extern struct Process processes[MAX_PROCESSES];
extern int processescount;

int createnewprocess(char *name);
void stopprocess(int id);

#endif
