
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <string.h>

using namespace std;



class Planning
{
public:
   void start_planning(void); // ������ ������������
   void budget_check(void); // �������� �������

protected:
private:
   int salary_of_developers; // �������� �������������
   int salary_of_analysts; // �������� ����������
   int salary_of_testers; // �������� �������������
   int salary_of_manager; // �������� ���������
   int salary_of_teamlead; // �������� ���-������
   std::string technical_base; // ����������� ����
   std::string money_spendings; // �������� �������


};