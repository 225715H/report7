#include <stdio.h>
int scoresList(int scores[], int size);
int scoresList(int scores[], int size){
    int i;
    for (i = 0; i < size; i ++){
        printf("%d ",scores[i]);
    }

    return 0;
}

int resultList(int scores[], int size);
int resultList(int scores[], int size){
    int i, j, num;
    for (i = 0; i < size ; i ++){
        for (j = i + 1; j < size; j ++){
            if (scores[i] < scores[j]){
                num = scores[i];
                scores[i] = scores[j];
                scores[j] = num;
            }
        }
    }
    scoresList(scores, size);

    return 0;
}


int main(){  
    printf("実行例1\n");

    int scores[] = {0, 60, 70, 100, 90};
    int size = sizeof scores / sizeof scores[0];

    printf("scores = ");
    scoresList(scores, size);

    printf("\nresults = ");
    resultList(scores, size);


    printf("\n実行例2\n");

    int scores2[] = {100, 60, 70, 100, 90, 80};
    int size2 = sizeof scores2 / sizeof scores2[0];

    printf("scores = ");

    printf("\nresults = ");
    resultList(scores2, size2);
    

    //処理コード
    return 0;
}
