#define _CRT_SECURE_NO_WARNINGS
#include"jiegou.h"
Node ROOT =
{
	"\0",
	NULL,
	NULL
};
node root = &ROOT;
int main()
{
	int deep = hello();
	while (input(&deep) && makenode(root, deep) != 0)
	{
		continue;
	}
	return 0;
}