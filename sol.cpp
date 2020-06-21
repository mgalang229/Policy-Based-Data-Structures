#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, 
less<int>, rb_tree_tag, 
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	indexed_set s;
	s.insert(2);
	s.insert(3);
	s.insert(7);
	s.insert(9);
	cout << s.order_of_key(7) << " ";
	cout << s.order_of_key(6) << " ";
	cout << s.order_of_key(8) << " ";
	cout << "\n";
	return 0;
}
