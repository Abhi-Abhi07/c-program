#include <stdio.h>
#include <stdlib.h>
// Function to compare two integers for qsort
int compare(const void *a, const void *b) { return (*(int *)a - *(int *)b); }
int main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        int N;
        scanf("%d", &N);
        int A[N], B[N];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &A[i]);
        }
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &B[i]);
        }
        // Find the starting point of the first difference
        int start = 0;
        while (start < N && A[start] == B[start])
        {
            start++;
        }
        // Find the ending point of the last difference
        int end = N - 1;
        while (end >= 0 && A[end] == B[end])
        {
            end--;
        }
        if (start > end)
        {
            // Arrays are already identical
            printf("0\n");
        }
        else
        {
            printf("%d\n", end - start + 1);
        }
    }
    return 0;
}