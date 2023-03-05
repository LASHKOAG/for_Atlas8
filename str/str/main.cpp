#include <iostream>
#include <stdio.h>
#include <string>
#include "string.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;

    char* str_char = "hghgh";


    char ch_arr[20] = "bravo\0";  //5 letter +1 \0
    char test[256] = "Hello, world!";

    int str_out = strlen(test);
    int size_of_massive = sizeof(test);

    printf("test string: %s\n\n", test);
    printf("len of text: %d\n", str_out);
    printf("size of massive: %d\n", size_of_massive);

    int res = strlen(ch_arr);
    cout << res << endl;

    cout << ch_arr << endl;

    char arr_word[20] = "word_one";
    char tmp_str[20] = "abrakadabra";
    char str_target[20] = "";
    arr_word[0] = '1';


    strcpy(str_target, arr_word);

    cout << "str_target: " << str_target << endl;

    string str = "bravo_str";
    string str2 = "privet";
    string str3 = str + " " + str2;

    cout << str3 << endl;
//    str.push_back("privet");
//    cout << str3 << endl;

    string str10 = "kjhlxjhblm";
    string str11 = str10;
    cout << str11 << endl;

    bool isEmpty();



    return 0;
}
