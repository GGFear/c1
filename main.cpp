#include "Client.h"
#include "Manager.h"
#include "Planning.h"
#include "Project.h"
#include "System.h"
#include "Team.h"
#include "TeamLeader.h"
#include <iostream>
#include <Windows.h>

using namespace std;

int main() 
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	cout << "IC-73 \nБобер Максим \nПервая версия была успешно запущена!" << endl;
	system("pause");
	return 0;
}
