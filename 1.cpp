#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
/* kumpulan deklarasi var-var tambahan */
int ID_KTP=1,cariID=0,ketemu,id,jml_data=0;
char pilihSatu;
char YT, cariNama[50];
int i, pilihGender,pilihBulan,pilihCari,pilihKelola;
int namaBln[13]={0,"Januari","Februari","Maret","April","Mei"
,"Juni","Juli","Agustus","September","Oktober"
,"November","Desember"};

/* kumpulan deklarasi typedef, struct */
typedef struct
{
char tempat[30];
int dd;
int mm;
int yyyy;
} tanggalLahir;
typedef struct
{
char desa[20];
int RT;
int RW;
char kecamatan[20];
char kabupaten[20];
} ket_alamat;
typedef struct
{
int ID;
char nama[50];
tanggalLahir TTL;
int gender;
ket_alamat alamat;
int agama;
char pekerjaan[30];
int status_perkawinan;
} data_sensus;
data_sensus KTP[100]={0};
/* kumpulan deklarasi fungsi-fungsi */
void label_herder()
{
printf("****************************************"
"***************************************n"
"n"
"ttt MANAJEMEN DATA SENSUS 2012n"
"n"
"******************************************"
"*************************************nn");
}
void menuSatu()
{
printf("ttt1. Input Datan"
"ttt2. Kelola Datan"
"ttt3. Tampilkan data ringkasn"
"ttt4. Exit Programn");
}
void perintah()
{
printf("ntttPerintah : ");
}
int fc_namaBulan(int bln)
{
switch(bln)
{
case 1:return namaBln[1];break;
case 2:return namaBln[2];break;
case 3:return namaBln[3];break;
case 4:return namaBln[4];break;
case 5:return namaBln[5];break;
case 6:return namaBln[6];break;
case 7:return namaBln[7];break;
case 8:return namaBln[8];break;
case 9:return namaBln[9];break;
case 10:return namaBln[10];break;
case 11:return namaBln[11];break;
case 12:return namaBln[12];break;
default : return "-";break;
}
}
int fc_gender(int ang)
{
switch(ang)
{
case 1 : return "Laki-laki";break;
case 2 : return "Perempuan";break;
default : return "-";break;
}
}
int fc_agama(int ang)
{
switch(ang)
{
case 1 : return "Islam";break;
case 2 : return "Katolik";break;
case 3 : return "Kristen";break;
case 4 : return "Hindu";break;
case 5 : return "Budah";break;
case 6 : return "Lainnya";break;
default : return "-";break;
}
}
int fc_status_perkawinan(int ang)
{
switch(ang)
{
case 1 : return "Kawin";break;
case 2 : return "Belum kawin";break;
default : return "-";break;
}
}

