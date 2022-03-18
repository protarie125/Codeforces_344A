#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;

	string mg;
	cin >> mg;

	auto ct = int{ 1 };

	while (1 < (n--)) {
		string mg2;
		cin >> mg2;

		if (mg != mg2) {
			mg = mg2;
			++ct;
		}
	}

	cout << ct;

	return 0;
}