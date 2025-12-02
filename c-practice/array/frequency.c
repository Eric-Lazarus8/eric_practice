#include <stdio.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n], freq[n];
    
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;   // mark all as unvisited
    }

    for (int i = 0; i < n; i++) {
        if (freq[i] == 0)  
            continue;  // skip already counted

        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // mark visited
            }
        }
        freq[i] = count;
    }

    printf("\nFrequency of each element:\n");
    for (int i = 0; i < n; i++) {
        if (freq[i] != 0) {  // print only unvisited
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}

