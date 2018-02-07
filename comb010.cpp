#include <iostream>
#include <fstream>
 
using namespace std;
 
int main() {
    int max = 0;
    char x;
 
    ifstream fin("input.txt");
    
    int i = 0;
    while((fin.get(x)) && (!fin.eof())) {
        if(x - '0' == 0) {
            if (i > max)
                max = i;
            i = 0;
        }
        else
            i++;
    }
    
    ofstream fout("output.txt");
    fout << max;
    
    fin.close();
    fout.close();
    
    return 0;
}
