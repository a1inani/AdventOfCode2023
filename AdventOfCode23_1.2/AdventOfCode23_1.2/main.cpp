//
//  main.cpp
//  AdventOfCode23_1.2
//
//  Created by Alinani Simukanga on 21/12/2023.
//

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <regex>
using namespace std;

int main()
{
    stringstream ss;
    stringstream str_strm;
    string text;
    ifstream fin("input.txt");
    long sum = 0;
    int i, j=0;
    long tot;
    size_t index;
    while(getline(fin, text)) {
        while(true) {
            index = text.find("nine");
            if (index == std::string::npos) {
                break;
            }
            text.replace(index, 4, "n9e");
        }
        while(true) {
            index = text.find("two");
            if (index == std::string::npos) {
                break;
            }
            text.replace(index, 3, "t2o");
        }
        while(true) {
            index = text.find("one");
            if (index == std::string::npos) {
                break;
            }
            text.replace(index, 3, "o1e");
        }
        while(true) {
            index = text.find("eight");
            if (index == std::string::npos) {
                break;
            }
            text.replace(index, 5, "e8t");
        }
        while(true) {
            index = text.find("seven");
            if (index == std::string::npos) {
                break;
            }
            text.replace(index, 5, "s7n");
        }
        while(true) {
            index = text.find("six");
            if (index == std::string::npos) {
                break;
            }
            text.replace(index, 3, "s6x");
        }
        while(true) {
            index = text.find("five");
            if (index == std::string::npos) {
                break;
            }
            text.replace(index, 4, "f5e");
        }
        while(true) {
            index = text.find("four");
            if (index == std::string::npos) {
                break;
            }
            text.replace(index, 4, "f4r");
        }
        while(true) {
            index = text.find("three");
            if (index == std::string::npos) {
                break;
            }
            text.replace(index, 5, "t3e");
        }
        //cout << text << endl;
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
        //cout << n << endl;
        sum = sum + n;
        j = 0;
    }
    cout << sum << endl;
    fin.close();
    return 0;
}
