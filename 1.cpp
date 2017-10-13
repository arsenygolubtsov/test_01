#include <iostream>

int main (){ int i,k=0; char array[80];

for(i=0; i<80; i++){
	std::cin.get(array[i]);
	
	k++;
	
	if(array[i] == '\n') break;
}

for(i=0; i<=k; i++){
	if(array[i] == ' ') {
		std::cout << "%20";
	}
	
	else {
		std::cout << array[i];
	}
}
return 0;
}
