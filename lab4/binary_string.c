#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* unsigned_to_binary(unsigned x){

	int sig_bits = 1;
	unsigned long  pow2 = 2;
	while (x >= pow2){
		pow2 *= 2;
		sig_bits++;
	}

	char* binary_conversion = (char*) malloc ((sig_bits+1) * sizeof(char)); //creating 32 bit space pluss null termination
	if (binary_conversion == NULL){
		exit(0);
	}
	binary_conversion[sig_bits] = '\0'; //null termination
	int trace = sig_bits-1;
	while (trace >= 0){
		binary_conversion[trace--] = (x % 2) + '0'; //converts the current bit into an integer
		x/=2;
	}
	return binary_conversion;
}

unsigned binary_to_unsigned(char* str){
	unsigned end = 0;
	int length = strlen(str);
	for (int x = 0; x < length; x++){
		if (str[x] == '1'){
			end = (end*2) + 1;
		}else if (str[x] == '0'){
			end *= 2;
		}else{
			exit(0);
		}
	}
	return end;
}

char* add_binary(char* str1, char* str2){
	int length1 = strlen(str1);
	int length2 = strlen(str2);
	int longest = (length1 > length2) ? length1 : length2;

	char* result = (char*) malloc ((longest+2) * sizeof(char)); // creates space, including a place for null termination and a possible carry

	if (result == NULL){
		exit(0);
	}

	result[longest+1] = '\0'; //adds null termination to the end of the array

	int carry = 0; //variable for carry-over

	int x = length1 -1;
	int y = length2 -1;
	int result_length = longest;

	while (x>=0 || y>=0 || carry){
		int continual = carry;

	if (x >= 0){
		continual += str1[x--] - '0'; // convert cahar to int
	}
	if (y >= 0){
		continual += str2[y--] - '0';
	}

	result [result_length--] = (continual%2) + '0';
	carry = continual/2;
	}

	if (result[0] != '0' && result[0] != '1'){
		for (int x =0; x < longest+1; x++){
			result[x] = result[x+1];
		}
	}
	return result;
}

int main(){
	unsigned x = 100000000;
	char* trial = unsigned_to_binary(x);
	printf("Number %u in binary: %s\n",x, trial);

	unsigned x2 = 256;
	char* trial2 = unsigned_to_binary(x2);
	printf("Number %u in binary: %s\n",x2, trial2);

	unsigned x3 = 123456780;
	char* trial3 = unsigned_to_binary(x3);
	printf("Number %u in binary: %s\n",x3, trial3);

}




