//牛牛定义排序子序列为一个数组中一段连续的子序列, 并且这段子序列是非递增或者非递减排序的。
//牛牛有一个长度为n的整数数组A, 他现在有一个任务是把数组A分为若干段排序子序列, 
//牛牛想知道他最少可以把这个数组分为几段排序子序列.
//如样例所示, 牛牛可以把数组A划分为[1, 2, 3]和[2, 2, 1]两个排序子序列, 至少需要划分为2个排序子序列, 所以输出2
#include<iostream> 
#include<vector> 
using namespace std;

int main() {
	int n;    
	cin >> n;
	vector<int> a;    
	a.resize(n + 1);    
	a[n] = 0;

	int i = 0;    
	for (i = 0; i < n; ++i) {
		cin >> a[i];
	}

	i = 0;    
	int count = 0;    
	while (i < n) {         
		if (a[i] < a[i + 1]){            
			while (i < n && a[i] <= a[i + 1]){
				i++;
			}
		count++;            
		i++;
		}
		else if (a[i] == a[i + 1]) { 
			i++; 
		}
		else {            
			while (i < n && a[i] >= a[i + 1]) {
				i++;
			}
		count++;            
		i++;
		}    
	}

	cout << count << endl;

	return 0; 
}
