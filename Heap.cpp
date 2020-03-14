#include <iostream>
#include "Heap.h"
using namespace std;

int main()
{
    int a[] = {10,11,13,12,16,18,15,17,14,19};
    // Heap<int,Greater<int>> hp1(a,sizeof(a)/sizeof(a[0])); 最大堆
    // Heap<int,Less<int>> hp1(a,sizeof(a)/sizeof(a[0])); 最小堆
    Heap<int> hp1(a,sizeof(a)/sizeof(a[0])); // 缺省，最小堆
    hp1.Push(15);
    return 0;
}
