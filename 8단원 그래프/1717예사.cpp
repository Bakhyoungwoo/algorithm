#include<iostream>
#include<vector>

using namespace std;

// n: ������ ����
// m: ������ ����
int n, m;
// �� ������ �θ� ��带 �����ϴ� �迭
int parent[1000001];

// Ư�� ���� x�� �θ� ��带 ã�� �Լ� 
int getParent(int x) {
    if (parent[x] == x) return x; // x�� �θ� ����̸� x ��ȯ
    // �θ� ��带 ��������� ã�� ��θ� �����Ͽ� �θ� ��带 ����
    return parent[x] = getParent(parent[x]);
}

// �� ���� a�� b�� ���� �������� ��ġ�� �Լ�
void unionParent(int a, int b) {
    a = getParent(a); // a�� �θ� ��� ã��
    b = getParent(b); // b�� �θ� ��� ã��
    if (a > b) parent[a] = b; // �� ���� ��ȣ�� �θ� ��带 �θ�� ����
    else parent[b] = a;
}

// �� ���� a�� b�� ���� ���տ� ���ϴ��� Ȯ���ϴ� �Լ�
void findParent(int a, int b) {
    a = getParent(a); // a�� �θ� ��� ã��
    b = getParent(b); // b�� �θ� ��� ã��
    if (a == b) cout << "YES\n"; // ���� ���տ� ���ϸ� YES ���
    else cout << "NO\n"; // �ٸ� ���տ� ���ϸ� NO ���
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // n: ������ ����, m: ������ ���� �Է�
    cin >> n >> m;
    // �ʱ�ȭ: �� ������ �θ� ��带 �ڱ� �ڽ����� ����
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }
    // m���� ������ ó��
    for (int i = 0; i < m; i++) {
        int o, a, b;
        // ������ ���� (o)�� �� ���� (a, b) �Է�
        cin >> o >> a >> b;
        if (!o) { // ������ 0�̸� union ����
            unionParent(a, b);
        }
        else { // ������ 1�̸� find ����
            findParent(a, b);
        }
    }

    return 0;
}
