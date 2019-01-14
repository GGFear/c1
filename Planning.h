
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <string.h>

using namespace std;



class Planning
{
public:
   void start_planning(void); // начало планирования
   void budget_check(void); // проверка бюджета

protected:
private:
   int salary_of_developers; // зарплата разработчиков
   int salary_of_analysts; // зарплата аналитиков
   int salary_of_testers; // зарплата тестировщиков
   int salary_of_manager; // зарплата менеджера
   int salary_of_teamlead; // зарплата Тим-лидера
   std::string technical_base; // техническая база
   std::string money_spendings; // денежные расходы


};