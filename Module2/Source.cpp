#include "Simple2DArray.h"
//void sample()
//{
//	Example x1;
//	Example x2 = x1;// создается просто указатель на одну память
//	Example x3(x1);//создаем клона
//}
void main()
{
	/*SimpleArray arr(3);
	//sample();
	arr.a[0] = 0;
	arr.a[1] = 1;
	arr.a[2] = 2;
	SimpleArray arr2(arr);*/

	Simple2DArray arr(2, 2);
	if (arr.a != nullptr) {
		for (int i = 0; i < arr.m; i++)
		{
			for (int j = 0; j < arr.n; j++) {
				std::cout << arr.a[i][j] << " ";
			}
			std::cout << std::endl;
		}
	}
	else {
		std::cout << "nullptr";
	}
	//Simple2DArray arr2(arr);

	system("pause");
}