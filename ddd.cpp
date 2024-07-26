#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define n '\n'
#define sp " "
#define smp ' '
#define fast_tle  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int N=5e5+5;
using namespace std;

map<char, vector<char>> graph;
map<char, int> visited;

bool CYCLE(char node) {
    if (visited[node] == 1) {
        return true;
    }
    if (visited[node] == 2) {
        return false;
    }

    visited[node] = 1;

    for (char X : graph[node]) {
        if (CYCLE(X)) {
            return true;
        }
    }

    visited[node] = 2;
    return false;
}

bool isDeadlock() {
    for (const auto& pair : graph) {
        char node = pair.first;
        if (visited[node] == 0 && CYCLE(node)) {
            return true;
        }
    }
    return false;
}

int main() {

    int N_nodes, N_edge;
    cout << "Number of Nodes: ";
    cin >> N_nodes;
    cout << "Number of Edges: ";
    cin >> N_edge;


    for (int i = 0; i < N_edge; i++) {
        char node1, node2;
        cin >> node1 >> node2;
        graph[node1].push_back(node2);
    }


    for (const auto& pair : graph) {
        visited[pair.first] = 0;
    }

    if (isDeadlock()) {
        cout << "Deadlock: Yes" << endl;
    }
    else {
        cout << "Deadlock: No" << endl;
    }

    return 0;
}
