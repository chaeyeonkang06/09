//
//  main.c
//  09
//
//  Created by 강채연 on 10/30/25.
//

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(int argc, const char * argv[]) {
    // insert code here...
#if 0
    int i;
    int grade[SIZE];
    int score[SIZE];
    
    for(i=0;i<SIZE;i++)
        grade[i] = rand()%100;
    
    for(i=0;i<SIZE;i++)
    score[i]=grade[i];
    
    for(i=0;i<SIZE;i++)
        printf("grade[%d]=%d, score[%d]=%d\n",
               i, grade[i], i, score[i]);
    
    return 0;
#endif
    
    int i;
    int a[SIZE] = {1, 2, 3, 4, 5};
    int b[SIZE] = {1, 2, 3, 4, 5};
    int flag_same=1;
    
    for(i=0;i<SIZE;i++)
    {
        if(a[i] != b[i])
        {
            printf("%i번째 요소가 다릅니다.\n", i);
            flag_same = 0;
        }
    }
    printf("a와 b가 같습니까? %i\n", flag_same);
    
    return 0;
}
