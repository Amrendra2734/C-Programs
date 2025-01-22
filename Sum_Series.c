/*Write a C program to calculate the sum of the following series up to n terms:

Series = 1 + ( 1 + 2 ) + ( 1 + 2 + 3 ) + ( 1 + 2 + 3 + 4 ) +⋯ + up to n terms

Where each term in the series is the sum of the first i natural numbers for i ranging from 1 to n.



Input Format

The program should prompt the user to enter a single integer n, which represents the number of terms in the series.


Output Format

The program should print the sum of the series up to n terms. */

#include<stdio.h>
int main(){
	int n,S=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		S= S + i*(n-i+1);
	}
	printf("%d",S);
}
