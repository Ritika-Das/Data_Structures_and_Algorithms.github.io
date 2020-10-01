/* Program that performs Binary Heap sort algorithm, testing
cases when the array is randomly generated.
Outputs sorted array and number of comparisons and assignments
performed.*/

#include <stdio.h>
#include <stdlib.h>

//Array size
#define N1 100


int generate_random(int *a, int n);
int max_value(int *a, int n);
int min_value(int *a, int n);
void build_max_heap(int *a, int n);
void max_heapify(int *a, int i, int n);
void heap_sort(int *a, int n);
void sorting_results(void (*sort)(int *a, int n), int n);
void swap(int *x, int *y);
void print_counts(double asg, double cmp);
void print_array(int *a, int n);


double cntr_asg, cntr_cmp;


int main()
{

    printf("\nHEAP SORT\n");
    sorting_results(heap_sort, N1);

    return 0;
}


int generate_random(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 1000;
    }   
    return 0;
}


int max_value(int *a, int n)
{
    int max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max) max = a[i];
    }
    return max;
}


int min_value(int *a, int n)
{
    int min = a[0];
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min) min = a[i];
    }
    return min;
}


void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
    cntr_asg += 3;
}


void max_heapify(int *a, int i, int n)
{
    int max, left, right;
    left = 2*i + 1;
    right = 2*i + 2;
    max = i;

    cntr_cmp++;
    if ((left < n) && (a[left] > a[i])) max = left;

    cntr_cmp++;
    if ((right < n) && (a[right] > a[max])) max = right;

    if (max != i)
    {
        swap(&a[i], &a[max]);
        max_heapify(a, max, n);
    }
}


void build_max_heap(int *a, int n)
{
    for (int i = n/2; i >= 0; i--)
    {
        max_heapify(a, i, n);
    }
}


void heap_sort(int *a, int n)
{
    build_max_heap(a, n);
    int heap_size = n;

    for (int i = n-1; i >= 0; i--)
    {
        swap(&a[0], &a[i]);
        heap_size--;
        max_heapify(a, 0, heap_size);
    }
}


void print_array(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
}

// Output number of assignments and comparisons performed
void print_counts(double asg, double cmp)
{
    printf("\nNumber of assignments \t %.2lf \n", asg);
    printf("Number of comparisons \t %.2lf \n", cmp);
}


void sorting_results(void (*sort)(int *a, int n), int n)
{
    int *a = NULL;
    a = (int *) malloc(n * sizeof(int));
    if (!a) exit(1);

    printf("\nArray size is %d\n", n);
    printf("\nArray is randomised \n");
    generate_random(a, n);
    print_array(a, n);
    sort(a, n);
    printf("\nArray is sorted \n");
    print_array(a, n);
    print_counts(cntr_asg, cntr_cmp);

    free(a);
}