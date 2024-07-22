#include<iostream>
#include<vector>

using namespace std;

// n: 원소의 개수
// m: 연산의 개수
int n, m;
// 각 원소의 부모 노드를 저장하는 배열
int parent[1000001];

// 특정 원소 x의 부모 노드를 찾는 함수 
int getParent(int x) {
    if (parent[x] == x) return x; // x가 부모 노드이면 x 반환
    // 부모 노드를 재귀적으로 찾아 경로를 압축하여 부모 노드를 설정
    return parent[x] = getParent(parent[x]);
}

// 두 원소 a와 b를 같은 집합으로 합치는 함수
void unionParent(int a, int b) {
    a = getParent(a); // a의 부모 노드 찾기
    b = getParent(b); // b의 부모 노드 찾기
    if (a > b) parent[a] = b; // 더 작은 번호의 부모 노드를 부모로 설정
    else parent[b] = a;
}

// 두 원소 a와 b가 같은 집합에 속하는지 확인하는 함수
void findParent(int a, int b) {
    a = getParent(a); // a의 부모 노드 찾기
    b = getParent(b); // b의 부모 노드 찾기
    if (a == b) cout << "YES\n"; // 같은 집합에 속하면 YES 출력
    else cout << "NO\n"; // 다른 집합에 속하면 NO 출력
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    // n: 원소의 개수, m: 연산의 개수 입력
    cin >> n >> m;
    // 초기화: 각 원소의 부모 노드를 자기 자신으로 설정
    for (int i = 1; i <= n; i++) {
        parent[i] = i;
    }
    // m개의 연산을 처리
    for (int i = 0; i < m; i++) {
        int o, a, b;
        // 연산의 종류 (o)와 두 원소 (a, b) 입력
        cin >> o >> a >> b;
        if (!o) { // 연산이 0이면 union 연산
            unionParent(a, b);
        }
        else { // 연산이 1이면 find 연산
            findParent(a, b);
        }
    }

    return 0;
}
