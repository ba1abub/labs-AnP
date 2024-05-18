#include <stdio.h>

#include "lr.h"

void first( void )
{
    float V1; // начальная скорость
    float t; // Время торможения
    float V2; // скорость по истечению времени
    float a; // торможение
    float s; // искомое расстояние
    printf("V1 = ");
    scanf("%f", &V1);
    printf("t = ");
    scanf("%f", &t);
    printf("V2 = ");
    scanf("%f", &V2);
    a=(V2-V1)/t;
    s=V2*t+(a*t*t)/2;//нахождение пройденой дистанции
    printf("distance = %f\n", s);
}

//------------------------------------------------------------\\

void second( void )
{

float s; // сумма ряда
float a; // очередной элемент ряда
float c; // числитель очередного элемента ряда
float b; // знаменатель  элемента ряда (в целом)
float g; // 1-я часть знаменателя
float j; // 2-я часть знаменателя
int n; // число элементов ряда
int i; // номер очередного элемента ряда
int sign; // знак очередного элемента ряда
// ввод параметров ряда
printf("n=");
scanf("%d", &n);
// присваивание переменных
s = 0;
sign = 1;
i = 0;
g = 1;
j = 2;
c = 3;
// цикл
while( i < n )
{
 a = c / (g * j);
 s = s + a*sign;
 sign = -sign;
 c = c + 1;
 g = g + 1;
 j = j + 1;
 i = i + 1;
 }
printf("s = %f\n", s); // результат
}
//----------------------------------------------\\

void recur(int number); //прототип...
 float s; // сумма ряда
float a; // очередной элемент ряда
float c; // числитель очередного элемента ряда
float b; // знаменатель элемента ряда (в целом)
float g; // 1-я часть знаменателя
float j; // 2-я часть знаменателя
int i; // номер очередного элемента ряда
int sign; // знак очередного элемента ряда
int number; // число элементов ряда
// присваивание переменных
void dop2( void )
{
int number; // число элементов ряда
// присваивание переменных
 fprintf(stdout,"введите число для рекурсии: ");
 fscanf(stdin, "%d", &number);
 s = 0;
 sign = 1;
 i = 0;
 g = 1;
 j = 2;
 c = 3;
 recur(number);

 puts("Рекурсия завершена!\n");
}
void recur(int number)
{
 fprintf(stdout, "%d\n", number);
 printf("%d\n",i);
 a = c / (g * j);
 s = s + a*sign;
 sign = -sign;
 c = c + 1;
 g = g + 1;
 j = j + 1;
 i = i+1;
 if (number <= i)

 printf("s = %f\n", s);
 else
 recur(number);

}

//----------------------------------------------\\

