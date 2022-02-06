#define ll long long
class Solution {
public:
    long long smallestNumber(long long digit) {
        	if (digit < 0) {
		vector<ll>v;
		ll count = 0;
		while (digit < 0) {
			ll x = digit % 10;
			digit = digit / 10;
			v.push_back(x);
			if (x == 0) {
				count += 1;
			}
		}
		sort(v.begin(), v.end());
		ll n = v.size();
		// swap(v[n - count - 1], v[n - 1]);
		reverse(v.begin(), v.end());
		ll p = 0;
		ll decimal = 1;
		for (auto i : v) {
			p += i * decimal;
			decimal *= 10;
		}
                return p;
	}
	if (digit > 0) {
		ll count2 = 0;
		vector<ll>v2;
		while (digit > 0) {
			ll y = digit % 10;
			digit = digit / 10;
			v2.push_back(y);
			if (y == 0) {
				count2 += 1;
			}
		}
		sort(v2.begin(), v2.end());
		ll k = v2.size();
		swap(v2[count2], v2[0]);
		reverse(v2.begin(), v2.end());
		ll p = 0;
		ll decimal = 1;
		for (auto i : v2) {
			p += i * decimal;
			decimal *= 10;
		}
        return p;
	}  
    return 0;
    }
};