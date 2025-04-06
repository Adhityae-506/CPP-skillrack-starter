/*The program accepts the name and salary of an agent as the input. The program prints the name and salary of the agent as the output. Your task is to define the class Agent so that the program runs successfully. 

Example Input/Output 1: 
Input: Oliver 15000 
Output: Oliver 15000 

Example Input/Output 2: 
Input: Anitha 13500 
Output: Anitha 13500*/

#include <iostream>
using namespace std;

class Agent{
    public:
    string name;
    int salary;
    Agent(string n, int s):name(n),salary(s){}
};

int main()
{
    string name;
    int salary;
    cin >> name >> salary;
    Agent agent(name, salary);
    cout << agent.name << endl;
    cout << agent.salary;
    return 0;
}