#include <iostream>
#include <vector>
#include <set>

int main() {
	std::set<int> s;
	std::vector<int> vec{ 1, 1, 2, 5, 6, 1, 2, 4 };
	std::cout << "[IN]: ";
	for (auto& v:vec)
	{
		std::cout << v << " ";
		s.insert(v);
	}
	std::cout << "\n[OUT]: ";
	for (auto& m : s)
		std::cout << m << " ";

	return 0;
}