#include <StlApiDef.h>

#ifdef CROSSMODULES_TEST_DLL_EXPORTS
#define CROSSMODULES_TEST_DLL_API __declspec(dllexport)
#else
#define CROSSMODULES_TEST_DLL_API __declspec(dllimport)
#endif


CROSSMODULES_TEST_DLL_API void fnCrossModules_test_vector(GL::vector<int>& vct);
CROSSMODULES_TEST_DLL_API GL::string fnCrossModules_test_string(void);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_set(GL::set<GL::wstring>& st);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_map(GL::map<int, GL::string>& mp);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_multimap(GL::multimap<int, GL::string>& mmp);

CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdvector(std::vector<int>& vct);
CROSSMODULES_TEST_DLL_API std::string fnCrossModules_test_stdstring(void);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdset(std::set<std::wstring>& st);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdmap(std::map<int, std::string>& mp);
CROSSMODULES_TEST_DLL_API void fnCrossModules_test_stdmultimap(std::multimap<int, std::string>& mmp);