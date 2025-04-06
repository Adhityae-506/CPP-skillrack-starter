/*The program accepts the name and price of a juice as the input. The program prints the name of the juice and prints the price of 5 juices as the output. Please fill in blanks with code so that the program runs successfully. 

Example Input/Output 1: 
Input: Orange 35 
Output: Orange 175

Example Input/Output 2: 
Input: Apple 80 
Output: Apple 400*/

#include <iostream>
using namespace std;

class Juice {
public:
    string name;
    int price;

    Juice(string juiceName, int juicePrice) {
        name = juiceName;
        price = juicePrice;
    }
};

int main() {
    string name;
    int price;

    cin >> name >> price;

    /*Enter your code here*/
    Juice* juice = new Juice(name, price);
    /*Your code ends here*/

    
    cout << juice->name << endl;
    cout << juice->price * 5;

    return 0;
}