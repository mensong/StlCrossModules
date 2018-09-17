// CrossModules_test_dll.cpp : 定义 DLL 应用程序的导出函数。
//

#include "stdafx.h"
#include "CrossModules_test_dll.h"


// 这是导出函数的一个示例。
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_vector(GL::vector<int>& vct)
{
	vct.push_back(0);
	vct.push_back(1);
	vct.push_back(2);
	vct.push_back(3);
}

CROSSMODULES_TEST_DLL_API GL::string fnCrossModules_test_string(void)
{
	std::string ss = "Gergul";
	return ss.c_str();
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_set(GL::set<GL::wstring>& st)
{
	st.insert(L"gergul");
	st.insert(L"123");
	st.insert(L"456");
	st.insert(L"789");
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_map(GL::map<int, GL::string>& mp)
{
	mp[0] = "123";
	mp[1] = "456";
	mp[2] = "789";
	mp[3] = "Gergul";
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_multimap(GL::multimap<int, GL::string>& mmp)
{
	mmp.insert(std::make_pair(0, "123"));
	mmp.insert(std::make_pair(0, "456"));
	mmp.insert(std::make_pair(0, "789"));
	mmp.insert(std::make_pair(0, "gergul"));
	mmp.insert(std::make_pair(1, "123"));
	mmp.insert(std::make_pair(1, "456"));
	mmp.insert(std::make_pair(1, "789"));
	mmp.insert(std::make_pair(1, "gergul"));
}


CROSSMODULES_TEST_DLL_API void fnCrossModules_test_deque(GL::deque<int>& dq)
{
	dq.push_back(0);
	dq.push_back(1);
	dq.push_back(2);
	dq.push_back(3);
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_list(GL::list<int>& lst)
{
	lst.push_back(0);
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_forwardlist(GL::forward_list<int>& flst)
{
	flst.push_front(0);
	flst.push_front(1);
	flst.push_front(2);
	flst.push_front(3);
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_multiset(GL::multiset<int>& mst)
{
	mst.insert(0);
	mst.insert(0);
	mst.insert(1);
	mst.insert(1);
	mst.insert(2);
	mst.insert(2);
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_unordered_set(GL::unordered_set<int>& unst)
{
	unst.insert(0);
	unst.insert(1);
	unst.insert(2);
	unst.insert(3);
	unst.insert(4);
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_unordered_multiset(GL::unordered_multiset<int>& umst)
{
	umst.insert(0);
	umst.insert(1);
	umst.insert(2);
	umst.insert(3);
	umst.insert(4);
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_unordered_map(GL::unordered_map<int, int>& ummp)
{
	ummp[0] = 1;
	ummp[1] = 2;
	ummp[2] = 3;
	ummp[3] = 4;
	ummp[4] = 5;
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_unordered_multimap(GL::unordered_multimap<int, int>& ummp)
{
	ummp.insert(std::make_pair(0, 1));
	ummp.insert(std::make_pair(0, 2));
	ummp.insert(std::make_pair(1, 1));
	ummp.insert(std::make_pair(1, 2));
	ummp.insert(std::make_pair(2, 1));
	ummp.insert(std::make_pair(2, 2));
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdvector(std::vector<int>& vct)
{
	vct.push_back(0);
	vct.push_back(1);
	vct.push_back(2);
	vct.push_back(3);
}

CROSSMODULES_TEST_DLL_API std::string fnCrossModules_test_stdstring(void)
{
	std::string ss = "Gergul";
	return ss.c_str();
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdset(std::set<std::wstring>& st)
{
	st.insert(L"gergul");
	st.insert(L"123");
	st.insert(L"456");
	st.insert(L"789");
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdmap(std::map<int, std::string>& mp)
{
	mp[0] = "123";
	mp[1] = "456";
	mp[2] = "789";
	mp[3] = "Gergul";
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdmultimap(std::multimap<int, std::string>& mmp)
{
	mmp.insert(std::make_pair(0, "123"));
	mmp.insert(std::make_pair(0, "456"));
	mmp.insert(std::make_pair(0, "789"));
	mmp.insert(std::make_pair(0, "gergul"));
	mmp.insert(std::make_pair(1, "123"));
	mmp.insert(std::make_pair(1, "456"));
	mmp.insert(std::make_pair(1, "789"));
	mmp.insert(std::make_pair(1, "gergul"));
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stddeque(std::deque<int>& dq)
{
	dq.push_back(0);
	dq.push_back(1);
	dq.push_back(2);
	dq.push_back(3);
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdlist(std::list<int>& lst)
{
	lst.push_back(0);
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdforwardlist(std::forward_list<int>& flst)
{
	flst.push_front(0);
	flst.push_front(1);
	flst.push_front(2);
	flst.push_front(3);
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdmultiset(std::multiset<int>& mst)
{
	mst.insert(0);
	mst.insert(0);
	mst.insert(1);
	mst.insert(1);
	mst.insert(2);
	mst.insert(2);
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdunordered_set(std::unordered_set<int>& unst)
{
	unst.insert(0);
	unst.insert(1);
	unst.insert(2);
	unst.insert(3);
	unst.insert(4);
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdunordered_multiset(std::unordered_multiset<int>& umst)
{
	umst.insert(0);
	umst.insert(1);
	umst.insert(2);
	umst.insert(3);
	umst.insert(4);
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdunordered_map(std::unordered_map<int, int>& ummp)
{
	ummp[0] = 1;
	ummp[1] = 2;
	ummp[2] = 3;
	ummp[3] = 4;
	ummp[4] = 5;
}

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdunordered_multimap(std::unordered_multimap<int, int>& ummp)
{
	ummp.insert(std::make_pair(0, 1));
	ummp.insert(std::make_pair(0, 2));
	ummp.insert(std::make_pair(1, 1));
	ummp.insert(std::make_pair(1, 2));
	ummp.insert(std::make_pair(2, 1));
	ummp.insert(std::make_pair(2, 2));
}
