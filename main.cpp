#include <iostream>
#include <fstream>
#include <sstream>
#include <queue>
#include <deque>
#include "listtoolshb.h"
using namespace std;
struct Profile
{
    string fullname;
    string state;
    bool operator==( Profile rhs)
    {if (fullname==rhs.fullname) return true; return false; }
    bool operator!=(Profile rhs)
    {if (fullname!=rhs.fullname) return true; return false; }
};
ostream& operator<< (ostream &out, Profile &user)
{
    out << user.fullname<<"--" <<user.state;
    return out;
}

bool searchDeque(deque<Profile> &pq, Profile &president);
int main() {
    Profile pQueue;
    Profile pDeque;
    Profile temp;
    string line;

    ifstream file("presidentStates.txt");
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, temp.fullname, '\t');
            getline(ss, temp.state, '\t');
            file.push(Profile);

        }
    }
    cout<<"Printing queue members by using pop and front***********************"<<endl;
//use a while loop by using front and pop function to both empty and print your
   // President profiles.
            cout<<"Printing deque members with iterator***********************"<<endl;
//use an iterator print your President profiles.
    deque<Profile>::iterator dIter;

    cout<<"Printing deque members with indices***********************"<<endl;
    for (int b = 1; b <= file.len; b++) //having a bit of trouble with this for loop
    {
        fstream file("presidentStates.txt");
        getline(file,temp);
        string line;
        file >> line;
        cout << line << endl;
    }

    temp.fullname = "Gerald R. Ford";
if(searchDeque(pDeque, temp))
  cout<<"found:"<<temp<<endl;
else
  cout<<"not found: "<<temp<<endl;

    return 0;
}
bool searchDeque( deque<Profile> &pq,   Profile &president) //Not exactly sure what to do with this
{
    return &pq;
}