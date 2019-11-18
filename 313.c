
#include<windows.h>
int mian()
{
	int i = 0;
	while (i <= 10)
	{
		if (i == 5)
			break;
		printf("%d", i);
		i++;
	}
	system("pause");
	return 0;
}