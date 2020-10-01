/* Program that performs Bucket sort algorithm, testing
cases when the array is randomly generated.
Outputs sorted array and number of comparisons and assignments
performed.*/

#include <stdio.h>
#include <stdlib.h>

#define N 100

struct Node {
    int val;
    struct Node* next;
};

int generate_sorted(int *a, int n);
int generate_random(int *a, int n);
int generate_reversed(int *a, int n);
void bucket_sort(int *a, int n);
void sorting_results(void (*sort)(int *a, int n), int n);
void print_counts(double asg, double cmp);
void print_array(int *a, int n);
void free_buckets(struct Node **buckets, int num_buckets);
struct Node* add_new_value(int new_val);
void insert_sorted(struct Node **head, struct Node* new_node);


// Counters for number of assignments and comparisons
double cntr_asg, cntr_cmp;

int main()
{
    printf("\nBUCKET SORT\n");
    sorting_results(bucket_sort, N);

    return 0;
}


// Generate array with random values
int generate_random(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 1000;
    }   
    return 0;
}


// Add new value to new node
struct Node *add_new_value(int new_val)
{
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));

    new_node->val = new_val;
    new_node->next = NULL;
    
    return new_node;
}

// Insert value in sorted order
void insert_sorted(struct Node** head, struct Node* new_node)
{
    struct Node* current;
    cntr_cmp++;
    // If linked list is empty 
    // Or if value of head element is greater than to-be-inserted value
    if (*head == NULL || (*head)->val >= new_node->val)
    {
        new_node->next = *head;
        *head = new_node;
        cntr_asg++;
    }
    else
    {
        current = *head;
        // Search position to insert new value
        while (current->next != NULL && current->next->val < new_node->val)
        {
            current = current->next;
            cntr_cmp++;
        }
        // Insert new value
        new_node->next = current->next;
        current->next = new_node;
        cntr_asg++;
    }
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

void bucket_sort(int *a, int n)
{
    int min, max, num_buckets;

    min = min_value(a, n);
    max = max_value(a, n);
    num_buckets = n + 1;

    // Allocate memory for array of buckets
    struct Node **buckets = (struct Node **)malloc(num_buckets * sizeof(struct Node*));
    if (!buckets) exit(1);

    // Initialize buckets with NULL value
    for (int i = 0; i < num_buckets; i++)
    {
        buckets[i] = NULL;
    }

    // Create new nodes, containing array values
    // Insert sorted new nodes into corresponding buckets
    for (int i = 0; i < n; i++)
    {
        // Number of a bucket
        int d = (double)((a[i] * n) / (max - min + 1));
        struct Node* new_node = add_new_value(a[i]);
        insert_sorted(&buckets[d], new_node);
    }

    // Assign sorted values to initial array
    for (int i = 0, j = 0; i < num_buckets; i++)
    {
        struct Node* node;
        node = buckets[i];
        while (node)
        {
            a[j] = node->val;
            node = node->next;
            j++;
        }
    }
    free_buckets(buckets, num_buckets);
}

void free_buckets(struct Node **buckets, int num_buckets)
{
    // Free memory
    for (int i = 0; i < num_buckets; i++)
    {
        struct Node* node;
        node = buckets[i];
        while(node)
        {
            struct Node* tmp;
            tmp = node;
            node = node->next;
            free(tmp);
        }
    }
    free(buckets);
}


void print_array(int* a, int n)
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