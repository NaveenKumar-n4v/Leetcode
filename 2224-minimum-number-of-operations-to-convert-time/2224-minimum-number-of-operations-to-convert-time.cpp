class Solution {
public:
    int convertTime(string current, string correct) {
        
    int t1 = stoi(current.substr(0, 2));
	int t2 = stoi(current.substr(3, INT_MAX));
	int t3 = stoi(correct.substr(0, 2));
	int t4 = stoi(correct.substr(3, INT_MAX));
	// cout << t1 << " " << t2 << " " << t3 << " " << t4 << endl;
	int mini = t1 * 60 + t2;
	int maxi = t3 * 60 + t4;
	int val = abs(maxi - mini);
	int count = 0;
        
	count += val / 60;
	val = val % 60;

	count += val / 15;
	val = val % 15;

	count += val / 5;
	val = val % 5;

	count += val / 1;
	val = val % 1;
        
         
    return count;
    }
};