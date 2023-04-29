#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Process {
    int pid; // process ID
    int arrival_time; // arrival time
    int burst_time; // burst time
};

bool compareArrivalTime(Process p1, Process p2) {
    return (p1.arrival_time < p2.arrival_time);
}

void fcfs(vector<Process>& processes) {
    int n = processes.size();

    sort(processes.begin(), processes.end(), compareArrivalTime);

    int current_time = processes[0].arrival_time;
    int waiting_time = 0;
    int turnaround_time = 0;

    for (int i = 0; i < n; i++) {
        int burst_time = processes[i].burst_time;

        waiting_time += current_time - processes[i].arrival_time;

        current_time += burst_time;

        turnaround_time += current_time - processes[i].arrival_time;

        cout << "Process ID: " << processes[i].pid << endl;
        cout << "Waiting Time: " << waiting_time << endl;
        cout << "Turnaround Time: " << turnaround_time << endl;
        cout << "---------------------" << endl;
    }
}

int main() {
    vector<Process> processes = {{1, 0, 5}, {2, 1, 3}, {3, 2, 8}, {4, 3, 6}};

    fcfs(processes);

    return 0;
}
