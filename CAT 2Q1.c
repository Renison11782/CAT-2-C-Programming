#include <stdio.h>

void print_array(int scores[2][2]){

	for (int i =0; i < 2; i++){
		for(int j = 0; j < 2; j++){
			printf("%d ", scores[i][j]);
		}
		printf("\n");
	}
	printf("\n");

}

int main()
{
	int scores_1[2][2] = {
	{65, 92},
	{84, 72}
	};
	int scores_2[2][2] = {
	{35, 70},
	{59, 67}
	};
	printf("Elements of the 2D array 'scores':\n");

    print_array(scores_1);
    print_array(scores_2);

	return 0;
}
