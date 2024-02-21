#include "processes.h"
#include <string.h>

struct Process processes[MAX_PROCESSES];
int processescount = 0;

static int nextprocessid() {
    static int nextid = 1;

    if (nextid < MAX_PROCESSES) {
        int id = nextid;
        nextid++;
        return id;
    } else {
        return 0;
    }
}

int createnewprocess(char *name) {
    if (processescount >= MAX_PROCESSES) {
        return 0;
    }

    int id = nextprocessid();
    processes[processescount].id = id;
    strcpy(processes[processescount].name, name);
    processescount++;

    return id;
}

void stopprocess(int id) {
    for (int i = 0; i < processescount; i++) {
        if (processes[i].id == id) {
            processes[i] = processes[processescount - 1];
            processescount--;
            break;
        }
    }
}