// // #include<stdio.h>
// // int main(){

// //     int N;
// //     scanf("%d",&N);
// //     long long int a[N];

// //     for (int i = 0; i < N; i++)
// //     {
// //         scanf("%lld",&a[i]);
// //     }

// //     long long int count2 = 0;
// //     for (int i = 0; i < N; i++)
// //     {
// //         long long int count = 0;
//         // if (a[i]%2 == 0)
//         // {
//         //     count++;
//         //     for (int j = a[i]/2; j % 2 == 0 ; j= j/2)
//         //     {
//         //         count++;
//         //     }
            
//         // }
// //         if (count2 < count)
// //         {
// //             count2 = count;
// //         }
// //     }
// //     printf("%lld",count2);
    
// //     return 0;
// // }


// #include<stdio.h>

// int main(){
//     int N;
//     scanf("%d",&N);
//     long long int a[N];
//     for (int i = 0; i < N; i++) {
//         scanf("%lld",&a[i]);
//     }
//     int count2 = 0;
//     for (int i = 0; i < N; i++) {
//         int count = 0;
//         while (/* `(a[i] & 1)` is performing a bitwise AND operation between the value of `a[i]` and
//         the binary value `1`. This operation checks if the least significant bit of `a[i]` is
//         1 or 0. If it is 1, then the result of the operation will be 1, otherwise it will be
//         0. This is used to check if `a[i]` is odd or even. If the result is 0, then `a[i]` is
//         even, otherwise it is odd. */
//         (a[i] & 1) == 0) {
//             count++;
//             a[i] >>= 1;
//         }
//         if (count2 < count) {
//             count2 = count;
//         }
//     }
//     printf("%d",count2);
//     return 0;
// }
#include <stdio.h>

void printPattern(int N) {
  int width = 2 * N - 1;
  int middle = width / 2;
  int i, j;

  for (i = 0; i < N; i++) {
    for (j = 0; j < width; j++) {
      if (j == middle) {
        printf("^");
      } else if (j >= middle - i && j <= middle + i) {
        printf("*");
      } else {
        printf(" ");
      }
    }
    printf("\n");
  }
}

int main() {
  int N;
  scanf("%d", &N);

  printPattern(N);

  return 0;
}