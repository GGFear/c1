#include <iostream>
#include <cstdio>
#include <conio.h>
#include <string.h>

using namespace std;



class Planning;
class Client;
class Project;
class Manager;

class System
{
public:
   void project_check_for_completness(void); // проверка проекта на завершенность
   void start(void); // начало существования

   Planning** planning;
   Client** client;
   Project** project;
   Manager** manager;

protected:
private:
   int number_of_projects; // кол-во проектов
   int number_of_finished_projects; // кол-во завершенныых проектов
   int number_of_unfinished_projects; // кол-во незавершенных проектов


};