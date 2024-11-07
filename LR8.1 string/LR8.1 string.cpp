#include <iostream>
#include <string>

using namespace std;
string Change(string& str) {
	size_t pos = 0;
	while ((pos = str.find('w', pos)) != -1) {
		if (str[pos + 1] == 'h'
			&&
			str[pos + 2] == 'i'
			&&
			str[pos + 3] == 'l'
			&&
			str[pos + 4] == 'e')
			str.replace(pos, 5, "**");
		else
			pos++;
	}
	return str;
}
int CountLet(const string str, string finlet) {//finlet - finding letter
	int k = 0;
	size_t pos = 0;
	string* t;
	while ((pos = str.find(finlet, pos)) != -1) {
		if ('w')
			k++;
		pos++;
	}
	return k;
}
int CountWord(const string str) {
	int k = 0;
	size_t pos = 0;
	while ((pos = str.find('w', pos)) != -1) {

		if (str[pos + 1] == 'h'
			&&
			str[pos + 2] == 'i'
			&&
			str[pos + 3] == 'l'
			&&
			str[pos + 4] == 'e')
			k++;
		pos++;
	}

	return k;
}
int main() {

	string str;

	cout << "Enter text " << endl;
	getline(cin, str);

	cout << "there are " << CountWord(str) << " while\n\n";

	cout << "there are " << CountLet(str, "w") << " w\n";
	cout << "there are " << CountLet(str, "h") << " h\n";
	cout << "there are " << CountLet(str, "i") << " i\n";
	cout << "there are " << CountLet(str, "l") << " l\n";
	cout << "there are " << CountLet(str, "e") << " e\n\n";

	cout << "modified string:\n" << Change(str);

	return 0;
}