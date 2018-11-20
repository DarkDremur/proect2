#include <iostream>
#include <locale>
#include <stdio.h>
int main()
{

	//.1.	Даны действительные числа x и y. Получить: (x-y) / 1+(xy).


	int x, y, Total;

	x = 5;

	y = 3;

	Total = (x - y) / 1 + (x * y);



	system("pause");
}




/*#include <iostream>
#include <locale>
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "");

	/*4.На сайте практически любого коммерческого банка, можно встретить так называемый Депозитный
		калькулятор, который позволяет людям, не желающим углубляться в формулы расчета процентных
		ставок, узнать какую прибыль они получат.Для этого им достаточно заполнить определённые поля,
		нажать на кнопку и увидеть результат.Это простая программа, которую уже сможет написать каждый
		из вас.Итак, задача: Пользователь вводит сумму депозита и количество месяцев хранения денег в 
		банке.Необходимо провести расчет и показать на экран прибыль с депозита в месяц, за весь срок 
		депозита, и общую сумму к выплате в конце срока.Валюта пусть будет – доллар США.Процентная 
		ставка – 5 % годовых.Формула расчетапроцентов
		в месяц – СуммаДепозита * (ПроцентнаяСтавка / 100) / ДнейВГоду * ДнейВМесяце.

	int DepositAmount, NumberOfMonths, Total;
	printf("DepositAmount =");
	scanf_s("%d", &DepositAmount);

	printf("NumberOfMonths =");
	scanf_s("%d", &NumberOfMonths);

	int ProfitFromDepositPerMoth, FullTermDeposit, TotalPayable, DayAYear;
	printf("ProfitFromDepositPerMoth =");
	scanf_s("%d", &Total);
	Total = DepositAmount * 0.5 / DayAYear * NumberOfMonths;

	printf("FullTermDeposit =");





	
	system("pause");
}

#include <iostream>
#include <locale>
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "");

	/*3.	Объявить переменные, для подсчета общего
		количества предметов для сервировки стола.
		Например, чашки, такое же количество блюдец и ложек.



	int cups = 6, spoons = cups, saucers = cups; 

	int amount = cups + spoons + saucers; 

	printf("Total: %d\n", amount);



	system("pause");
}
/*#include <iostream>
#include <locale>
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "");

	/*2.	Объявить три переменные типа int и присвоить первой числовое значение, вторая переменная
	равна первой переменной, увеличенной на 3, а третья переменная равна сумме первых двух.

	int a, b, c;

	printf("Укажите сумму первой переменной : ");
	scanf_s("%d", &a);

	b = a * 3;

	c = a + b;

	printf("вторая переменная равна:: %d\n", b);

	printf("третье переменная равна:: %d\n", c);


	system("pause");
}


/*#include <iostream>
#include <locale>
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "");
	/*1.	Объявить переменные, с помощью которых можно будет посчитать общую сумму 
		покупки нескольких товаров.Например, плитки шоколада, кофе и пакеты молока.

	int a, b, c, d;
	printf("Плитка шоколада: ");
	scanf_s("%d",&a);

	printf("Молоко: ");
	scanf_s("%d", &b);

	printf("Кофе: ");
	scanf_s("%d", &c);

	printf("---------------------------------- \n ");

	int total = a + b + c;

	printf("Итого: \t\t%dтенге. \n", total );

	printf("----------------------------------\n ");


	system("pause");
}*/