#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> parent;

int find(int a) {
    if (a == parent[a]) {
        return a;
    }
    else {
        return parent[a] = find(parent[a]);
    }
}

void unionSets(int a, int b) {
    a = find(a);
    b = find(b);

    if (a != b) {
        parent[b] = a;
    }
}

bool isSame(int a, int b) {
    a = find(a);
    b = find(b);
    return a == b;
}

int main() {
    ios_base::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int N, M;
    cin >> N >> M;
    parent.resize(N + 1);

    for (int i = 0; i <= N; i++) {
        parent[i] = i;
    }

    for (int i = 0; i < M; i++) {
        int question, a, b;
        cin >> question >> a >> b;
        if (question == 0) {
            unionSets(a, b);
        }
        else {
            if (isSame(a, b)) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
