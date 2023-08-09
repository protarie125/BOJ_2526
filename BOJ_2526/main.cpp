#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <tuple>
#include <string>
#include <algorithm>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	ll n, p;
	cin >> n >> p;

	auto isVisited = vb(n + 1, false);

	ll now = n;
	vl list;
	list.reserve(n);
	while (true) {
		if (isVisited[now]) {
			const auto fit = find(list.begin(), list.end(), now);
			cout << distance(fit, list.end());
			return 0;
		}

		isVisited[now] = true;

		list.push_back(now);

		now *= n;
		now %= p;
	}

	return 0;
}