#include <iostream>
#include <cstdio>
#include <conio.h>
#include <string.h>

using namespace std;



class Client
{
public:
   void teamlead_communication(void); //общение с Тим-лидером
   void manager_communication(void); // общение с менеджером

protected:
private:
   std::string name; //имя
   std::string surname; // фамилия
   std::string contacts; // контакты
};
