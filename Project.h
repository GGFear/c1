
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
   void start_project(void); // ������ ������������� �������
   void completness(void); // �������������

   TeamLeader** teamLeader;
   Team** team;

protected:
private:
   std::string name; // ���
   std::string methodology; // �����������
   std::string percent_of_sales; // 
   bool availability_of_documentation; // ������� ������������
   bool availability_of_testing; // ������� ������������
   std::string security_level; // ������� ������������
   std::string reliability; // ����������
   std::string convenience; // �������� �������������
   bool completion; // �������������


};