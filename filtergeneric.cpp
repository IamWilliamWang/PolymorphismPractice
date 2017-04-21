#include "filtergeneric.h"

FilterGeneric::FilterGeneric()
{

}

/**
  * 函数思想：最后添加的那几行可以先不看，出去那一片就是标准的尾递归格式，这个函数
  * 就是一直做出队，用g()进行判断，符合要求的就入队的工作。
  * 类比：与循环的思想差不多，只不过题目必须要用递归，所以这里就采用的是尾递归。
  */
std::deque<int> FilterGeneric::filter(std::deque<int> deq)
{
    static int untreatedElementsCount = deq.size();
    /**
     * 以下部分是最后添加的，为的是在第二个类调用这个函数的时候
     * 把上面的static变量刷新到最新
     */
    static bool queueSizeNeedToBeFlush = false;
    if(queueSizeNeedToBeFlush)
    {
        untreatedElementsCount = deq.size();
        queueSizeNeedToBeFlush = false;
    }
    /** 到这里*/
    if (untreatedElementsCount == 0)//这时候递归到了最底层
    {
        queueSizeNeedToBeFlush = true;//提醒下次调用这个函数的时候一定要刷新untreatedElementsCount
        return deq;
    }
    int number = deq.front();//这两行的意思是
    deq.pop_front();//出队列一个元素，给number
    if(g(number))
        deq.push_back(number);
    untreatedElementsCount--;
    return filter(deq);
}
