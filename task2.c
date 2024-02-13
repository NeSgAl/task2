#include <stdio.h>
#include <locale.h>


void calc();
void vis();
void c2f();


int main()
{
    setlocale(LC_ALL, "");

    int menu;
    printf(
        "введите номер программы:\n" \
        "1. перевод из целсия в форенгейты\n" \
        "2. проверка на високосный год\n" \
        "3. калькулятор\n"\
        "> "
    );
    scanf("%d", &menu);

    if (menu == 1)
    {
        c2f();
    }
    else if (menu == 2)
    {
        vis();
    }
    else if (menu == 3)
    {
        calc();
    }
} 


void vis() {
    int god;
    printf("Введите год: ");
    scanf("%d", &god);

    if (god % 400 == 0)
    {
        printf("Год високосный\n");
    }
    else if (god % 100 == 0)
    {
        printf("Год невисокосный\n");
    }
    else if (god % 4 == 0)
    {
        printf("Год високосный\n");
    }
    else
    {
        printf("Год невисокосный\n");
    }
}


void c2f() {
    double c; 
    double f;
    printf("Введите градусы цельсия: ");
    scanf("%lf", &c);
    // printf("%d", c);
    f = 9.0 / 5 * c + 32;
    printf("Фаренгейты: %f", f);
}

void calc() {
    float zn;
    float zna;
    int i;
    printf("Введите первое значение:\n");
    scanf("%f", &zn);
    printf("Введите номер операции: 1.+ 2.- 3.* 4.// \n");
    scanf("%d", &i);
    printf("Введите второе значение:\n"); 
    scanf("%f", &zna); 
    if (i == 1)
    {
        printf("%f + %f = %.2f", zn, zna, zn + zna);
    }
    else if (i == 2)
    {
        printf("%f - %f = %.2f", zn, zna, zn - zna);
    }
    else if (i == 3)
    {
        printf("%f * %f = %.2f", zn, zna, zn * zna);
    }
    else if (((i >= 4) && (zna == 0)) || ((i<1) && (zna == 0)))
    {
        printf("Ошибка\n");
    }
    else
    {
        printf("%f / %f = %.2f", zn, zna, zn / zna);
    }
    
}

// if (условие) 
// {
//     тело
// }

// if (условие) 
// {
//     тело
// }
// else
// {
//     тело
// }

// if (условие) 
// {
//     тело
// }
// else if (условие) 
// {
//     тело
// }

// if (условие) 
// {
//     тело
// }
// else if (условие) 
// {
//     тело
// }
// else
// {
//     тело
// }