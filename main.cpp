#include <iostream>
#include <string>
#include <Windows.h>

long money = 1000;
unsigned long bettingMoney;
unsigned int randomNum;
unsigned int num;
int choice;

std::string name;

void Main();
void Start();

void Start()
{
	std::cout << "Do you want to play the game?" << std::endl;
	std::cout << "1. Yes" << std::endl;
	std::cout << "2. No" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		std::cout << "What is your name?" << std::endl;
		std::cin >> name;
		std::cout << std::endl;
		std::cout << std::endl;
		std::cout << std::endl;
		Main();
		break;
	case 2:
		system("exit");
		break;
	default:
		std::cout << "ERROR::COMMAND::DOES::NOT::EXIST" << std::endl;
		system("exit");
		break;
	}
}

void Main()
{
	system("cls");
	std::cout << "          ----------------------------------------------------------------------------------------------  " << std::endl;
	std::cout << "                                              RULES OF THE GAME                                           " << std::endl;
	std::cout << "          ----------------------------------------------------------------------------------------------  " << std::endl;
	std::cout << "                                                                                                          " << std::endl;
	std::cout << "               1. Choose any number beetwen 1 - 10.                                                       " << std::endl;
	std::cout << "               2. If you win you will get 10 times of money you bet.                                      " << std::endl;
	std::cout << "               3. If you bet on wrong number you will lose your betting money.                            " << std::endl;
	std::cout << "                                                                                                          " << std::endl;
	std::cout << "          ----------------------------------------------------------------------------------------------  " << std::endl;
	std::cout << "                                                                                                          " << std::endl;
	std::cout << "               Your current balance is : " << money << "$" << "                                           " << std::endl;
	std::cout << "               Hello " << name << ", Enter money to bet :  "; std::cin >> bettingMoney; std::cout << "    " << std::endl;
	std::cout << "               You bet : " << bettingMoney << "$                                                          " << std::endl;
	std::cout << "                                                                                                          " << std::endl;
	randomNum = rand() % 10 + 1;
	std::cout << "               Enter Random Number from 1 to 10 :  "; std::cin >> num; std::cout << "                     " << std::endl;
	std::cout << "                                                                                                          " << std::endl;
	std::cout << "               Checking if your number is correct...                                                      " << std::endl;
	Sleep(4000);
	if (num == randomNum)
	{
		std::cout << "               You won!!!!                                                                            " << std::endl;
		bettingMoney *= 10;
		money += bettingMoney;
		std::cout << "               Your current balance is : " << money << "$" << "                                       " << std::endl;
	}
	else
	{
		std::cout << "               You lose :(                                                                            " << std::endl;
		std::cout << "                                                                                                      " << std::endl;
		std::cout << "               Good luck next time ;)                                                                 " << std::endl;
		money -= bettingMoney;
		std::cout << "               Your current balance is : " << money << "$" << "                                       " << std::endl;
		if (money <= 0)
		{
			money = 0;
			std::cout << "                                                                                                  " << std::endl;
			std::cout << "               You dont have any money left :(                                                    " << std::endl;
			exit(0);
		}
	}
	std::cout << "                                                                                                          " << std::endl;
	std::cout << "          ----------------------------------------------------------------------------------------------  " << std::endl;
	std::cout << "                                                                                                          " << std::endl;
	std::cout << "          Want to try again?                                                                              " << std::endl;
	std::cout << "          1. Yes                                                                                          " << std::endl;
	std::cout << "          2. No                                                                                           " << std::endl;

	std::cout << "          ";
	std::cin >> choice;

	switch (choice)
	{
	case 1:
		Main();
		break;
	case 2:
		system("exit");
		break;
	default:
		std::cout << "          ERROR::COMMAND::DOES::NOT::EXIST                                                            " << std::endl;
		system("exit");
		break;
	}

	std::cout << "               Thank you for playing :)                                                                   " << std::endl;
	std::cout << "          ----------------------------------------------------------------------------------------------  " << std::endl;
}

int main()
{
	Start();

	return 0;
}