int main()
{

utama:
system("cls");
label_herder();
menuSatu();
ErrorSatu:
perintah();
scanf("%c",&pilihSatu);
switch(pilihSatu)
{
case '1':
/*Input data-menu level1*/
input:
system("cls");
fflush(stdin);
printf("tt =====================n"
"tt Input data pendudukn"
"tt =====================nn"
"tttNama Lengkapt: ");
gets(KTP[ID_KTP].nama);fflush(stdin);
printf("tttTempat lahirt: ");
gets(KTP[ID_KTP].TTL.tempat);fflush(stdin);
printf("tttTanggal lahirt: ");
scanf("%d",&KTP[ID_KTP].TTL.dd);fflush(stdin);
printf("tttBulan (angka)t: ");
scanf("%d",&KTP[ID_KTP].TTL.mm);fflush(stdin);
printf("tttTahun (angka)t: ");
scanf("%d",&KTP[ID_KTP].TTL.yyyy);fflush(stdin);
printf("tttJenis kelaminn"
"ttt 1. Laki-lakin"
"ttt 2. PerempuanntttKodet: ");
scanf("%d",&KTP[ID_KTP].gender);fflush(stdin);
printf("tttAlamat n"
"ttt Desat: ");
gets(KTP[ID_KTP].alamat.desa);fflush(stdin);
printf("ttt RTt: ");
scanf("%d",&KTP[ID_KTP].alamat.RT);fflush(stdin);
printf("ttt RWt: ");
scanf("%d",&KTP[ID_KTP].alamat.RW);fflush(stdin);
printf("ttt Kecamatant: ");
gets(KTP[ID_KTP].alamat.kecamatan);fflush(stdin);
printf("ttt Kabupatent: ");
gets(KTP[ID_KTP].alamat.kabupaten);fflush(stdin);
printf("tttAgama n"
"ttt 1. Islamn"
"ttt 2. Katolikn"
"ttt 3. Kristenn"
"ttt 4. Hindun"
"ttt 5. Budhan"
"ttt 6. Lainnyan"
"tttkode t: ");
scanf("%d",&KTP[ID_KTP].agama);fflush(stdin);
printf("tttPekerjaan t: ");
gets(KTP[ID_KTP].pekerjaan);fflush(stdin);
printf("tttStatus perkawinan t:n"
"ttt 1. Kawinn"
"ttt 2. Belum kawinn"
"tttkode t: ");
scanf("%d",&KTP[ID_KTP].status_perkawinan);fflush(stdin);
KTP[ID_KTP].ID=ID_KTP;

ID_KTP +=1;
fflush(stdin);
printf("nttInput data lagi? "
"Y/T/lainnya untuk keluar. ");
scanf("%c",&YT);
switch(YT)
{
case 'y':case 'Y': goto input;break;
blmjawab:
case 't':case 'T':
fflush(stdin);
printf("tKembali ke Menu Utama? Y untuk Ya,"
" atau lainnya untuk keluar. ");
scanf("%c",&YT);
switch(YT)
{
case ' ':case 'n':
case 'y':case 'Y': goto utama;break;
default: exit(1);
}
break;
}
break;
case '2':
caridata :
system("cls");
fflush(stdin);
printf("tt ======================n"
"tt Cari data pendudukn"
"tt ======================nn");
printf("ttCari berdasarkan :n"
"ttt 1. ID pendudukn"
"ttt 2. Kembalin"
"ttKode: "); scanf("%d", &pilihCari);
switch(pilihCari)
{
case 1:
fflush(stdin);
printf("tttID : ");scanf("%d",&cariID);
if(cariID==0){
printf("ttt========================n"
"ttt Tidak ada ID : 0n"
"ttt========================nn");
goto blmjawab;}
if(KTP[cariID].ID==cariID)
{
system("cls");
printf("ttt===================n"
"ttt Data ditemukan!n"
"ttt===================n");
datacari:
printf("ttPenduduk dengan IDt: %dn"
,KTP[cariID].ID);
printf("ttNama ttt: %sn"
,KTP[cariID].nama);
printf("ttTempat, Tanggal Lahir "
"t: %s, %d %s %dn"
,KTP[cariID].TTL.tempat
,KTP[cariID].TTL.dd
,fc_namaBulan(KTP[cariID].TTL.mm)
,KTP[cariID].TTL.yyyy);
printf("ttJenis kelamintt: %sn"
,fc_gender(KTP[cariID].gender));
printf("ttAlamatn"
"tt Desattt: %sn"
,KTP[cariID].alamat.desa);
printf("tt RTttt: %dn"
,KTP[cariID].alamat.RT);
printf("tt RWttt: %dn"
,KTP[cariID].alamat.RW);
printf("tt Kecamatantt: %sn"
,KTP[cariID].alamat.kecamatan);
printf("tt Kabupatentt: %sn"
,KTP[cariID].alamat.kabupaten);
printf("ttAgama ttt: %sn"
,fc_agama(KTP[cariID].agama));
printf("ttPekerjaantt: %sn"
,KTP[cariID].pekerjaan);
printf("ttStatus perkawinant: %snn"
,fc_status_perkawinan(KTP[cariID].status_perkawinan));
/* menu untuk kelola hapus dan edit data */
printf("ttt===================n"
"ttt Kelola datan"
"ttt===================nn"
"ttt 1. Edit datan"
"ttt 2. Hapus datan"
"ttt 3. Cari lagin"
"ttt 4. Kembali ke menu utaman"
"ttt 5. Keluarnn"
"tttPerintah : "
);scanf("%d",&pilihKelola);
switch(pilihKelola)
{
case 1 :
/*Edit data*/
system("cls");
fflush(stdin);
printf("tt ======================n"
"tt Edit data pendudukn"
"tt ======================nn");
printf("tttNama sebelumnya : %sn"
,KTP[cariID].nama);
printf("tttNama Barut: ");
gets(KTP[cariID].nama);fflush(stdin);
printf("tttTempat lahir sebelumnyat: %sn"
,KTP[cariID].TTL.tempat);
printf("tttTempat lahirt: ");
gets(KTP[cariID].TTL.tempat);fflush(stdin);
printf("tttTanggal lahir sebelumnyat: %dn"
,KTP[cariID].TTL.dd);
printf("tttTanggal lahirt: ");
scanf("%d",&KTP[cariID].TTL.dd);fflush(stdin);
printf("tttBulan lahir sebelumnyat: %dn"
,KTP[cariID].TTL.mm);
printf("tttBulan (angka)t: ");
scanf("%d",&KTP[cariID].TTL.mm);fflush(stdin);
printf("tttTahun lahir sebelumnyat: %dn"
,KTP[cariID].TTL.yyyy);
printf("tttTahun (angka)t: ");
scanf("%d",&KTP[cariID].TTL.yyyy);fflush(stdin);
printf("tttJenis kelamin sebelumnya t: %sn"
,fc_gender(KTP[cariID].gender));
printf("tttJenis kelaminn"
"ttt 1. Laki-lakin"
"ttt 2. PerempuanntttKodet: ");
scanf("%d",&KTP[cariID].gender);fflush(stdin);
printf("ttAlamat sebelumnyan"
"tt Desattt: %sn"
,KTP[cariID].alamat.desa);
printf("tt RTttt: %dn"
,KTP[cariID].alamat.RT);
printf("tt RWttt: %dn"
,KTP[cariID].alamat.RW);
printf("tt Kecamatantt: %sn"
,KTP[cariID].alamat.kecamatan);
printf("tt Kabupatentt: %sn"
,KTP[cariID].alamat.kabupaten);
printf("tttAlamat barun"
"ttt Desat: ");
gets(KTP[cariID].alamat.desa);fflush(stdin);
printf("ttt RTt: ");
scanf("%d",&KTP[cariID].alamat.RT);fflush(stdin);
printf("ttt RWt: ");
scanf("%d",&KTP[cariID].alamat.RW);fflush(stdin);
printf("ttt Kecamatant: ");
gets(KTP[cariID].alamat.kecamatan);fflush(stdin);
printf("ttt Kabupatent: ");
gets(KTP[cariID].alamat.kabupaten);fflush(stdin);
printf("ttAgama sebelumnyat: %sn"
,fc_agama(KTP[cariID].agama));
printf("tttAgama n"
"ttt 1. Islamn"
"ttt 2. Katolikn"
"ttt 3. Kristenn"
"ttt 4. Hindun"
"ttt 5. Budhan"
"ttt 6. Lainnyan"
"tttkode t: ");
scanf("%d",&KTP[cariID].agama);fflush(stdin);
printf("ttPekerjaan sebelumnyatt: %sn"
,KTP[cariID].pekerjaan);
printf("tttPekerjaan t: ");
gets(KTP[cariID].pekerjaan);fflush(stdin);
printf("ttStatus sebelumnyatt: %sn"
,fc_status_perkawinan(KTP[cariID].agama));
printf("tttStatus perkawinan t:n"
"ttt 1. Kawinn"
"ttt 2. Belum kawinn"
"tttkode t: ");
scanf("%d",&KTP[cariID].status_perkawinan);
fflush(stdin);
system("cls");
printf("ttt========================n"
"ttt Data berhasil diubahn"
"ttt========================nn"
);goto datacari;

case 2 :
/*Hapus data*/
system("cls");
KTP[cariID].ID=NULL;
printf("ttt=====================================n"
"ttt Data dengan ID : %d telah dihapusn"
"ttt=====================================n"
"n"
,cariID);
goto blmjawab;
break;
default :
case 3 : goto caridata; break;
case 4 : goto utama;break;
case 5 : exit(1);
}
}
else{
printf("tt======================================n"
"tt Tidak ditemukan data untuk ID : %dn"
"tt======================================n"
"nn",cariID);
goto blmjawab;
}
break;
case 2:
goto utama;
break;
default: goto caridata;
}

break;
case 'n':case' ': goto utama;
default:
printf("tttInput salah. Ulangin");
fflush(stdin);
goto ErrorSatu;
break;
case '3': /*data ringkas, if ID!=0*/
system("cls");
for(i=1;i<ID_KTP;i++){
if(KTP[i].ID!=0)
jml_data+=1;
else{jml_data=0;}
}
if(jml_data==0){
printf("ttt===============n"
"ttt Data kosongn"
"ttt===============nn");
goto blmjawab;
}
printf("ttt==================n"
"ttt Ringkasan datan"
"ttt==================nn"
"tt=========================================n"
"tt| ID | NAMA |n"
"tt=========================================n");
for(i=1;i<ID_KTP;i++){
if(KTP[i].ID!=0)
printf("tt|%5d | %27s |n"
"tt|=======================================|n"
,KTP[i].ID,KTP[i].nama);
}printf("n");
goto blmjawab;
break;
case '4': exit(1);
}

}
