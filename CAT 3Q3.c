/*
NAME:ROBINSON RENISON
REG:CT100/G/26162/25
DES:CAT 3Q3. C
*/
#include <stdio.h>
#include <stdlib.h>

void inputIntegersToFile(){
	FILE *file;
	file = fopen("input.txt", "w");

	if(file == NULL){
		printf("Error opening this file!");
		exit(1);
	}
	int numbers[10];
	printf("Enter 10 integers:\n");

    int i;
	for( i =0; i < 10; i++){
		printf("Enter integer %d:",i + 1);
		scanf("%d",&numbers[i]);
		fprintf(file,"%d\n",numbers[i]);
	}
	fclose(file);
	printf("10 integers successfully written to input.txt\n\n");
}
	void processAndwritetofile(){
		FILE *inputfile = fopen("input.txt","r");
		FILE *outputfile = fopen("output.txt","w");

		if(inputfile == NULL){
			printf("ERROR OPENNING FILE\n");
			exit(1);
		}
		if(outputfile == NULL){
			printf("Error: could not open file\n");
			fclose(inputfile);
			exit(1);
		}
		int numbers [10];
		int sum = 0;
		int count = 0;

		printf("Reading integers from input.txt...\n");
		while(count < 10 && fscanf(inputfile,"%d", &numbers[count]) == 1){
			sum += numbers[count];
			count++;
		}
		if(count != 10){
			printf("Warning: Expected 10 integers but found only %d\n",count);
		}
		double average = (count > 0) ?(double)sum / count :0;

		fprintf(outputfile,"Sum:%d\n",sum);
		fprintf(outputfile, "Average: %.2f\n", average);

		fclose(inputfile);
		fclose(outputfile);

		printf("Results successfully written in output.txt\n\n");
	}
	void displayfilecontents() {
		FILE * inputfile = fopen("input.txt","r");
		FILE * outputfile = fopen("output.txt","r");

		if(inputfile == NULL){
			printf("ERROR OPENNING FILE\n");
			exit(1);
		}
		if(outputfile == NULL){
			printf("Error: could not open file\n");
			fclose(inputfile);
			exit(1);
		}
		printf("=== CONTENTS OF input.txt ===\n");
		int number;
		int count = 1;

		while(fscanf(inputfile, "%d", &number) == 1)
		{
			printf("Number %d: %d\n",count, number);
			count++;
		}
		printf("\n");

		printf("=== CONTENTS OF output.txt ===\n");
		char line[100];

		while( fgets(line, sizeof(line), outputfile) != NULL)
		{
			printf("%s", line);
		}
		printf("\n");

		fclose(inputfile);
		fclose(outputfile);
	}
	int main(){
		printf("=== Integer Flie Processing Program ===\n\n");

		inputIntegersToFile();
		processAndwritetofile();
		displayfilecontents();

		printf("PROGRAM COMPLETED SUCCESSFULLY!\n");

	return 0;
}
