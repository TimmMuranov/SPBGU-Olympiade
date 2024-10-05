#include <iostream>
#include <string>
using namespace std;

int main()
{
string s, p;
cin >> s >> p;

int size_s = s.length();
int size_p = p.length();
int r = size_p/size_s + 1;

int result=0;

string s1;
//cout << r << endl;
for (int x=0; x<r+1; x++){
	s1 += s;
}
//cout << s1 << endl;
for (int x=0; x<size_s; x++){
if (s1.compare(x, size_p, p) == 0){
	result ++;
   }
}
cout << result;
	return 0;
}
