#include <iostream>
#include <cstdlib>

template <class T, size_t N>
constexpr size_t find_last_dir_delim_constepr(const T(&str)[N]){
	for (size_t i = N; i-- > 0; ) if (str[i] == '/') return i;
	for (size_t i = N; i-- > 0; ) if (str[i] == '\\') return i;
	return 0;
}
#define __FILENAME__ (__FILE__ + find_last_dir_delim_constepr(__FILE__) + 1)

int main()
{
    std::cout << __FILENAME__ << std::endl;
}
