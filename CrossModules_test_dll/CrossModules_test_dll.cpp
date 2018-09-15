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
