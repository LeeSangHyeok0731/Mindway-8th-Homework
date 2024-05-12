#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char* name[100][100];
	int number, count = 0, number2[100] = { 0 }, ret, j = 0, sum = 0, sum2 = 0, temp[20], temp2;
	scanf("%d", &number);
	for (int i = 0; i < number; i++)
	{
		scanf(" %s", name[i]);
	}
	for (int i = 0; i < number; i++)
	{
		for (int j = 0; j < number; j++)
		{
			ret = strcmp(name[i], name[j]);
			if (ret == 0)
			{
				if (i > j)
				{
					break;
				}
				if (i <= j)
				{
					number2[i]++;
					continue;
				}
			}
		}
	}
		for (int i = 0; i < number; i++)//더많은수 찾기
		{
			if (number2[i] == 0)
				continue;
			if (sum < number2[i])
			{
				sum = number2[i];
			}
		}
	for (int i = 0; i < number; i++)
	{
		if (sum == number2[i])
			count++;
	}
	if (count >= 2)
	{
		for (int i = 0; i < number - 1; i++)//사전식으로 정렬하기
		{
			for (int j = i + 1; j < number; j++)
			{
				if (strcmp(name[i], name[j]) > 0)
				{
					strcpy(temp, name[i]);
					strcpy(name[i], name[j]);
					strcpy(name[j], temp);
					temp2 = number2[i];
					number2[i] = number2[j];
					number2[j] = temp2;
				}
			}
		}
		for (int i = 0; i < number; i++) 
		{
			if (number2[i] == sum)
			{
				printf("%s", name[i]);
				break;
			}
		}
		return 0;
	}
	if (sum == 0)
	{
		printf("%d", name[sum]);
	}
	else 
		printf("%s", name[sum - 1]);
}