void third( void )
{
#define YES 1
#define NO 0

    int c; // текущий символ из потока
    int flag; // признак слова
    int cnt; // счётчик
    // обнаружен
    // начальные присваивания (инициализация)
    cnt = 0;
    flag = NO;
    // цикл чтения символов из потока, связанного с
    // клавиатурой
    while( (c = getchar()) != EOF )
    {
        if( c == ' ' || c == '.' || c == '\n' ||
        c == ',' )
        {
            flag = NO;
        }
        else
        {
            // найдена буква
            // это первая буква после разделителя
            if( flag == NO )
            {
                // проверка на то, что буква глассная
                if( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'Y'
                    || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y' )
                {
                    // первая буква гласная
                    cnt = cnt + 1;
                }
            }
            flag = YES;
        }
    }

    printf(" Количество слов, которые начинаются с гласной = %d\n", cnt );
    return 0;
}

//----------------------------------------------\\

#define YES 1
#define NO 0
#define MAXLINE 1000


void process_line(char buffer[]);
void fourth( void )
{
    char line[MAXLINE];
    gets(line);
    process_line(line);
    puts(line);
    return 0;
}


void process_line(char buffer[]) {
    char c; // текущий символ
    int flag; // признак слова
    int found; // индикатор того, что искомый признак
               // в слове обнаружен
    int counter; // счетчик слов
    int i; // позиция текущего символа исходной
           // cтроки
    int pos; // позиция текущего символа
             // результирующей строки
    int start; // позиция начала слова
    int j;
    // начальные присваивания (инициализация)
    flag = NO;
    found = NO;
    counter = 0;
    start = 0;
    i = 0;
    pos = 0;
    // цикл чтения символов из строки
    do {
        c = buffer[i]; // взять текущий символ из
                       // буфера
        if (c == ' ' || c == '.' || c == ',' ||
            c == '\n' || c == '\0') {
            // найден разделитель
            if (flag == YES) {
                // это первый разделить после слова
                // проверка на четность
                // искомый признак
                if (counter % 2 == 0 || found == YES) {
                    // слово не подлежит удалению
                    // оно копируется в результирующую
                    // строку
                    for (j = start; j < i; j++)
                        buffer[pos++] = buffer[j];
                }
                counter++;
            }
            flag = NO;
            found = NO;
            buffer[pos++] = c;
        } else {
            // найдена буква
            if (flag == NO)
                start = i; // запомнить позицию
                           // начала слова
            if (c >= '0' && c <= '9')
                found = YES;
            flag = YES;
        }
        i++;
    }
    while (c != '\0');
}

//----------------------------------------------\\

// определение символических констант
#define YES 1
#define NO 0
#define MAXLINE 1000


void process_line2(char buffer[]);


void dop4(void) {
   char line[MAXLINE];
   gets(line);
   process_line(line);
   puts(line);
   return 0;
}


void process_line2(char buffer[]) {
   char c; // текущий символ
   int flag; // признак слова
   int found; // индикатор того, что искомый признак
              // в слове обнаружен
   int counter; // счетчик слов
   int i; // позиция текущего символа исходной
          // cтроки
   int pos; // позиция текущего символа
            // результирующей строки
   int start; // позиция начала слова
   int j;
   // начальные присваивания (инициализация)
   flag = NO;
   found = NO;
   counter = 0;
   start = 0;
   i = 0;
   pos = 0;
   // цикл чтения символов из строки
   do {
       c = buffer[i]; // взять текущий символ из
                      // буфера
       if (c == ' ' || c == '.' || c == ',' ||
           c == '\n' || c == '\0') {
           // найден разделитель
           if (flag == YES) {
               // это первый разделить после слова
               // проверка на четность
               // искомый признак
               if (counter % 2 == 0) {
                   // слово не подлежит удалению
                   // оно копируется в результирующую
                   // строку
                   for (j = start; j < i; j++)
                       buffer[pos++] = buffer[j];
               }
               counter++;
           }
           flag = NO;
           buffer[pos++] = c;
       } else {
           // найдена буква
           if (flag == NO)
               start = i; // запомнить позицию
                          // начала слова
           flag = YES;
       }
       i++;
   }
   while (c != '\0');
}

//----------------------------------------------\\

#include <stdio.h>
#include <stdlib.h>

#define N 10

void fifth( void )
{
    int x[N]; // массив из N элементов
    int max_value; // среднее арифметическое
    int i;

    // ввод массива
    for( i = 0; i < N; i++ )
        scanf("%d", &x[i]);

    // вычисление максимального значения
    max_value = -1000000000;
    for( i = 0; i < N; i++ )
    {
        if (max_value < x[i])
            max_value = x[i];
    }

    // выборочное деление элементов на максимальный элемент массива
    for( i = 0; i < N; i++ )
    {
        if( x[i] < 0 )
            x[i] = x[i] / max_value;
    }

    // вывод массива
    for( i = 0; i < N; i++ )
        printf("%d ", x[i]);

    printf("\n");
    return 0;
}

//----------------------------------------------\\

#define N 10

void dop5( void )
{
    int x[N]; // массив из N элементов
    int max_value; // среднее арифметическое
    int prev_number; // предыдущее число
    int last_number; // последнее число
    int i;

    // ввод массива
    for( i = 0; i < N; i++ )
        scanf("%d", &x[i]);

    // вычисление максимального значения
    max_value = -1000000000;
    for( i = 0; i < N; i++ )
    {
        if (max_value < x[i])
            max_value = x[i];
    }

    // выборочное деление элементов на максимальный элемент массива
    for( i = 0; i < N; i++ )
    {
        prev_number = last_number;
        last_number = x[i];
        if( x[i] < 0 ) {
            if ( i > 0 && abs(prev_number) + 1 != abs(x[i]) )
                x[i] = x[i] / max_value;
        }
    }

    // вывод массива
    for( i = 0; i < N; i++ )
        printf("%d ", x[i]);

    printf("\n");
    return 0;
}

//----------------------------------------------\\

#define K 3
#define N 4


void sixth( void )
{
    int x[K][N]; // массив из K на N элементов
    int sum, max_sum, min_sum; // сумма строки
    int max_sum_idx, min_sum_idx; // индексы найденных сумм
    int temp;
    int i, j, s;

    // ввод массива
    for( i = 0; i < K; i++ )
        for( j = 0; j < N; j++ )
            scanf("%d", &x[i][j]);

    // нахождение строки с максимальной суммой элементов
    max_sum = -1000000000;
    max_sum_idx = 0;
    for (i = 0; i < K; i++) {
        sum = 0;
        for (j = 0; j < N; j++)
            sum += x[i][j];
        if (max_sum < sum) {
            max_sum = sum;
            max_sum_idx = i;
        }
    }

    // нахождение строки с минимульной суммой элементов
    min_sum = 1000000000;
    min_sum_idx = 0;
    for (i = 0; i < K; i++) {
        sum = 0;
        for (j = 0; j < N; j++)
            sum += x[i][j];
        if (min_sum > sum) {
            min_sum = sum;
            min_sum_idx = i;
        }
    }

    // смена строк местами
    for (j = 0; j < N; j++) {
        temp = x[max_sum_idx][j];
        x[max_sum_idx][j] = x[min_sum_idx][j];
        x[min_sum_idx][j] = temp;
    }

    // вывод массива
    for( i = 0; i < K; i++ )
    {
        for( j = 0; j < N; j++ )
            printf("%4d ", x[i][j]);
        printf("\n");
    }

    return 0;
}

//----------------------------------------------\\

#define K 3
#define N 4

void dop6( void )
{
 int x[K][N]; // массив из K на N элементов
 int aver; // среднее арифметическое
 int i, j, s;
 // ввод массива
 for( i = 0; i < K; i++ )
 for( j = 0; j < N; j++ )
 scanf("%d", &x[i][j]);
 // выборочное обнуление элементов
 int* array = (int*)x;
 for (s = (K*N) / 2; s > 0; s /= 2) {
 for (i = s; i < (K*N); ++i) {
 for (int j = i - s; j >= 0 && array[j] > array[j + s]; j -= s) {
 int temp = array[j];
 array[j] = array[j + s];
 array[j + s] = temp;
 }
 }
 }
 // вывод массива
 for( i = 0; i < K; i++ )
 {
 for( j = 0; j < N; j++ )
 printf("%4d ", x[i][j]);
 printf("\n");
 }
 return 0;
}

//----------------------------------------------\\

void seventh( void )
{
    long z; // исходное число
    unsigned long y; // беззнаковая версия
                     // исходного числа
    unsigned long mask; // маска
    int i; // счетчик разрядов
    i = 0;
    printf("z = ");
    scanf("%x", &z); // ввод в шестнадцатиричном
                     // формате
    y = (unsigned int)z;
    while( y != 0 )
    {
        y >>= 1;
        i++;
    }
    printf("result: %d\n", i);
    return 0;
}
