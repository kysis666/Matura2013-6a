#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int x;
    ifstream dane("dane.txt");
	string s;
    
    while(getline(dane,s)) {
        if(s[0] == s[s.size()-1])
		x++;
    }
  
    cout << "\nWartunek ten spelnia " << x << " liczb\n";
 
    return 0;
}
