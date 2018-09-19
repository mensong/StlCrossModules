#include <StlApiDef.h>

#ifdef CROSSMODULES_TEST_DLL_EXPORTS
#define CROSSMODULES_TEST_DLL_API __declspec(dllexport)
#else
#define CROSSMODULES_TEST_DLL_API __declspec(dllimport)
#endif


CROSSMODULES_TEST_DLL_API void fnCrossModules_test_vector(GL::vector<int>& vct);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdvector(std::vector<int>& vct);

CROSSMODULES_TEST_DLL_API GL::string fnCrossModules_test_string(void);
CROSSMODULES_TEST_DLL_API std::string fnCrossModules_test_stdstring(void);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_set(GL::set<GL::wstring>& st);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdset(std::set<std::wstring>& st);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_map(GL::map<int, GL::string>& mp);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdmap(std::map<int, std::string>& mp);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_multimap(GL::multimap<int, GL::string>& mmp);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdmultimap(std::multimap<int, std::string>& mmp);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_deque(GL::deque<int>& dq);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stddeque(std::deque<int>& dq);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_list(GL::list<int>& lst);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdlist(std::list<int>& lst);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_forwardlist(GL::forward_list<int>& flst);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdforwardlist(std::forward_list<int>& flst);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_multiset(GL::multiset<int>& mst);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdmultiset(std::multiset<int>& mst);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_unordered_set(GL::unordered_set<int>& unst);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdunordered_set(std::unordered_set<int>& unst);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_unordered_multiset(GL::unordered_multiset<int>& umst);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdunordered_multiset(std::unordered_multiset<int>& umst);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_unordered_map(GL::unordered_map<int, int>& ummp);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdunordered_map(std::unordered_map<int, int>& ummp);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_unordered_multimap(GL::unordered_multimap<int, int>& ummp);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdunordered_multimap(std::unordered_multimap<int, int>& ummp);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stringbuf(GL::stringbuf& sb);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdstringbuf(std::stringbuf& sb);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_istringstream(GL::istringstream& iss);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdistringstream(std::istringstream& iss);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_ostringstream(GL::ostringstream& os);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdostringstream(std::ostringstream& os);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stringstream(GL::stringstream& ss); 
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdstringstream(std::stringstream& ss);