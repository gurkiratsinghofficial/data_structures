#include<iostream>
#include<array>

using namespace std;

int main(void) {

	array<int,6> arr = {1,2,3,4,5,6};
	for(int i=0; i<6; i++)
		cout << arr.at(i) << " ";

return 0;
}
