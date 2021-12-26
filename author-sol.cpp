#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);                         
	int n, k;
	cin >> n >> k;
	vector<int> a(n);
	set<int> s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s.insert(a[i]);
	}
	// count the occurrences of every utensil
	vector<int> counter(*max_element(a.begin(), a.end()) + 1, 0);
	for (int i = 0; i < n; i++) {
		counter[a[i]]++;
	}                
	// calculate the no. of dishes per guest
	int max_utensil = *max_element(counter.begin(), counter.end());
	int dishes = (max_utensil + k - 1) / k;
	// calculate the number of utensils per guest 
	int utensils = (int) s.size();
	int per_guest = utensils * dishes;
	// calculate the total number of utensils that should present
  int total_utensils = per_guest * k;
  // final answer
	int ans = total_utensils - n;
	cout << ans << '\n';
	return 0;
}
