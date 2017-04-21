#include <iostream>
#include <vector>
#include <deque>
#include "mapabsolutevalue.h"
#include "maptriple.h"
#include "filterodd.h"
#include "filterfortwodigitpositive.h"
#include "reduceminimum.h"
#include "reducegcd.h"
using namespace std;

int main()
{
    deque<int> *L = new deque<int>();//题目给的L序列，用队列储存
    int input;//储存输入的数字
	for (int i = 0; i < 20; i++)
	{
        cin >> input;
		L->push_back(input);
        while(cin.get()!=',' && i!=19);//这个可以保证每次在读到逗号后才会继续读数字
	}

    MapTriple *mapTriple = new MapTriple();//声明类指针
	MapAbsoluteValue *mapAbsoluteValue = new MapAbsoluteValue();
    deque<int> L_1 = mapAbsoluteValue->map(mapTriple->map(*L));//算出题目中的L'

    FilterOdd *filterOdd = new FilterOdd();//声明类指针
	FilterForTwoDigitPositive *filterForTwoDigitPositive = new FilterForTwoDigitPositive();
    deque<int> L_2 = filterOdd->filter(filterForTwoDigitPositive->filter(L_1));//算出题目中的L''

    vector<int> *L_2_vec = new vector<int>();//将L''转换成向量形式
    for (deque<int>::iterator it = L_2.begin(); it != L_2.end(); it++)//这是迭代器，意思是遍历每个元素，元素的值是*it
		L_2_vec->push_back(*it);

    ReduceMinimum *reduceMinimum = new ReduceMinimum();//声明类指针
	ReduceGCD *reduceGCD = new ReduceGCD();
    vector<int> results[2];//题中要的两个结果
	results[0] = reduceMinimum->reduce(*L_2_vec);
	results[1] = reduceGCD->reduce(*L_2_vec);

	cout << results[0].at(0) << " " << results[1].at(0);
	return 0;
}

