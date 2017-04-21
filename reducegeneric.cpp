#include "reducegeneric.h"

ReduceGeneric::ReduceGeneric()
{

}

/**
 *
 */
std::vector<int> ReduceGeneric::reduce(std::vector<int> vec)
{
    static int vectorIndex = 1;
    static int result = vec.at(0);
    /**
     * 以下部分是最后添加的，为的是在第二个类调用这个函数的时候
     * 把上面的static刷新到最新
     */
    static bool queueSizeNeedToBeFlush = false;
    if(queueSizeNeedToBeFlush)
    {
        vectorIndex = 1;
        result = vec.at(0);
        queueSizeNeedToBeFlush = false;
    }
    /** 到这里*/
    if (vectorIndex == (int)vec.size())//递归到最底层，这时候所有元素都已经binary operated，但因为题目要求返回vector<int>，没什么办法，强行把result塞到一个新的vector返回回去
    {
        queueSizeNeedToBeFlush = true;

        std::vector<int> resultNumber;
        resultNumber.push_back(result);
        return resultNumber;
    }
    result = binaryOperator(result, vec.at(vectorIndex++));//使用binaryOperator函数给result赋一个新的值。并最后把vector的索引加1
    return reduce(vec);
}
