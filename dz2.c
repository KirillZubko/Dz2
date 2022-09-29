#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    
    int n = -1;
    
    while(n <= 0 ){
        printf("Enter n: ");
        scanf("%d", &n);
    }
    
    int arr[n];
    
    //zapolnenie
    int i =0;
    for(i = 0; i < n; i++){
        arr[i] = rand () % 20 - 10;
    }
    
    //vivod
    printf("\nArray: ");
    int k =0;
    for(k = 0; k < n; k++){
        printf("%d ", arr[k]);
    }
    
    i = 0;
    int f = 0;
    for(i = 0; i < n; i++){
        f += arr[i];
    }
    
    float average = (float)f / (float)n;
    printf("\nAverage value: %f\n", average);
    
    i = 0;
    int sum = 0;
    for(i = 0; i < n; i++){
        if(arr[i] > average){
            sum++;
        }
    }
    printf("\nAmount of elements which are bigger than average value: %d\n", sum);
    
    
    int t, x = 0;
    int abs_sum = 0;
    int j = 0;
    
    for(t = 0; t < n; t++){
    
        if(arr[t] < 0){
            
            for(j = t+1; j < n; j++){
                abs_sum +=abs(arr[j]);
            }
            break;
        }
    }
    
    printf("Abs sum: %d", abs_sum);
   
    return 0;
}

