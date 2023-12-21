//
//  main.cpp
//  AdventOfCode23_1.1
//
//  Created by Alinani Simukanga on 21/12/2023.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    stringstream ss;
    stringstream str_strm;
    string text;
    ifstream fin("input.txt");
    long sum = 0;
    int i, j=0;
    long tot;
    while(getline(fin, text)) {
        int num[100];
        tot = text.length();
        for(i=0; i<tot; i++)
        {
            if(text[i]>='0' && text[i]<='9')
            {
                num[j] = text[i];
                num[j] = num[j] - 48;
                j++;
            }
        }
        char str[100];
        sprintf(str, "%d%d", num[0], num[j - 1]);
        long n = strtol(str, NULL, 10);
        sum = sum + n;
        j = 0;
    }
    cout << sum << endl;
    fin.close();
    return 0;
}
