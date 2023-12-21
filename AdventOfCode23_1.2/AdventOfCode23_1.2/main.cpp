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
using namespace std;

int main()
{
    stringstream ss;
    stringstream str_strm;
    string text;
    ifstream fin("sample2.txt");
    //int sum = 0;
    //int tot, i, j=0;
    while(getline(fin, text)) {
        text.replace(text.find("one"), 3, "1");
        text.replace(text.find("two"), 3, "2");
        text.replace(text.find("three"),5, "3");
        text.replace(text.find("four"), 4, "4");
        text.replace(text.find("five"), 4, "5");
        text.replace(text.find("six"), 3, "6");
        text.replace(text.find("seven"), 5, "7");
        text.replace(text.find("eight"), 5, "8");
        text.replace(text.find("nine"), 4, "9");
        cout << text << endl;
        /*int num[100];
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
        int n = strtol(str, NULL, 10);
        sum = sum + n;
        j = 0;*/
    }
    //cout << sum << endl;
    fin.close();
    return 0;
}
