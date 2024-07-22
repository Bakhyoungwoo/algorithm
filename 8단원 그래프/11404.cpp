#include <iostream>     // ����� ��Ʈ�� ���̺귯�� ����
#include <algorithm>    
#include <vector>       
using namespace std;    


int n, m;               // ��� ����(n)�� ���� ����(m)�� ������ ����
int a[104][104];        // �׷����� ���� ����� ������ 2���� �迭
const int INF = 1e9;    // ���Ѵ븦 ��Ÿ���� ���


int main(void) {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); 
    cout.tie(0); 

    cin >> n >> m;  // ���� ������ ������ �Է¹���

    // ���� ��� �ʱ�ȭ
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i == j) a[i][j] = 0;  // �ڱ� �ڽ������� �Ÿ��� 0
            else a[i][j] = INF;       // �ٸ� ������ �ʱ� �Ÿ��� ���Ѵ�
        }
    }

    // ���� ���� �Է�
    for (int i = 0; i < m; i++) {
        int st, en, v;
        cin >> st >> en >> v;  // ���� ���, �� ���, ����ġ�� �Է¹���
        a[st][en] = min(a[st][en], v);  // ���� ���� �� �ּ� ����ġ ���� ����
    }

    // �÷��̵�-�ͼ� 
    for (int k = 1; k <= n; k++) {         // ���İ��� ��� k
        for (int i = 1; i <= n; i++) {     // ��� ��� i
            for (int j = 1; j <= n; j++) { // ���� ��� j
                // i���� j�� ���� ���� �Ÿ��� k�� ���İ��� �Ÿ��� ���Ͽ� �ּ� �Ÿ� ����
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
            }
        }
    }

    // ��� ���
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == INF) cout << "0 ";  // �� �� ���� ��� 0 ���
            else cout << a[i][j] << ' ';       // �� �� �ִ� ��� �ּ� �Ÿ� ���
        }
        cout << '\n';
    }

    return 0;
}
