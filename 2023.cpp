//#include <iostream>
//#include <string>
//#include <vector>
//#include <stack>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//// 소수의 원하는 길이를 저장할 전역 변수
//static int N;
//
//// 주어진 숫자가 소수인지 확인하는 함수
//bool isPrime(int num) {
//    if (num < 2) return false; // 2보다 작은 숫자는 소수가 아님
//    for (int i = 2; i <= num / 2; i++) {
//        if ((num % i) == 0) return false; // num이 2부터 num/2까지의 어떤 숫자로도 나누어지면 소수가 아님
//    }
//    return true; // 나누어지는 숫자가 없으면 소수임
//}
//
//// 재귀적 깊이 우선 탐색 함수로 길이가 N인 소수를 생성 및 출력
//void dfs(int x, int digitCount) {
//    if (digitCount == N) {
//        if (isPrime(x)) {
//            cout << x << "\n"; // N 자릿수의 소수를 출력
//        }
//        return; // 현재 재귀 경로 종료
//    }
//
//    // 숫자의 각 자릿수가 홀수인지를 보장하기 위해 홀수 자릿수를 반복
//    for (int i = 1; i < 10; i += 2) {
//        int newNumber = x * 10 + i;
//        if (isPrime(newNumber)) {
//            dfs(newNumber, digitCount + 1); // 새 숫자가 소수이면 재귀적으로 숫자를 생성
//        }
//    }
//}
//
//int main() {
//    ios_base::sync_with_stdio(0); // 입출력 최적화
//    cin.tie(0); // cin과 cout의 묶음을 해제
//    cout.tie(0); // cout의 묶음을 해제
//
//    cin >> N; // 소수의 원하는 길이를 입력 받음
//
//    // 한 자리 소수로 DFS 시작
//    dfs(2, 1);
//    dfs(3, 1);
//    dfs(5, 1);
//    dfs(7, 1);
//
//    return 0;
//}
