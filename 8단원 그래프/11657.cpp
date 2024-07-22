#include <vector>       // ���� ���̺귯�� ����
#include <algorithm>    // fill �Լ� ����� ���� �˰��� ���̺귯�� ����
#include <iostream>     // ����� ��Ʈ�� ���̺귯�� ����
using namespace std;    // ǥ�� ���ӽ����̽� ���

#define INF 2100000000  // ���Ѵ븦 ��Ÿ���� ��� ����

int N, M, x, y, z;      // ��� ����, ���� ����, ���� ����(x, y, z)�� ���� ���� ����
long long dist[501];    // �Ÿ� �迭 ���� �� �ʱ�ȭ (�ִ� ũ�� 501)
bool cycle;             // ���� ����Ŭ ���� ���θ� Ȯ���ϱ� ���� �Ҹ� ����

vector <pair<int, int>> edge[501];  // ������ ����ġ�� �����ϴ� ���� ����Ʈ

void bellman_ford() {
    // ��� �Ÿ��� ���Ѵ�� �ʱ�ȭ
    fill(dist, dist + N + 1, INF);  // dist �迭�� INF�� �ʱ�ȭ (dist[0]���� dist[N]����)
    dist[1] = 0;  // ���� ���(1)�� �Ÿ��� 0���� ����

    // �ִ� N-1�� ���� ��ȭ
    for (int k = 1; k <= N; k++) {
        for (int i = 1; i <= N; i++) {
            for (int j = 0; j < edge[i].size(); j++) {
                int next = edge[i][j].first;  // ������ ���� ���
                int nextcost = edge[i][j].second;  // ������ ����ġ

                // ���� ����� �Ÿ��� ���Ѵ밡 �ƴϰ� �� ª�� ��θ� ã�� ���
                if (dist[i] != INF && dist[next] > dist[i] + nextcost) {
                    dist[next] = dist[i] + nextcost;  // ���� ����� �Ÿ� ����
                    if (k == N) cycle = true;  // N��° �ݺ����� ���ŵǸ� ����Ŭ ����
                }
            }
        }
    }

    // ���� ����Ŭ�� �߰ߵǸ� -1 ���
    if (cycle) cout << -1;
    else {
        for (int i = 2; i <= N; i++)
            // �ش� ���� ���� ��ΰ� ���� ��� -1��, �׷��� ������ �Ÿ��� ���
            cout << (dist[i] != INF ? dist[i] : -1) << "\n";
    }
}

int main() {
    ios::sync_with_stdio(false);  // C ��Ÿ�� ����°��� ����ȭ ��Ȱ��ȭ (����� �ӵ� ���)
    cin.tie(NULL); cout.tie(NULL);  // cin�� cout�� ������ Ǯ���� (����� �ӵ� ���)

    cin >> N >> M;  // ���� ������ ������ �Է¹���
    for (int i = 0; i < M; i++) {
        cin >> x >> y >> z;  // �� ������ ����ġ�� �Է¹���
        edge[x].push_back({ y, z });  // ���� ����Ʈ�� ���� �߰�
    }

    bellman_ford();  // ����-���� �˰��� ����
}
