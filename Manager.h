#include <iostream>
#include <cstdio>
#include <conio.h>
#include <string.h>

using namespace std;



class Manager
{
public:
   void client_communication(void); // общение с клиентом
   void teamlead_communication(void); // общение с Тим-лидером
   void planning_control(void); //контроль планирования

protected:
private:
   std::string name; // имя
   std::string surname; // фамилия
   std::string contacts; // контакты


};