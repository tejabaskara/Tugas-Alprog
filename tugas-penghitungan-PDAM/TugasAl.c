#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define JATUH_TEMPO 25
#define DENDA_TEMPO 25000

FILE *file;

void outro()
{
    printf("\t|============================================|\n");
    printf("\t\tTerimakasih Telah Mencoba    \n");
    printf("\t\tProgram ini dibuat oleh : \n");
    printf("\tAnak Agung Arya Harischandra Jaya ( 2205551049 )\n");
    printf("\t\tI Gede Teja Baskara ( 2205551065 )\n");
    printf("\t|============================================|\n\n");
}

int D1_1()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    int angka = 10;
    

    

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 1780) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 2060) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 5880) + DENDA_TEMPO;
        }
        else
        {
            D1_1();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 1780;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 2060;
        }
        else if (debit > 20)
        {
            hasil = debit * 5880;
        }
        else
        {
            D1_1();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-1\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-1\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D1_1();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }
    
    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D1-1\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D1_2()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 2060) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 2340) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 5940) + DENDA_TEMPO;
        }
        else
        {
            D1_2();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 2060;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 2340;
        }
        else if (debit > 20)
        {
            hasil = debit * 5940;
        }
        else
        {
            D1_2();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-2\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-2\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D1_2();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D1-2\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D1_3()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 6340) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 9200) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 9600) + DENDA_TEMPO;
        }
        else
        {
            D1_3();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 6340;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 9200;
        }
        else if (debit > 20)
        {
            hasil = debit * 9600;
        }
        else
        {
            D1_3();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-3\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-3\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D1_2();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D1-3\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D1_4()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 6420) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 9350) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 9650) + DENDA_TEMPO;
        }
        else
        {
            D1_2();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 6420;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 9350;
        }
        else if (debit > 20)
        {
            hasil = debit * 9650;
        }
        else
        {
            D1_2();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D1-4\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D1-4\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D1_4();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D1-4\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D2_1()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 2340) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 2620) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 6000) + DENDA_TEMPO;
        }
        else
        {
            D2_1();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 2340;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 2620;
        }
        else if (debit > 20)
        {
            hasil = debit * 6000;
        }
        else
        {
            D2_1();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D2-1\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D2-1\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D2_1();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D2-1\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D2_2()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 2620) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 2900) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 6060) + DENDA_TEMPO;
        }
        else
        {
            D2_2();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 2620;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 2900;
        }
        else if (debit > 20)
        {
            hasil = debit * 6060;
        }
        else
        {
            D2_2();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D2-2\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D2-2\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D2_2();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D2-2\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D2_3()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 6490) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 9500) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 9800) + DENDA_TEMPO;
        }
        else
        {
            D2_3();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 6490;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 9500;
        }
        else if (debit > 20)
        {
            hasil = debit * 9800;
        }
        else
        {
            D2_3();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D2-3\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D2-3\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D2_3();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D2-3\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D2_4()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 6490) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 9500) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 9800) + DENDA_TEMPO;
        }
        else
        {
            D2_4();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 6490;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 9500;
        }
        else if (debit > 20)
        {
            hasil = debit * 9800;
        }
        else
        {
            D2_4();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D2-4\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D2-4\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D2_4();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D2-4\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D3_1()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 2900) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 3180) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 6120) + DENDA_TEMPO;
        }
        else
        {
            D3_1();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 2900;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 3180;
        }
        else if (debit > 20)
        {
            hasil = debit * 6120;
        }
        else
        {
            D3_1();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D3-1\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D3-1\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D3_1();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D3-1\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D3_2()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 3180) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 3460) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 6180) + DENDA_TEMPO;
        }
        else
        {
            D3_2();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 3180;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 3460;
        }
        else if (debit > 20)
        {
            hasil = debit * 6180;
        }
        else
        {
            D3_2();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D3-2\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D3-2\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D3_2();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D3-2\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D3_3()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 6640) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 9800) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 10100) + DENDA_TEMPO;
        }
        else
        {
            D3_3();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 6640;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 9800;
        }
        else if (debit > 20)
        {
            hasil = debit * 10100;
        }
        else
        {
            D3_3();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D3-3\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D3-3\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D3_3();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D3-3\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D3_4()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 6720) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 9950) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 10250) + DENDA_TEMPO;
        }
        else
        {
            D3_4();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 6720;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 9950;
        }
        else if (debit > 20)
        {
            hasil = debit * 10250;
        }
        else
        {
            D3_4();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D3-4\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D3-4\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D3_4();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D3-4\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D4_1()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 3460) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 3740) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 6240) + DENDA_TEMPO;
        }
        else
        {
            D4_1();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 3460;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 3740;
        }
        else if (debit > 20)
        {
            hasil = debit * 6240;
        }
        else
        {
            D4_1();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D4-1\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D4-1\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D4_1();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D4-1\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D4_2()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 3740) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 4020) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 6300) + DENDA_TEMPO;
        }
        else
        {
            D4_2();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 3740;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 4020;
        }
        else if (debit > 20)
        {
            hasil = debit * 6300;
        }
        else
        {
            D4_2();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D4-2\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D4-2\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D4_2();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D4-2\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D4_3()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 6790) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 10100) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 10400) + DENDA_TEMPO;
        }
        else
        {
            D4_3();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 6790;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 10100;
        }
        else if (debit > 20)
        {
            hasil = debit * 10400;
        }
        else
        {
            D4_3();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D4-3\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D4-3\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D4_3();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D4-3\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D4_4()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 6870) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 10250) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 10550) + DENDA_TEMPO;
        }
        else
        {
            D4_4();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 6870;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 10250;
        }
        else if (debit > 20)
        {
            hasil = debit * 10550;
        }
        else
        {
            D4_4();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D4-4\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D4-4\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D4_4();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D4-4\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D5_1()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 6940) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 10400) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 10700) + DENDA_TEMPO;
        }
        else
        {
            D5_1();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 6940;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 10400;
        }
        else if (debit > 20)
        {
            hasil = debit * 10700;
        }
        else
        {
            D5_1();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D5-1\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D5-1\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D5_1();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D5-1\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D5_2()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 7020) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 10550) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 10850) + DENDA_TEMPO;
        }
        else
        {
            D5_2();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 7020;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 10550;
        }
        else if (debit > 20)
        {
            hasil = debit * 10850;
        }
        else
        {
            D5_2();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D5-2\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D5-2\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D5_2();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D5-2\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D5_3()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 7090) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 10700) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 11000) + DENDA_TEMPO;
        }
        else
        {
            D5_3();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 7020;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 10550;
        }
        else if (debit > 20)
        {
            hasil = debit * 10850;
        }
        else
        {
            D5_3();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D5-3\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D5-3\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D5_3();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D5-3\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int D5_4()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 7170) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 10850) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 11150) + DENDA_TEMPO;
        }
        else
        {
            D5_4();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 7170;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 10850;
        }
        else if (debit > 20)
        {
            hasil = debit * 11150;
        }
        else
        {
            D5_4();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: D5-4\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: D5-4\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            D5_4();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: D5-4\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int E1_1()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 9200) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 9850) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 10950) + DENDA_TEMPO;
        }
        else
        {
            E1_1();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 9200;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 9850;
        }
        else if (debit > 20)
        {
            hasil = debit * 10950;
        }
        else
        {
            E1_1();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: E1_1\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: E1_1\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            E1_1();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: E1-1\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int E1_2()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 9500) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 10150) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 11250) + DENDA_TEMPO;
        }
        else
        {
            E1_2();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 9500;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 10150;
        }
        else if (debit > 20)
        {
            hasil = debit * 11250;
        }
        else
        {
            E1_2();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: E1_2\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: E1_2\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            E1_2();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }
    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: E1-2\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int E1_3()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 9800) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 10450) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 11550) + DENDA_TEMPO;
        }
        else
        {
            E1_3();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 9800;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 10450;
        }
        else if (debit > 20)
        {
            hasil = debit * 11550;
        }
        else
        {
            E1_3();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: E1_3\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: E1_3\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            E1_3();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: E1-3\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int E1_4()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 10100) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 10750) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 11850) + DENDA_TEMPO;
        }
        else
        {
            E1_4();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 10100;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 10750;
        }
        else if (debit > 20)
        {
            hasil = debit * 11850;
        }
        else
        {
            E1_4();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: E1_4\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: E1_4\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            E1_4();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: E1-4\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int E2_1()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 10400) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 11050) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 12150) + DENDA_TEMPO;
        }
        else
        {
            E2_1();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 10400;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 11050;
        }
        else if (debit > 20)
        {
            hasil = debit * 12150;
        }
        else
        {
            E2_1();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: E2_1\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: E2_1\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            E2_1();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: E2-1\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int E2_2()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 10700) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 11350) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 12550) + DENDA_TEMPO;
        }
        else
        {
            E2_2();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 10700;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 11350;
        }
        else if (debit > 20)
        {
            hasil = debit * 12550;
        }
        else
        {
            E2_2();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: E2_2\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: E2_2\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            E2_2();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: E2-2\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int E2_3()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 11000) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 11650) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 13150) + DENDA_TEMPO;
        }
        else
        {
            E2_3();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 11000;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 11650;
        }
        else if (debit > 20)
        {
            hasil = debit * 13150;
        }
        else
        {
            E2_3();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: E2_3\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: E2_3\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            E2_3();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: E2-3\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int E2_4()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 11300) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 11950) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 13950) + DENDA_TEMPO;
        }
        else
        {
            E2_4();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 11300;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 11950;
        }
        else if (debit > 20)
        {
            hasil = debit * 13950;
        }
        else
        {
            E2_4();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: E2_4\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: E2_4\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            E2_4();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: E2-4\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int E3_1()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 11600) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 12250) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 14750) + DENDA_TEMPO;
        }
        else
        {
            E3_1();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 11600;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 12250;
        }
        else if (debit > 20)
        {
            hasil = debit * 14750;
        }
        else
        {
            E3_1();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: E3_1\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: E3_1\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            E3_1();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: E3-1\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int E3_2()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 11900) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 12550) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 15050) + DENDA_TEMPO;
        }
        else
        {
            E3_2();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 11900;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 12550;
        }
        else if (debit > 20)
        {
            hasil = debit * 15050;
        }
        else
        {
            E3_2();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: E3_2\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: E3_2\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            E3_2();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: E3-2\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int E3_3()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 12200) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 12850) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 15850) + DENDA_TEMPO;
        }
        else
        {
            E3_3();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 12200;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 12850;
        }
        else if (debit > 20)
        {
            hasil = debit * 15850;
        }
        else
        {
            E3_3();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: E3_3\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: E3_3\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            E3_3();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: E3-3\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int E3_4()
{
    float debit_1, debit_2, debit;
    int hasil, ulangi, validasi;
    int hours, minutes, seconds, hari, bulan, tahun;

    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    hari = local->tm_mday;
    bulan = local->tm_mon + 1;
    tahun = local->tm_year + 1900;

    char name[50];
    printf("|================================================|\n");
    printf("|                 Masukkan Data Anda             |\n");
    printf("|================================================|\n");
    printf("|Masukkan nama anda: ");
    getchar();
    fgets(name, sizeof(name), stdin);
    system("clear");

    printf("|====================================================|\n");
    printf("|                 Masukkan Data Anda                 |\n");
    printf("|====================================================|\n");
    printf("|Masukkan debit pemakaian air anda bulan lalu (m^3): ");
    scanf("%f", &debit_1);
    printf("|Masukkan debit pemakaian air anda bulan ini (m^3): ");
    scanf("%f", &debit_2);
    system("clear");

    debit = debit_2 - debit_1;

    if (hari >= JATUH_TEMPO)
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = (10 * 12500) + DENDA_TEMPO;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = (debit * 13150) + DENDA_TEMPO;
        }
        else if (debit > 20)
        {
            hasil = (debit * 16650) + DENDA_TEMPO;
        }
        else
        {
            E3_4();
        }
    }
    else
    {
        if (debit >= 0 && debit <= 10)
        {
            hasil = 10 * 12500;
        }
        else if (debit >= 11 && debit <= 20)
        {
            hasil = debit * 13150;
        }
        else if (debit > 20)
        {
            hasil = debit * 16650;
        }
        else
        {
            E3_4();
        }
    }

    printf("|================================================|\n");
    printf("|                     Data Anda                  |\n");
    printf("|================================================|\n");
    printf("|Nama: %s", name);
    printf("|Kelompok: E3_4\n");
    printf("|Debit air penggunaan bulan lalu: %.2f m^3\n", debit_1);
    printf("|Debit air penggunaan bulan ini: %.2f m^3\n", debit_2);
    printf("|Apakah data di atas benar ? \n");
    printf("|1. iya\n");
    printf("|2. tidak\n\n: ");
    scanf("%d", &validasi);
    system("clear");
    if (validasi == 1)
    {
        printf("|================================================|\n");
        printf("|               Hasil Dari Perhitungan           |\n");
        printf("|================================================|\n");
        printf("|Nama: %s", name);
        printf("|Kelompok: E3_4\n");
        printf("|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
        printf("|Nominal Hasil: Rp %d,- ", hasil);
    }
    else if (validasi == 2)
    {
        printf("Apakah anda ingin mengulangi lagi ?\n");
        printf("1. iya\n");
        printf("2. tidak\n\n");
        scanf(": %d", &ulangi);
        if (ulangi == 1)
        {
            E3_4();
        }
        else
        {
            outro();
        }
    }
    else
    {
        outro();
    }

    file = fopen("struk hasil.txt", "w");

    if (file == NULL)
    {
        printf("error");
        exit(1);
    }

    fprintf(file, "|================================================|\n");
    fprintf(file, "|               Hasil Dari Perhitungan           |\n");
    fprintf(file, "|================================================|\n");
    fprintf(file, "|Nama: %s", name);
    fprintf(file, "|Kelompok: E3-4\n");
    fprintf(file, "|Tanggal: %02d-%02d-%d\n", hari, bulan, tahun);
    fprintf(file, "|Nominal Hasil: Rp %d,- ", hasil);
    fclose(file);

    return 0;
}

