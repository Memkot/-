#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>
#include <list>
#include <vector>
#include <windows.h>

    const char hexn[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };

    void nom3() {
        FILE* task3;
        task3 = fopen("t3.txt", "r");
        char c = 0;
        int num_length = 0;

        char chars[64];

        for (int i = 0; i < 63; ++i)
        {
            chars[i] = 0;
        }

        string result;

        while (fscanf(task3, "%c", &c) != EOF)
        {
            chars[num_length] = c;
            num_length++;
        }

        for (int i = 0, temp = 0; i < num_length; i += 4) {

            for (int j = 0; j < 4; ++j) {

                temp |= (((chars[i + j] == 0x30) ? 0 : 1) << j);
            }

            result += hexn[temp];
        }

        cout << "0x" << result << endl;

    }
}
