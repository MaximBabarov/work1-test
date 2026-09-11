#include <locale.h>
#include <stdio.h>

void main()
{
	int width = 80;
	setlocale(LC_ALL, "RUS");
	puts("*******************************************");
	puts("*                                         *");
	puts("* тема: разработка консольного приложения *");
	puts("*                                         *");
	puts("* Выполнил М.А.Бабаров                    *");
	puts("*                                         *");
	puts("*******************************************");
	getchar();
}