int rumah_tangga()
{
    int daya, lebar, usaha, validasi;

    printf("|================================================|\n");
    printf("|          Perhitungan Rumah Tangga              |\n");
    printf("|================================================|\n");
    printf("|Apakah terdapat sebuah jenis usaha di dekat     |\n");
    printf("|rumah anda ?                                    |\n");
    printf("|1. iya                                          |\n");
    printf("|2. tidak                                        |\n");
    printf("|Masukkan pilihan anda:                          |\n\n");
    printf(": ");
    scanf("%d", &usaha);
    system("clear");
    printf("|================================================|\n");
    printf("|          Perhitungan Rumah Tangga              |\n");
    printf("|================================================|\n");
    printf("|Berapakah anda menggunakan daya listrik :       |\n");
    printf("|1. 450 VA                                       |\n");
    printf("|2. 900 VA                                       |\n");
    printf("|3. 1300 VA                                      |\n");
    printf("|4. Lebih dari 1300 VA                           |\n");
    printf("|Masukkan pilihan anda:                          |\n\n");
    printf(": ");
    scanf("%d", &daya);
    system("clear");
    if (usaha == 2)
    {
        printf("|================================================|\n");
        printf("|          Perhitungan Rumah Tangga              |\n");
        printf("|================================================|\n");
        printf("|Berapakah lebar jalan termasuk lebar got        |\n");
        printf("|di depan rumah anda:                            |\n");
        printf("|1. 0 - 3.99 m                                   |\n");
        printf("|2. 4 - 6.99 m                                   |\n");
        printf("|3. 7 - 10 m                                     |\n");
        printf("|4. lebih lebar dari 10 M                        |\n");
        printf("|Masukkan pilihan anda:                          |\n\n");
        printf(": ");
        scanf("%d", &lebar);
        system("clear");

        if (lebar == 1 && daya == 1)
        {
            D1_1();
        }
        else if (lebar == 1 && daya == 2)
        {
            D1_2();
        }
        else if (lebar == 1 && daya == 3)
        {
            D1_3();
        }
        else if (lebar == 1 && daya == 4)
        {
            D1_4();
        }
        else if (lebar == 2 && daya == 1)
        {
            D2_1();
        }
        else if (lebar == 2 && daya == 2)
        {
            D2_2();
        }
        else if (lebar == 2 && daya == 3)
        {
            D2_3();
        }
        else if (lebar == 2 && daya == 4)
        {
            D2_4();
        }
        else if (lebar == 3 && daya == 1)
        {
            D3_1();
        }
        else if (lebar == 3 && daya == 2)
        {
            D3_2();
        }
        else if (lebar == 3 && daya == 3)
        {
            D3_3();
        }
        else if (lebar == 3 && daya == 4)
        {
            D3_4();
        }
        else if (lebar == 4 && daya == 1)
        {
            D4_1();
        }
        else if (lebar == 4 && daya == 2)
        {
            D4_2();
        }
        else if (lebar == 4 && daya == 3)
        {
            D4_3();
        }
        else if (lebar == 4 && daya == 4)
        {
            D4_4();
        }
        else
        {
            printf("\n|================================================|\n");
            printf("\tinput yang anda masukkan salah");
            printf("\n|================================================|\n");
            printf("|Apakah anda ingin mengulanginya lagi ? \n");
            printf("|1. iya\n");
            printf("|2. tidak\n\n: ");
            scanf("%d", &validasi);
            system("clear");
            if (validasi == 1)
            {
                rumah_tangga();
            }
            else if (validasi == 2)
            {
                outro();
            }
            else
            {
                outro();
            }
        }
    }
    else if (usaha == 1)
    {
        if (daya == 1)
        {
            D5_1();
        }
        else if (daya == 2)
        {
            D5_2();
        }
        else if (daya == 3)
        {
            D5_3();
        }
        else if (daya == 4)
        {
            D5_4();
        }
        else
        {
            printf("\n|================================================|\n");
            printf("\tinput yang anda masukkan salah");
            printf("\n|================================================|\n");
            printf("|Apakah anda ingin mengulanginya lagi ? \n");
            printf("|1. iya\n");
            printf("|2. tidak\n\n: ");
            scanf("%d", &validasi);
            system("clear");
            if (validasi == 1)
            {
                rumah_tangga();
            }
            else if (validasi == 2)
            {
                outro();
            }
            else
            {
                outro();
            }
        }
    }
    else
    {
        printf("\n|================================================|\n");
        printf("\tinput yang anda masukkan salah");
        printf("\n|================================================|\n");
        printf("|Apakah anda ingin mengulanginya lagi ? \n");
        printf("|1. iya\n");
        printf("|2. tidak\n\n: ");
        scanf("%d", &validasi);
        system("clear");
        if (validasi == 1)
        {
            rumah_tangga();
        }
        else if (validasi == 2)
        {
            outro();
        }
        else
        {
            outro();
        }
    }

    return 0;
}

