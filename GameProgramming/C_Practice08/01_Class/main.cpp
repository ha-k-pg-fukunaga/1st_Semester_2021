#include <stdio.h>
#include <stdlib.h>

struct StructHoge
{
	int value;
};

class ClassHoge
{
	int value;

	void PrintHelloWorld();

};

void ClassHoge::PrintHelloWorld()
{
	printf("Hello World\n");
}

int main(void)
{
	StructHoge struct_hoge;

	return 0;
}