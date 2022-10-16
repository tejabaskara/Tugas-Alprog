#include <stdio.h>
#define PHI 3.14159265358979323846

//fungsi kecepatan mulai
int kecepatan()
{
    float kecepatan, jarak, waktu;

    printf("selamat datang pada penghitungan kecepatan\n");
    printf("masukkan waktu perjalanan: ");
    scanf("%f", &waktu);
    printf("masukkan jarak perjalanan: ");
    scanf("%f", &jarak);
    
    kecepatan = jarak /  waktu;
    
    printf("\nluas dari persegi adalah : %.2f", kecepatan);
return 0;
}
//fungsi kecepatan selesai

//fungsi keliling dan luas bangun datar
int persegi()
{
    int sisi, luas, keliling;
    
    printf("selamat datang pada penghitungan luas dan keliling persegi\n");
    printf("masukkan sisi persegi: ");
    scanf("%i", &sisi);
    
    luas = sisi * sisi;
    keliling = 4 * sisi;
    
    printf("\nluas dari persegi adalah : %i", luas);
    printf ("\nkeliling dari persegi adalah : %i", keliling);
return 0;
}

int persegi_panjang()
{
    int panjang, lebar, luas, keliling;

    printf("\nselamat datang di perhitungan luas dan keliling persegi panjang\n");
    printf("masukkan panjang persegi: ");
    scanf("%d", &panjang);
    printf("masukkkan lebar persegi: ");
    scanf("%d", &lebar);

    luas = panjang*lebar;
    keliling = 2*(panjang+lebar);

    printf("\nluas dari persegi panjang adalah %d \n",luas);
    printf("keliling dari persegi panjang adalah %d ", keliling);
    return 0;
}
int segitiga()
{
    int alas, tinggi, sisi_1, sisi_2, luas, keliling;

    printf("\nselamat datang di perhitungan luas dan keliling persegi panjang\n");
    printf("masukkan alas segitiga: ");
    scanf("%d", &alas);
    printf("masukkkan tinggi segitiga: ");
    scanf("%d", &tinggi);
    printf("masukkkan sisi segitiga selain sisi alas: ");
    scanf("%d", &sisi_1);
    printf("masukkkan sisi segitiga selain sisi-sisi yang sudah dimasukkan: ");
    scanf("%d", &sisi_2);

    luas = 0.5*alas*tinggi;
    keliling = alas + sisi_1 + sisi_2;

    printf("\nluas dari persegi panjang adalah %d \n",luas);
    printf("keliling dari persegi panjang adalah %d ", keliling);
    return 0;
}
int lingkaran()
{
    int jari_jari; 
    float luas, keliling;

    printf("\nselamat datang di perhitungan luas dan keliling persegi panjang\n");
    printf("masukkan alas jari-jari lingkaran: ");
    scanf("%d", &jari_jari);

    luas = PHI * jari_jari * jari_jari;
    keliling = 2 * PHI * jari_jari;

    printf("\nluas dari persegi panjang adalah %.2f \n",luas);
    printf("keliling dari persegi panjang adalah %.2f ", keliling);
    return 0;
}
//fungsi keliling dan luas bangun datar selesai

int deret_baris() {
    int nilai_n , nilai_a, beda, hasil, jumlah_suku;
    float a = 0.5;
    
    printf("selamat datang pada penghitungan baris aritmatika\n");
    printf("masukkan nilai suku pertama : ");
    scanf("%i", &nilai_a);
    printf("masukkan suku ke berapa yang akan  dicari : ");
    scanf("%i", &nilai_n);
    printf("masukkan nilai beda atau selisih antar suku : ");
    scanf("%i", &beda);
    
    hasil = nilai_a + ((nilai_n - 1) * beda);
    jumlah_suku = a * nilai_n *(nilai_a + hasil); 
    
    printf("\nnilai dari suku ke-%i adalah %i ", nilai_n, hasil);
    printf("\njumlah dari suku ke-%i adalah %i", nilai_n, jumlah_suku);
    printf("\nTerimakasih telah mencoba");
    
    return 0;
}

//fungsi untuk memanggil 
int keliling_luas()
{
    int input = 0;

    printf("\n\t----------------------------------------------------");
    printf("\n\t||         KELILING DAN LUAS BANGUN DATAR         ||");
    printf("\n\t----------------------------------------------------");
    printf("\npilih menu di bawah ini\n");
    printf("1. Persegi\n");
    printf("2. Persegi panjang\n");
    printf("3. Segitiga\n");
    printf("4. Lingkaran\n");
    printf("----------------------------------------------------\n");
    printf("= ");
    scanf("%d", &input);
    system("clear"); //untuk membersihkan tampilan output sebelumnya

    if (input < 1 || input > 4){ //untuk memvalidasi nilai yang dimasukkan
        printf("\nsilahkan coba lagi\n");
        keliling_luas();
    }
    
    switch(input){
    case 1 :
    persegi();
    break;
    case 2 :
    persegi_panjang();
    break;
    case 3 :
    segitiga();
    break;
    case 4 :
    lingkaran();
    break;
    }
}

int main ()
{
    int input = 0;


    printf("\n\t----------------------------------------------------");
    printf("\n\t||   Program Gabungan Algoritma Pemrograman       ||");
    printf("\n\t----------------------------------------------------");
    printf("\npilih menu di bawah ini\n");
    printf("1. Keliling dan luas\n");
    printf("2. Baris dan deret\n");
    printf("3. Kecepatan\n");
    printf("4. Peluang\n");
    printf("----------------------------------------------------\n");
    printf("= ");
    scanf("%d", &input);
    system("clear");

    if (input < 1 || input > 5){
        printf("\nsilahkan coba lagi\n");
        main();
    }

    switch(input){
    case 1 :
    keliling_luas();
    break;
    case 2 :
    deret_baris();
    break;
    case 3 :
    kecepatan();
    break;
    case 4 :
    
    break;
    }

    return 0;
}