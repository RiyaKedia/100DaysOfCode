/*Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/

#include <stdio.h>

int main() {
    int s;
    printf("Enter the term you want to find sum upto: ");
    scanf("%d",&s);

    float series=1.0;
    for(int i=2 ;i<=s;i++) {
        series=series + (float)(2 * i - 1) / (float)(2 * i);
    }printf("%.2f",series);
    return 0;
}