int niaga()
{
    int daya, lebar, validasi;

    printf("|================================================|\n");
    printf("|              Perhitungan Niaga                 |\n");
    printf("|================================================|\n");
    printf("|================================================|\n");
    printf("|Berapakah lebar jalan termasuk lebar got        |\n");
    printf("|di depan rumah anda:                            |\n");
    printf("|1. 0 - 6.99 m                                   |\n");
    printf("|2. 7 - 10 m                                     |\n");
    printf("|3. lebih lebar dari 10 m                        |\n");
    printf("|Masukkan pilihan anda:                          |\n");
    printf("|: ");
    scanf("%d", &lebar);
    system("clear");
    printf("|================================================|\n");
    printf("|Berapakah anda menggunakan daya listrik :       |\n");
    printf("|1. 450 VA                                       |\n");
    printf("|2. 900 VA                                       |\n");
    printf("|3. 1300 VA                                      |\n");
    printf("|4. Lebih besar daripada 1300 VA                 |\n");
    printf("|Masukkan pilihan anda:                          |\n");
    printf("|: ");
    scanf("%d", &daya);
    system("clear");

    if (lebar == 1 && daya == 1)
    {
        E1_1();
    }
    else if (lebar == 1 && daya == 2)
    {
        E1_2();
    }
    else if (lebar == 1 && daya == 3)
    {
        E1_3();
    }
    else if (lebar == 1 && daya == 4)
    {
        E1_4();
    }
    else if (lebar == 2 && daya == 1)
    {
        E2_1();
    }
    else if (lebar == 2 && daya == 2)
    {
        E2_2();
    }
    else if (lebar == 2 && daya == 3)
    {
        E2_3();
    }
    else if (lebar == 2 && daya == 4)
    {
        E2_4();
    }
    else if (lebar == 3 && daya == 1)
    {
        E3_1();
    }
    else if (lebar == 3 && daya == 2)
    {
        E3_2();
    }
    else if (lebar == 3 && daya == 3)
    {
        E3_3();
    }
    else if (lebar == 3 && daya == 4)
    {
        E3_4();
    }
    else
    {
        printf("\n|================================================|\n");
        printf("\tinput yang anda masukkan salah");
        printf("\n|================================================|\n");
        printf("|Apakah anda ingin mengulanginya lagi ? \n");
        printf("|1. iya\n");
        printf("|2. tidak\n\n: ");
        scanf("%d", &validasi);
        system("clear");
        if (validasi == 1)
        {
            rumah_tangga();
        }
        else if (validasi == 2)
        {
            outro();
        }
        else
        {
            outro();
        }
    }

    return 0;
}

