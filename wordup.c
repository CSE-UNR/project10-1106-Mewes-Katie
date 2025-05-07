//Author: Katie Mewes
//Date Due:5-6-2025
//Project 10 aka Final Project

#include <stdio.h>
#define FILENAME "word.txt"
#define SIZE 5
#define GNUM 6
void line();
void WinL(int right, int atemp);
char guessprom(int a, char guess[a]);
void compare(int a, int b, char guess[], char unknown[]);
void instring(int a, int b, char guess[], char unknown[]);
int main(){
	char unknown[SIZE];
	char guess[SIZE][GNUM];
	int compare = 0;
	int attempt = 0;
	FILE* fptr;
	fptr = fopen(FILENAME,"r");
	
	if (fptr==NULL){
		printf("The file could not be accessed.\n");
		return 0;
	}
	fscanf(fptr, "%s", unknown);
	fclose(fptr);
	a++;
	guessprom(attempt, guess[attempt]);
	line();

	return 0;
}

void line(){
	printf("=====================\n");
}
void WinL(int right,int atemp){
	if(right == 1){
		printf("You won in %d guesses!\n", &atemp);
	}
}
char guessprom(int a, char guess[a]){
	
	printf("GUESS %d! Enter Your Guess: ", &a);
	
	fscanf("%s", guess[a]);
	return guess;
	}
void compare(int a, int b, char guess[], char unknown[])(
	char alpha[26]="abcdefghijklmnopqrstuvwxyz";
	char ALPHAB[26]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if(guess[a][b]==unknown[b]){
	printf("");
)
void instring(int a, int b, char guess[], char unknown[]){
	for(int i=0, i<b, i++){
		if(char guess[a][b]==unknown[i]){
		}
}
