
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <string.h>

using namespace std;



class TeamLeader
{
public:
   void client_communication(void); // общение с клиентом
   void manager_communication(void); // общение с менеджером
   void team_create(void); // создание команды
   void project_control(void); // контроль проекта

protected:
private:
   std::string name; // имя
   std::string surname; // фамилия
   std::string contacts; // контакты


};