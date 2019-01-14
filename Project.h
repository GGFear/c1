
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <string.h>

using namespace std;



class TeamLeader;
class Team;

class Project
{
public:
   void start_project(void); // начало существования проекта
   void completness(void); // завершенность

   TeamLeader** teamLeader;
   Team** team;

protected:
private:
   std::string name; // имя
   std::string methodology; // методология
   std::string percent_of_sales; // 
   bool availability_of_documentation; // наличие документации
   bool availability_of_testing; // наличие тестирования
   std::string security_level; // уровень безопасности
   std::string reliability; // надежность
   std::string convenience; // удобство использования
   bool completion; // завершенность


};