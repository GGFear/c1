
#include <iostream>
#include <cstdio>
#include <conio.h>
#include <string.h>

using namespace std;



class TeamLeader
{
public:
   void client_communication(void); // ������� � ��������
   void manager_communication(void); // ������� � ����������
   void team_create(void); // �������� �������
   void project_control(void); // �������� �������

protected:
private:
   std::string name; // ���
   std::string surname; // �������
   std::string contacts; // ��������


};