#include <iostream>

using namespace std;

int solve(int a, int b) {
	auto result = int{ a };
	result %= 10;

	if (0 == result) {
		return 10;
	}

	while (1 < b) {
		result *= a;
		result %= 10;

		b -= 1;
	}

	return result;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int T;
	cin >> T;
	for (int t = 0; t < T; ++t) {
		int a, b;
		cin >> a >> b;

		cout << solve(a, b) << '\n';
	}

	return 0;
}