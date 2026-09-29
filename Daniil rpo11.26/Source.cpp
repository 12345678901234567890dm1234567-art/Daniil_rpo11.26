#include <iostream>
#include <Windows.h>

int main() // классная
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); // 1251
	srand(time(NULL));

	123;

	return 0;
}



/*29.09.2026
* 
23.09.2026
* int main() // классная2
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); // 1251
	srand(time(NULL));

	const int row = 3, col = 4;

	int zif[row][col];

	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col; j++)
		{
			zif[i][j] = rand() % 10 + 1;
			std::cout << "\t" << zif[i][j] << "\t";
		}
		std::cout << "\n";

	}
	return 0;

}
* int main() // самостоятельная работа
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); // 1251
	srand(time(NULL));

	const int size = 10;
	int zif[size],plus = 0,minus = 0;
	
		for (int i = 0; i < size; i++)
		{
			zif[i] = rand() % 21 - 10;}
		for (int i = 0; i < size; i++)
	
			{
			if (zif[i]>=0)
			{
				plus += zif[i];
			}
			else
			{
				minus += zif[i];
			}
		}
		for (int i = 0; i < size; i++)
		{
			std::cout << zif[i] << "\t";
		}
		std::cout << "\n" << "\t" << plus << "\n";
		std::cout << "\t" << minus << "\n";
	return 0;

}
* int main() // исправлено
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); // 1251
	srand(time(NULL));

	const int size = 5;

	int zif[size];
	
	std::cout << "напишите пять чисел";

	for(int i=0; i<size ; i++)
	{
		std::cin >> std::cin >> zif[i];
	}
	for (int i = 0; i < size; i++)
	{
	std::cout << i+1 << ")"<<zif[i]
	}


	return 0;
}
* int main() // самостоятельно
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8); // 1251
	srand(time(NULL));

	const int size = 5;

	int zif[size];
	
	std::cout << "напишите пять чисел";

	std::cin >> zif[0] >> zif[1] >> zif[2] >> zif[3] >> zif[4];

	std::cout << "\t" << zif[0] << "\t";
	
	std::cout << zif[1] << "\t";
	
	std::cout << zif[2] << "\t";
	
	std::cout << zif[3] << "\t";
	
	std::cout << zif[4];
	
	return 0;
}
int main()  //классная1
{
	SetConsoleCP(CP_UTF8);

	SetConsoleOutputCP(CP_UTF8); // 1251

	srand(time(NULL));

	const int size = 4;

	int arr[size]; //тип_данных имя_массивах [количество ячеек в данном массиве]
	
	std::cout << arr[0] <<"\n";

	std::cout << arr[1] << "\n";

	std::cout << arr[2] << "\n";

	std::cout << arr[3] << "\n";

	return 0;
}
*/
/*
#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	srand(time(NULL));

	int choose = 0, hp =0, randomNumber=0 , number=0;
	int maxHp = 25, maxhphard = 25,chance = 30;
	while (true)
	{
		system("cls");

		std::cout << "\n\n\tДобро пожаловать в..." << "\n\n\t \"УГАДАЙ ЧИСЛО\"\n\n";
		std::cout << "\t1 - Начать игру\n" << "\t2 - Настройки\n" << "\t0 - Выход\n\n";
		std::cout << "Ввод -- ";
		std::cin >> choose;

		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\tВыберите уровень сложности\n\n\n" << "1 - Лёгкий :) (1 - 500)\n" << "2 - Сложный (1 - 5000)\n";
				std::cout << "0 - Выход в меню\n\n" << "Ввод -- \n";
				std::cin >> choose;

				if (choose == 1)
				{
					c
					hp = maxHp;
					while (true)
					{
						system("cls");
						std::cout << "Количество жизней: " << hp << "\n";
						std::cout << "\nВведите число от 1 до 500 -- ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "\n\nПОЗДРАВЛЯМ! ВЫ ВЫИГРАЛИ UWU!!!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "\n\n\tОШИБКА! ВЫ ВЫШЛИ ЗА ЛИМИТЫ!!\n\n";

						}
						else
						{
							hp--;
							if (hp <= 0) {

								std::cout << " вы проиграли / число компьюерабыло:" << randomNumber;
							}
							std::cout << "вы не угадали/n";
							std::cout << "Количество жизней: " << hp << "\n";
							std::cout << "взять подсказку за 1 жизнь (1)?";
							std::cout << "Продолжить любое другое число";
							std::cin >> choose;
							if (choose == 1)
							{
								hp--;

								if (number < randomNumber)
								{
									std::cout << "вфше число меньше компьютерного";
								}
								if (number > randomNumber)
								{
									std::cout << "вфше число больше компьютерного";
								}
								Sleep(1500);
							}
						}
					}

				}
				else if (choose == 2)
				{
					randomNumber = rand() % 5000 + 1;
					hp = maxhphard;
					while (true)
					{
						system("cls");
						std::cout << "Количество жизней: " << hp << "\n";
						std::cout << "\nВведите число от 1 до 5000 -- ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "\n\nПОЗДРАВЛЯМ! ВЫ ВЫИГРАЛИ UWU!!!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "\n\n\tОШИБКА! ВЫ ВЫШЛИ ЗА ЛИМИТЫ!!\n\n";

						}
						else
						{
							hp--;
							if (hp <= 0) {

								std::cout << " вы проиграли / число компьюерабыло:" << randomNumber;
							}
							std::cout << "вы не угадали/n";
							std::cout << "Количество жизней: " << hp << "\n";
							std::cout << "взять подсказку за 1 жизнь ?";
							std::cout << "Продолжить Ж любое другое число";
							std::cin >> choose;
							if (choose == 1)
							{
								if (rand ()% 100 + 1 <= chance)
								{
									std::cout << "бесплатная подсказка";
									hp++;
								}
								hp--;

								if (number < randomNumber)
								{
									std::cout << "ваше число меньше компьютерного";
								}
								if (number > randomNumber)
								{
									std::cout << "вфше число больше компьютерного";
								}
								Sleep(3000);
							}
						}
					}

				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "\nОШИБКА! Некорректный ввод\n\n";
					Sleep(3000);
				}

			}

		}
		else if (choose == 2)
		{
		
		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n СПАСИБО ЗА ИГРУ!! :) \n\n";
			
			break;
		}
		else
		{
			std::cout << "\nОШИБКА! Некорректный ввод\n\n";

			Sleep(1700);
		}



	}

	return 0;

}
	*/




