#include<iostream>
using namespace std;
int main(void) {
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int N;
	cin >> N;

	for (int i = N; i >= 1; i--) {
		cout << i << "\n";
	}
}