#include <locale.h>
#include <stdio.h>
void name();
void date();

void main()
{
	name();
	date();
	getchar();
}
void name() 
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
void date()
{
	puts(" _   __     __        _   __   __   __ ");
	puts("  | |  |   |  | |_|    | |  | |  | |__|");
	puts("  | |  |   |  |   |   /  |  | |  | |  |");
	puts("  |  --     --    |   --  --   --   -- ");
}

