#include<iostream>
using namespace std;

char before(char x){
	char before;
	if(x == 'A'){
		before = 'Z';
	}
	if(x > 'Z' || x <'A'){
		before = '0';
	}
	if(x > 'A' && x <= 'Z'){
		before = x-1;
	}
	return before;
	
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}

/*while(i < 58){

    char x = 'A'+i;

    cout << x;

    i++;
*/