//#include <stdio.h>
//int main() {
//	int z, x;
//	printf("z x");
//	scanf_s("%d%d", &z, &x);
//	if (z > x) {
//		printf("%d", z);
//	}
//	else {
//		printf("%d %d", z, x);
//	}
//	return 0;
//}

//#include <stdio.h>
//int main() {
//    int num1, num2, num3;
//    printf("Vvedit pershe chislo: ");
//    scanf_s("%d", &num1);
//    printf("Vvedit druge chislo: ");
//    scanf_s("%d", &num2);
//    printf("Vvedit tretie chislo: ");
//    scanf_s("%d", &num3);
//    int minNum;
//    if (num1 <= num2 and num1 <= num3) {
//        minNum = num1;
//    }
//    else if (num2 <= num1 and num2 <= num3) {
//        minNum = num2;
//    }
//    else {
//        minNum = num3;
//    }
//    printf("Najmenshe chislo: %d\n", minNum);
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//    int n;
//    printf("Vvedit size of massive: ");
//    scanf_s("%d", &n);
//    int* myArray = (int*)malloc(n * sizeof(int));
//    if (myArray == NULL) {
//        printf("ERROR 404\n");
//        return 1;
//    }
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d", &myArray[i]);
//    }
//    for (int i = 0; i < n; i++) {
//        if (myArray[i] % 2 == 0) {
//            myArray[i] = 0;
//        }
//    }
//    printf("Modified array:\n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", myArray[i]);
//    }
//    printf("\n");
//    free(myArray);
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//    int n;
//    printf("Vvedit size of massive: ");
//    scanf_s("%d", &n);
//    int* myArray = (int*)malloc(n * sizeof(int));
//    if (myArray == NULL) {
//        printf("ERROR 404\n");
//        return 1;
//    }
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d", &myArray[i]);
//    }
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += myArray[i];
//    }
//    printf("Suma elementiv masivu: %d\n", sum);
//    free(myArray);
//    return 0;
//}
//
//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//    int n;
//    printf("Vvedit size of massive: ");
//    scanf_s("%d", &n);
//    int* myArray = (int*)malloc(n * sizeof(int));
//    if (myArray == NULL) {
//        printf("ERROR 404\n");
//        return 1;
//    }
//    printf("Vvedit elementy masivu:\n");
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d", &myArray[i]);
//    }
//    printf("Obernenyi masiv:\n");
//    for (int i = n - 1; i >= 0; i--) {
//        printf("%d ", myArray[i]);
//    }
//    printf("\n");
//    free(myArray);
//    return 0;
//}


//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//    int n;
//    printf("Vvedit size of massive: ");
//    scanf_s("%d", &n);
//    int* myArray = (int*)malloc(n * sizeof(int));
//    if (myArray == NULL) {
//        printf("ERROR 404\n");
//        return 1;
//    }
//    printf("Vvedit elementy masivu:\n");
//    for (int i = 0; i < n; i++) {
//        scanf_s("%d", &myArray[i]);
//    }
//    int maxVal = myArray[0];
//    int minVal = myArray[0];
//    for (int i = 1; i < n; i++) {
//        if (myArray[i] > maxVal) {
//            maxVal = myArray[i];
//        }
//        if (myArray[i] < minVal) {
//            minVal = myArray[i];
//        }
//    }
//    printf("Maximalne znachennya: %d\n", maxVal);
//    printf("Minimalne znachennya: %d\n", minVal);
//    free(myArray);
//    return 0;
//}


