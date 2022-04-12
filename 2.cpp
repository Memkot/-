#include <iostream>
#include <fstream>
using namespace std;
int to2(int x) {
	if (x == 0) {
		return 0;
	}
	else {
		return(to2(x / 2) * 10 + x % 2);
	}
}
int main() {
	int x;
	Cin >> x;
	ofstream fout;
	fout.open("file3.txt", ios_base::out);
	fout << to2(x);
	fout.close();
}