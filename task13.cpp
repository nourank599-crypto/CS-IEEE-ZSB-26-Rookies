#include <iostream>
#include <cmath>

using namespace std;

int main() {


    int row_of_one = 0;
    int col_of_one = 0;


    const int TARGET = 3;


    for (int i = 1; i <= 5; ++i) {

        for (int j = 1; j <= 5; ++j) {
            int element;
            cin >> element;


            if (element == 1) {
                row_of_one = i;
                col_of_one = j;
            }
        }
    }


    int row_moves = abs(row_of_one - TARGET);


    int col_moves = abs(col_of_one - TARGET);


    int total_moves = row_moves + col_moves;

    cout << total_moves << endl;

    return 0;
}
