# StlCrossModules
使用c++标准库作为传递参数时在跨模块时可能崩溃，经改进后可以正常使用。


# 使用：
需要c++14的支持

std::string   => GL::string

std::wstring   => GL::wstring

std::vector   => GL::vector

std::set      => GL::set

std::map      => GL::map

std::multimap => GL::multimap

std::deque    => GL::deque

std::list     => GL::list

std::forward_list       => GL::forward_list

std::multiset           => GL::multiset

std::unordered_set      => GL::unordered_set

std::unordered_multiset => GL::unordered_multiset

std::unordered_map      => GL::unordered_map

std::unordered_multimap => GL::unordered_multimap

std::stringbuf          => GL::stringbuf     

std::wstringbuf         => GL::wstringbuf    

std::istringstream      => GL::istringstream 

std::wistringstream     => GL::wistringstream

std::ostringstream      => GL::ostringstream 

std::wostringstream     => GL::wostringstream

std::stringstream       => GL::stringstream  

std::wstringstream      => GL::wstringstream 
