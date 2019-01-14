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
   void project_check_for_completness(void); // �������� ������� �� �������������
   void start(void); // ������ �������������

   Planning** planning;
   Client** client;
   Project** project;
   Manager** manager;

protected:
private:
   int number_of_projects; // ���-�� ��������
   int number_of_finished_projects; // ���-�� ������������ ��������
   int number_of_unfinished_projects; // ���-�� ������������� ��������


};