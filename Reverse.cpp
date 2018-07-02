#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool isAlphabet(char x){
        return ( (x >= 'a' && x<= 'z') || (x >= 'A' && x <= 'Z') );
    }


void reverse(char str[])
{
    int r = strlen(str) -1, l=0;

    while (l<r){
        if(!isAlphabet(str[l]))
            l++;
        else if(!isAlphabet(str[r]))
            r--;

        else {
            swap(str[l], str[r]);
            l++;
            r--;
        }

    }
}

int main()
{
    char str[] = "a!bc!d,efg";
    cout << " Input String " << str << endl;
    reverse(str);
    cout << " Output String " << str << endl;
    return 0;
}