/*
			int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	srand(time(NULL));


	int choose = 0, hp =0, randomNumber=0 , number=0;
	int maxHp = 25, maxhphard = 25,chance = 30;
	while (true)
	{
		system("cls");

		std::cout << "\n\n\tДобро пожаловать в..." << "\n\n\t \"УГАДАЙ ЧИСЛО\"\n\n";
		std::cout << "\t1 - Начать игру\n" << "\t2 - Настройки\n" << "\t0 - Выход\n\n";
		std::cout << "Ввод -- ";
		std::cin >> choose;


		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\tВыберите уровень сложности\n\n\n" << "1 - Лёгкий :) (1 - 500)\n" << "2 - Сложный (1 - 5000)\n";
				std::cout << "0 - Выход в меню\n\n" << "Ввод -- \n";
				std::cin >> choose;

				if (choose == 1)
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;
					while (true)
					{
						system("cls");
						std::cout << "Количество жизней: " << hp << "\n";
						std::cout << "\nВведите число от 1 до 500 -- ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "\n\nПОЗДРАВЛЯМ! ВЫ ВЫИГРАЛИ UWU!!!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "\n\n\tОШИБКА! ВЫ ВЫШЛИ ЗА ЛИМИТЫ!!\n\n";

						}
						else
						{
							hp--;
							if (hp <= 0) {

								std::cout << " вы проиграли / число компьюерабыло:" << randomNumber;
							}
							std::cout << "вы не угадали/n";
							std::cout << "Количество жизней: " << hp << "\n";
							std::cout << "взять подсказку за 1 жизнь ?";
							std::cout << "Продолжить Ж любое другое число";
							std::cin >> choose;
							if (choose == 1)
							{
								hp--;

								if (number < randomNumber)
								{
									std::cout << "вфше число меньше компьютерного";
								}
								if (number > randomNumber)
								{
									std::cout << "вфше число больше компьютерного";
								}
								Sleep(1500);
							}
						}
					}

				}
				else if (choose == 2)
				{
					randomNumber = rand() % 5000 + 1;
					hp = maxhphard;
					while (true)
					{
						system("cls");
						std::cout << "Количество жизней: " << hp << "\n";
						std::cout << "\nВведите число от 1 до 5000 -- ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "\n\nПОЗДРАВЛЯМ! ВЫ ВЫИГРАЛИ UWU!!!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "\n\n\tОШИБКА! ВЫ ВЫШЛИ ЗА ЛИМИТЫ!!\n\n";

						}
						else
						{
							hp--;
							if (hp <= 0) {

								std::cout << " вы проиграли / число компьюерабыло:" << randomNumber;
							}
							std::cout << "вы не угадали/n";
							std::cout << "Количество жизней: " << hp << "\n";
							std::cout << "взять подсказку за 1 жизнь ?";
							std::cout << "Продолжить Ж любое другое число";
							std::cin >> choose;
							if (choose == 1)
							{
								if (rand ()% 100 + 1 <= chance)
								{
									std::cout << "бесплатная подсказка";
									hp++;
								}
								hp--;

								if (number < randomNumber)
								{
									std::cout << "ваше число меньше компьютерного";
								}
								if (number > randomNumber)
								{
									std::cout << "вфше число больше компьютерного";
								}
								Sleep(3000);
							}
						}
					}

				}
				else if (choose == 0)
				{
					break;
				}
				else
				{
					std::cout << "\nОШИБКА! Некорректный ввод\n\n";
					Sleep(1700);
				}

			}

		}
		else if (choose == 0)
		{
			system("cls");
			std::cout << "\n\n\n СПАСИБО ЗА ИГРУ!! :) \n\n";
			
			break;
		}
		else
		{
			std::cout << "\nОШИБКА! Некорректный ввод\n\n";
			Sleep(1700);
		}



	}

	return 0;

			}
					/*
		else if (choose == 2)
		{
			std::cout <<
				std::cout << "/n/n/nНастройкиn/n/n/n";
				std::cout <<
				std::cout <<
				std::cout <<
				std::cout <<
					std::cout <<
					std::cout <<" Введите кол - во жизней для легкой игры :"
					std::cin >> choose;

					if(choose<0 || choose>100){
					std::cout << "допустимые значения от 1 до 100/n";

			}
					{
			system("cls");
			std::cout << "\n\n\n СПАСИБО ЗА ИГРУ!! :) \n\n";

			break;
			}
		else
		{
			std::cout << "\nОШИБКА! Некорректный ввод\n\n";
			Sleep(1700);
			}



	}

	return 0;
}
*/

