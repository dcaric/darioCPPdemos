#include <iostream>

int main(int argc, char *argv[])
{
	double totalWet, totalDry, ratio;

    double wet[2];
    double dry[3];
    double * cookie[2] = {wet,dry};

	/*
	int test1 [2][3] = {2, 4, 5, 9, 0, 19};
	int test2 [2][3] = { {2, 4, 5}, {9, 0, 19}};

	int a[3] =  {2, 4, 5};
	int b[3] =  {9, 0, 19};

	int *test3 [2] = { a, b};
	*/
    
    scanf("%lf%lf", &wet[0], &wet[1]);
    scanf("%lf%lf%lf", &dry[0], &dry[1], &dry[2]);


/*
	for (int i=0; i<2; i++) {
		for (int j=0; j<3; j++) {
			printf("cookie : dry %lf\n", dry[j]);
			printf("cookie : wet %lf\n", wet[i]);
			printf("cookie : %d  %d  %lf\n", i, j, cookie[i][j]);
		}
	}
*/

	totalWet = cookie [0][0] + cookie [0][1];
	

	printf ("totalWet %.2lf", totalWet);
}