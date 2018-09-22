#include <iostream>

class Point
{
private:
	int x, y;

public:
	Point(int a, int b)
	{
		x = a;
		y = b;
	}

	void MovePoint(int a, int b)
	{
		x = a;
		y = b;
	}

	void print()
	{
		std::cout << " x= " << x << " \ty=" << y << std::endl;
	}
};

int main()
{
	Point point1(10, 10);
	point1.MovePoint(2, 2);
	point1.print();

	return 0;
}

