#include <iostream>
#include <locale>
#include <stdio.h>
int main()
{

	//.1.	���� �������������� ����� x � y. ��������: (x-y) / 1+(xy).


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

	/*4.�� ����� ����������� ������ ������������� �����, ����� ��������� ��� ���������� ����������
		�����������, ������� ��������� �����, �� �������� ����������� � ������� ������� ����������
		������, ������ ����� ������� ��� �������.��� ����� �� ���������� ��������� ����������� ����,
		������ �� ������ � ������� ���������.��� ������� ���������, ������� ��� ������ �������� ������
		�� ���.����, ������: ������������ ������ ����� �������� � ���������� ������� �������� ����� � 
		�����.���������� �������� ������ � �������� �� ����� ������� � �������� � �����, �� ���� ���� 
		��������, � ����� ����� � ������� � ����� �����.������ ����� ����� � ������ ���.���������� 
		������ � 5 % �������.������� ����������������
		� ����� � ������������� * (���������������� / 100) / ��������� * �����������.

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

	/*3.	�������� ����������, ��� �������� ������
		���������� ��������� ��� ���������� �����.
		��������, �����, ����� �� ���������� ������ � �����.



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

	/*2.	�������� ��� ���������� ���� int � ��������� ������ �������� ��������, ������ ����������
	����� ������ ����������, ����������� �� 3, � ������ ���������� ����� ����� ������ ����.

	int a, b, c;

	printf("������� ����� ������ ���������� : ");
	scanf_s("%d", &a);

	b = a * 3;

	c = a + b;

	printf("������ ���������� �����:: %d\n", b);

	printf("������ ���������� �����:: %d\n", c);


	system("pause");
}


/*#include <iostream>
#include <locale>
#include <stdio.h>
int main()
{
	setlocale(LC_ALL, "");
	/*1.	�������� ����������, � ������� ������� ����� ����� ��������� ����� ����� 
		������� ���������� �������.��������, ������ ��������, ���� � ������ ������.

	int a, b, c, d;
	printf("������ ��������: ");
	scanf_s("%d",&a);

	printf("������: ");
	scanf_s("%d", &b);

	printf("����: ");
	scanf_s("%d", &c);

	printf("---------------------------------- \n ");

	int total = a + b + c;

	printf("�����: \t\t%d�����. \n", total );

	printf("----------------------------------\n ");


	system("pause");
}*/