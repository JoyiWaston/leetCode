#include "TwoNumSum.hpp"
#include "DeleteSame.hpp"
#include "向量反转.hpp"
//1、定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。
//	 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

void twoNumSum()
{
	Solution01 s1;
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

// 2、给你两个 非空 的链表，表示两个非负的整数。它们每位数字都是按照 逆序 的方式存储的，并且每个节点只能存储 一位 数字。
// 请你将两个数相加，并以相同形式返回一个表示和的链表。你可以假设除了数字 0 之外，这两个数都不会以 0 开头。
void deleteSame()
{
	Solution02 S2;
	vector<int> v1;
	int length;
	v1.push_back(1); v1.push_back(2);
	v1.push_back(2); v1.push_back(3);
	v1.push_back(3); v1.push_back(3);
	v1.push_back(4); v1.push_back(4);
	v1.push_back(4); v1.push_back(5);

	cout << "v1向量内当前为：" << endl;
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;

	length = S2.removeDuplicates(v1);
	for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl << "去重后向量长：" << length << endl;

}

//rotate
void rotate()
{
	Solution05 S;
	vector<int> v1 = { 5,1,9,11 };
	vector<int> v2 = { 2,4,8,10 };
	vector<int> v3 = { 13,3,6,7 };
	vector<int> v4 = { 15,14,12,19 };

	vector<vector<int>> vec;
	vec.push_back(v1);
	vec.push_back(v2);
	vec.push_back(v3);
	vec.push_back(v4);

	for_each(vec.begin(), vec.end(), [](vector<int> v) {for (int i = 0; i < v.size(); i++)cout << v[i] << " "; cout << endl; });

	vector<vector<int>> rot = S.rotate(vec);
	for_each(rot.begin(), rot.end(), [](vector<int> v) {for (int i = 0; i < v.size(); i++)cout << v[i] << " "; cout << endl; });
}


int main()
{
	/*twoNumSum();
	cout << "--------------------------------" << endl;
	deleteSame();*/
	rotate();

	return 0;
}