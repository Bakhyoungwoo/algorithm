#include <iostream>
using namespace std;
#define MAX 1000001

long long A[MAX];
long long sum[MAX];

int main(int argc, char* argv[]) {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	long long count = 0;
	int N, M;
	cin >> N >> M;

	sum[0] = 0;
	for (int i = 1; i <= N; i++) {
		int num;
		cin >> num;

		sum[i] = (sum[i - 1] + num) % M;
		if (sum[i] == 0)
			count++;

		A[sum[i]]++;
	}

	for (int i = 0; i < M; i++)
		count += A[i] * (A[i] - 1) / 2;

	cout << count << endl;

	return 0;
}