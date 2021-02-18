#include <iostream>
int main()
{
	int cur = 0, test = 0;
	if (std::cin >> cur)
	{
		int count = 1;
		while (std::cin >> test)
		{
			if (cur == test)
				++count;
			else
			{
				std::cout << cur << " occurs " << count << " times.\n";
				cur = test;
				count = 1;
			}
		}
		std::cout << cur << " occurs " << count << " times.\n";
	}
	return 0;
}