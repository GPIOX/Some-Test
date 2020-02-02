#include <stdio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

bool ControlInter(void)
{
	char SelectKey   = 0;
	char CreditMoney = 0;
	char DebitMoney  = 0;

	do
	{
		system("cls");
		cout << "========================" << '\n';
		cout << "|  Please Select Key   |" << '\n';
		cout << "|  1. Query            |" << '\n';
		cout << "|  2. Credit           |" << '\n';
		cout << "|  3. Debit            |" << '\n';
		cout << "|  4. Return           |" << '\n';
		cout << "========================" << '\n';
		cin >> SelectKey;
	} while ((SelectKey != '1') && (SelectKey != '2') && (SelectKey != '3') && (SelectKey != '4'));

	switch (SelectKey)
	{
		char str;
		case '1': {
			system("cls");
			cout << "==========================" << '\n';
			cout << "|  Your balace is 1000$  |" << '\n';
			cout << "|  Thank you to use      |" << '\n';
			cout << "==========================" << '\n';
			system("pause");
		}break;

		case '2': {
			do {
				system("cls");
				cout << "==================================" << '\n';
				cout << "|   Please select Credit money:  |" << '\n';
				cout << "|   1. $50                       |" << '\n';
				cout << "|   2. $100                      |" << '\n';
				cout << "|   3. Return                    |" << '\n';
				cout << "==================================" << '\n';
				cin >> CreditMoney;
			} while (CreditMoney != '1' && CreditMoney != '2' && CreditMoney != '3');

			switch (CreditMoney)
			{
				case '1':
					system("cls");
					cout << "=======================================" << '\n';
					cout << "|  Your Credit money is $50,Thank you!|" << '\n';
					cout << "=======================================" << '\n';
					system("pause");
					break;
				case '2':
				system("cls");
				cout << "=======================================" << '\n';
				cout << "| Your Credit money is $100,Thank you!|" << '\n';
				cout << "=======================================" << '\n';
				system("pause");
				break;
			case '3':
				break;
			}
		}break;

		case '3': {
			do {
				system("cls");
				cout << "=======================================" << '\n';
				cout << "|   Please select Debit money:        |" << '\n';
				cout << "|   1. $50                            |" << '\n';
				cout << "|   2. $100                           |" << '\n';
				cout << "|   3. $500                           |" << '\n';
				cout << "|   4. $1000                          |" << '\n';
				cout << "|   5. Return                         |" << '\n';
				cout << "=======================================" << '\n';
				cin >> DebitMoney;
			} while (DebitMoney != '1' && DebitMoney != '2' && DebitMoney != '3' \
				&& DebitMoney != '4' && DebitMoney != '5');

			switch (DebitMoney)
			{
			case '1':
				system("cls");
				cout << "===========================================" << '\n';
				cout << "|   Your Debit money is $50,Thank you!    |" << '\n';
				cout << "|        Press any key to return...       |" << '\n';
				cout << "===========================================" << '\n';
				system("pause");
				break;
			case '2':
				system("cls");
				cout << "===========================================" << '\n';
				cout << "|   Your Debit money is $100,Thank you!   |" << '\n';
				cout << "|        Press any key to return...       |" << '\n';
				cout << "===========================================" << '\n';
				system("pause");
				break;
			case '3':
				system("cls");
				cout << "===========================================" << '\n';
				cout << "|   Your Debit money is $500,Thank you!   |" << '\n';
				cout << "|        Press any key to return...       |" << '\n';
				cout << "===========================================" << '\n';
				system("pause");
				break;
			case '4':
				system("cls");
				cout << "===========================================" << '\n';
				cout << "|   Your Debit money is $1000,Thank you!  |" << '\n';
				cout << "|        Press any key to return...       |" << '\n';
				cout << "===========================================" << '\n';
				system("pause");
				break;
			case '5':
				break;
			}
		}break;

		case '4': {
			system("cls");
			cout << "================================" << '\n';
			cout << "|   Thank you for your using!  |" << '\n';
			cout << "|            Good bye!         |" << '\n';
			cout << "================================" << '\n';
			return ;
		}
	}
}

int main()
{
	while (1)
	{
		ControlInter();
	}
	return 1;
}