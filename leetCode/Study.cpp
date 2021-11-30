#include "TwoNumSum.hpp"
//1、定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
//	 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

void twoNumSum()
{
	Solution s1;
	vector<int> v1;
	vector<int> v2;

	v1.push_back(1); v1.push_back(3);
	v1.push_back(5); v1.push_back(7);
	v1.push_back(11); v1.push_back(13);
	v1.push_back(17); v1.push_back(19);
	v1.push_back(23); v1.push_back(29);

	
	for_each(v1.begin(), v1.end(), [](int x) {cout << x << " "; });
	cout << endl;


	v2 = s1.twoSum01(v1, 24);
	for_each(v2.begin(), v2.end(), [](int x) {cout << x << " "; });
	cout << endl;

	v2 = s1.twoSum02(v1, 24);
	for_each(v2.begin(), v2.end(), [](int x) {cout << x << " "; });
	cout << endl;

}



int main()
{
	twoNumSum();

	return 0;
}