/*
* 
* else if (choose == 0)

	while (true)
	{
		if (num == 0)
		{
			std::cout << "number";
			std::cin >> num;

			break;
		}
		std::cout << sum + num;
	}

int main()
{

	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int a = 0;
	int b;
	std::cin >> b;
	int c = (a + b);
	while (b != 0)
	{
		std::cout << c + b;
	}
	int d;
	std::cin >> d;

	int n = (c + d);


		while (n != 0)
		{
			std::cout << n + c;
		}
	std::cout << n;
}


int main() {
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int c = 0;

	while (c < 5);
	{
		std::cout << "Hello";
		std::cout << 1;

		c++;


	}
	std::cout << "world";
	int i = 8;
	for (int i = 0; i < 5; i++);
	{

		i += 10;
	}
}	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	int c = 0;

	while (c < 5);
	{
		std::cout << "Hello";
		std::cout << 1;

		c++;


	}
	std::cout << "world";
	int i = 8;
	for (int i = 0; i < 5; i++);
	{

		i += 10;
	}
}

		//тип_данных	имя_переменной;
		Типы данных
			bool		true/false	0	-	false
			char		'+'	43

			short		123	-32768	-	32768
			unsigned short	123		0-65535

			int			123456		+-(2147483648) +	0
			unsigned	int		123456	0-4294967295
			long long int		123456789 a lot

			float		123.456		-+(3.4E_38	...	3.4E+38)
			doble		123.4567		+-(1.7R-308	...	1.7E+308)
			long	doble		no	coment		+-(3.4E-4933...	3.4+4933)

			ТАБУ:	goto		and	 or	not		int	имя Переменной

			цыклы

			while (true)

			for(
			}
* int num = 0;
	int sum = 0;#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);

	srand(time(NULL));


	int choose = 0, hp =0, randomNumber=0 , number=0;
	int maxHp = 25, maxhphard = 25,chance = 30;
	while (true)
	{
		system("cls");

		std::cout << "\n\n\tДобро пожаловать в..." << "\n\n\t \"УГАДАЙ ЧИСЛО\"\n\n";
		std::cout << "\t1 - Начать игру\n" << "\t2 - Настройки\n" << "\t0 - Выход\n\n";
		std::cout << "Ввод -- ";
		std::cin >> choose;


		if (choose == 1)
		{
			while (true)
			{
				system("cls");
				std::cout << "\n\n\n\tВыберите уровень сложности\n\n\n" << "1 - Лёгкий :) (1 - 500)\n" << "2 - Сложный (1 - 5000)\n";
				std::cout << "0 - Выход в меню\n\n" << "Ввод -- \n";
				std::cin >> choose;

				if (choose == 1)
				{
					randomNumber = rand() % 500 + 1;
					hp = maxHp;
					while (true)
					{
						system("cls");
						std::cout << "Количество жизней: " << hp << "\n";
						std::cout << "\nВведите число от 1 до 500 -- ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "\n\nПОЗДРАВЛЯМ! ВЫ ВЫИГРАЛИ UWU!!!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "\n\n\tОШИБКА! ВЫ ВЫШЛИ ЗА ЛИМИТЫ!!\n\n";

						}
						else
						{
							hp--;
							if (hp <= 0) {

								std::cout << " вы проиграли / число компьюерабыло:" << randomNumber;
							}
							std::cout << "вы не угадали/n";
							std::cout << "Количество жизней: " << hp << "\n";
							std::cout << "взять подсказку за 1 жизнь ?";
							std::cout << "Продолжить Ж любое другое число";
							std::cin >> choose;
							if (choose == 1)
							{
								hp--;

								if (number < randomNumber)
								{
									std::cout << "вфше число меньше компьютерного";
								}
								if (number > randomNumber)
								{
									std::cout << "вфше число больше компьютерного";
								}
								Sleep(1500);
							}
						}
					}

				}
				else if (choose == 2)
				{
					randomNumber = rand() % 5000 + 1;
					hp = maxhphard;
					while (true)
					{
						system("cls");
						std::cout << "Количество жизней: " << hp << "\n";
						std::cout << "\nВведите число от 1 до 5000 -- ";
						std::cin >> number;

						if (number == randomNumber)
						{
							std::cout << "\n\nПОЗДРАВЛЯМ! ВЫ ВЫИГРАЛИ UWU!!!\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "\n\n\tОШИБКА! ВЫ ВЫШЛИ ЗА ЛИМИТЫ!!\n\n";

						}
						else
						{
							hp--;
							if (hp <= 0) {

								std::cout << " вы проиграли / число компьюерабыло:" << randomNumber;
							}
							std::cout << "вы не угадали/n";
							std::cout << "Количество жизней: " << hp << "\n";
							std::cout << "взять подсказку за 1 жизнь ?";
							std::cout << "Продолжить Ж любое другое число";
							std::cin >> choose;
							if (choose == 1)
							{
								if (rand ()% 100 + 1 <= chance)
								{
									std::cout << "бесплатная подсказка";
									hp+
			Операторы :

			математические: +-   -++	--, += *= /= %
			сравнительные:	<	>	>=	<=	==	!=	<=>
			логические:		&&(и)	||(или)	!(не)

			
			*/