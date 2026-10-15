#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"");
    char a[] = "Сбой Матрицы";
    wchar_t b[] = L"Сбой Матрицы";
    printf("CHAR -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(a), strlen(a));
    printf("WCHAR -> sizeof: %zu bytes, strlen: %zu chars\n", sizeof(b), wcslen(b));
    return 0;
} 
