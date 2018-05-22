#include "jxcutils.h"
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
//顺序容器
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <array>
//关联容器
#include <set>
#include <map>
//multiset,multimap
//无序关联容器
#include <unordered_set>
#include <unordered_map>
//容器适配器
#include <stack>
#include <queue>
//算法
#include <algorithm>
#include <numeric>
#include <iterator>
#include <functional>
//调试
#include <cassert>
using namespace std;

#define VIEW_SEQ(sq) \
{\
	cout << "----start of " << #sq << "----" << endl;\
	for(auto e : sq) cout << e << " "; cout << endl;\
	cout << "----end of " << #sq << "----" << endl;\
}

#define SEQ_SIZE(sq) \
{\
	cout << #sq " size: " << sq.size() << " capacity: " << sq.capacity() << endl;\
}