int main()
{
    int pilihan, validasi;

    printf("|============================================|\n");
    printf("\t    Selamat Datang di     \n");
    printf("\t  Penghitungan Tarif Air  \n");
    printf("|============================================|\n");
    printf("|Pilihlah Jenis Kelompok Pelanggan :         |\n");
    printf("|1. Rumah Tangga                             |\n");
    printf("|2. Niaga                                    |\n");
    printf("|3. Keluar                                   |\n\n");
    printf(": ");
    scanf("%d", &pilihan);
    system("clear");
    switch (pilihan)
    {
    case 1:
        rumah_tangga();
        printf("\n|================================================|\n");
        printf("|Apakah anda ingin mengulanginya lagi ? \n");
        printf("|1. iya\n");
        printf("|2. tidak\n\n: ");
        scanf("%d", &validasi);
        system("clear");
        if (validasi == 1)
        {
            main();
        }
        else if (validasi == 2)
        {
            outro();
        }
        else
        {
            outro();
        }
        break;
    case 2:
        niaga();
        printf("\n|================================================|\n");
        printf("|Apakah anda ingin mengulanginya lagi ? \n");
        printf("|1. iya\n");
        printf("|2. tidak\n\n: ");
        scanf("%d", &validasi);
        system("clear");
        if (validasi == 1)
        {
            main();
        }
        else if (validasi == 2)
        {
            outro();
        }
        else
        {
            outro();
        }
        break;
    case 3:
        outro();
        break;
    default:
        printf("nilai yang anda masukkan salah");
        printf("\n|================================================|\n");
        printf("|Apakah anda ingin mengulanginya lagi ? \n");
        printf("|1. iya\n");
        printf("|2. tidak\n\n: ");
        scanf("%d", &validasi);
        system("clear");
        if (validasi == 1)
        {
            main();
        }
        else if (validasi == 2)
        {
            outro();
        }
        else
        {
            outro();
        }
        break;
    }

    return 0;
}