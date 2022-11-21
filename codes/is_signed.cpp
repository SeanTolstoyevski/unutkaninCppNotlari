#include <type_traits>
#include <iostream>

int main() {
	auto charSigned = std::is_signed<unsigned char>::value;
	std::cout << std::boolalpha <<
		"Is __unsigned char__ signed? " << charSigned << "\n";
	return 0;
}
