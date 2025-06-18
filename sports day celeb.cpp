#include <iostream>
using namespace std;
int main()
{
    int totalStudents;
    int totalTeams;
    cout<<"Enter the number of students:";
    cin>>totalStudents;
    cout<<"Enter the number of teams:";
    cin>>totalTeams;
    int studentPerTeam = totalStudents/totalTeams;
    int studentLeftOver = totalStudents%totalTeams;
   cout<<"studentPerTeam" <<studentPerTeam <<endl;
   cout<<"studentLeftOver" <<studentLeftOver;
   return 0;
}
