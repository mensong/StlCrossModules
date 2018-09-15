# StlCrossModules
std::string std::vector std::set std::map std::multimap在跨模块时可能崩溃，经改进后可以正常使用。

请使用：
std::string   => GL::string
std::vector   => GL::vector
std::set      => GL::set
std::map      => GL::map
std::multimap => GL::multimap