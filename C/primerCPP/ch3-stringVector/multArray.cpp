#include <iostream>

const int rowCnt = 10;
const int colCnt = 10;

int main()
{
	int ia[rowCnt][colCnt];
	int cnt = 0;
	for(auto &row : ia){
		for(auto &col : row){
			col = cnt;
			cnt++;
		}
	}

	for(auto &row : ia){
		for(auto &col : row){
			std::cout << col << " ";
		}
		std::cout << std::endl;
	}
}
