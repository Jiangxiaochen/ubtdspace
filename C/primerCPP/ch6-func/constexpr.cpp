#include <cstdint>
using namespace std;

constexpr int new_sz() {return 42;}

constexpr size_t scale(size_t cnt) {return new_sz() * cnt;}


int main()
{
	int i = 2;
	constexpr size_t a = scale(i);
}
