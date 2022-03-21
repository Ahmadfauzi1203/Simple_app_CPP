#include <stdio.h>
#include <conio.h>
#include <iostream.h>
#include <iomanip.h>

judul()
{
printf("                 PUSAT GROSIR PAKAIAN MUSLIM PRIA\n");
printf("                           MECCA STORE          \n");
printf("                 *******************************\n");
}

garis()
{
printf("=================================================================\n");
}

struct
{
char kb[2],km,ku,merk[15],barang[20],ukuran[10];
int banyak;
long harga,subtotal;
}ms[20];

char pembeli[15],petugas[15],hari[30],lagi,menu;
int a,b;
long total,bayar,diskon,grand,kembali;

sum()
{
total= total+ms[a].subtotal;
}

main()
{
awal:
clrscr();
judul();
cout<<endl<<endl;
cout<<"Selamat Datang di Pusat Grosir Pakaian Muslim Pria \"MECCA STORE\".."<<endl<<endl;
cout<<"Pilihan Menu : "<<endl;
cout<<"     1. Input Data Transaksi"<<endl;
cout<<"     2. Log Out"<<endl<<endl;
garis();
cout<<"Inputkan Pilihan Anda = ";menu=getch();
cout<<menu<<endl;
cout<<"Tekan ENTER untuk melanjutkan..";getch();

if(menu=='1') goto transaksi;
else if(menu=='2') goto akhir;

transaksi:
clrscr();
judul();
cout<<endl;
cout<<"INPUT DATA TRANSAKSI"<<endl<<endl;;
cout<<"Hari, Tanggal [Hr/Tg/Bl/Th]   : ";cin>>hari;
cout<<"Nama Petugas : ";gets(petugas);
cout<<"Nama Pembeli : ";gets(pembeli);
cout<<"Banyak Data  : ";cin>>b;
cout<<endl<<endl;

atas:
for(a=1;a<=b;a++)
{
cout<<"Data ke - "<<a<<endl;
cout<<"Input Kode Barang [B/S/P/PK]                     : ";cin>>ms[a].kb;
cout<<"Input Kode Merk BJ[R/C/E] SA[A/W/G] PC[A/B/W]      "<<endl;
cout<<"           Paket 1[RAA] 2[CWB] 3[EGW]            : ";cin>>ms[a].km;
cout<<"Input Kode Ukuran [S/M/L]                        : ";cin>>ms[a].ku;
cout<<"Banyak Barang                                    : ";cin>>ms[a].banyak;
cout<<endl;

if(strcmp(ms[a].kb,"B")==0||strcmp(ms[a].kb,"b")==0)
{
 strcpy(ms[a].barang,"Baju");          //Baju
 if(ms[a].km=='R'||ms[a].km=='r')
  {
  strcpy(ms[a].merk,"Rabbani");        //merk rabbani
  if(ms[a].ku=='S'||ms[a].ku=='s')
  	{
  	strcpy(ms[a].ukuran,"Small");
  	ms[a].harga=145000;
  	}
  else if(ms[a].ku=='M'||ms[a].ku=='m')
   {
  	strcpy(ms[a].ukuran,"Medium");
  	ms[a].harga=148000;
  	}
  else if(ms[a].ku=='L'||ms[a].ku=='l')
   {
  	strcpy(ms[a].ukuran,"Large");
  	ms[a].harga=150000;
  	}
  	}
 else if(ms[a].km=='C'||ms[a].km=='c')
  {
  strcpy(ms[a].merk,"Carvil");               //Merk carvil
  if(ms[a].ku=='S'||ms[a].ku=='s')
  	{
  	strcpy(ms[a].ukuran,"Small");
  	ms[a].harga=185000;
  	}
  else if(ms[a].ku=='M'||ms[a].ku=='m')
   {
  	strcpy(ms[a].ukuran,"Medium");
  	ms[a].harga=188000;
  	}
  else if(ms[a].ku=='L'||ms[a].ku=='l')
   {
  	strcpy(ms[a].ukuran,"Large");
  	ms[a].harga=190000;
  	}
  }
 else if(ms[a].km=='E'||ms[a].km=='e')
  {
  strcpy(ms[a].merk,"Elzatta");           //Merk elzatta
  if(ms[a].ku=='S'||ms[a].ku=='s')
  	{
  	strcpy(ms[a].ukuran,"Small");
  	ms[a].harga=175000;
  	}
  else if(ms[a].ku=='M'||ms[a].ku=='m')
   {
  	strcpy(ms[a].ukuran,"Medium");
  	ms[a].harga=178000;
  	}
  else if(ms[a].ku=='L'||ms[a].ku=='l')
   {
  	strcpy(ms[a].ukuran,"Large");
  	ms[a].harga=180000;
  	}
  }
}

else if(strcmp(ms[a].kb,"S")==0||strcmp(ms[a].kb,"s")==0)
{
 strcpy(ms[a].barang,"Sarung");           //sarung
 if(ms[a].km=='A'||ms[a].km=='a')
  {
  strcpy(ms[a].merk,"Atlas");         //Merk Atlas
  if(ms[a].ku=='S'||ms[a].ku=='s')
  	{
  	strcpy(ms[a].ukuran,"Small");
  	ms[a].harga=50000;
  	}
  else if(ms[a].ku=='M'||ms[a].ku=='m')
   {
  	strcpy(ms[a].ukuran,"Medium");
  	ms[a].harga=53000;
  	}
  else if(ms[a].ku=='L'||ms[a].ku=='l')
   {
  	strcpy(ms[a].ukuran,"Large");
  	ms[a].harga=55000;
  	}
  }
 else if(ms[a].km=='W'||ms[a].km=='w')
  {
  strcpy(ms[a].merk,"Wadimor");         //Merk Wadimor
  if(ms[a].ku=='S'||ms[a].ku=='s')
  	{
  	strcpy(ms[a].ukuran,"Small");
  	ms[a].harga=60000;
  	}
  else if(ms[a].ku=='M'||ms[a].ku=='m')
   {
  	strcpy(ms[a].ukuran,"Medium");
  	ms[a].harga=63000;
  	}
  else if(ms[a].ku=='L'||ms[a].ku=='l')
   {
  	strcpy(ms[a].ukuran,"Large");
  	ms[a].harga=65000;
  	}
  }
 else if(ms[a].km=='G'||ms[a].km=='g')
  {
  strcpy(ms[a].merk,"Gajah Duduk");     //Merk Gajah duduk
  if(ms[a].ku=='S'||ms[a].ku=='s')
  	{
  	strcpy(ms[a].ukuran,"Small");
  	ms[a].harga=40000;
  	}
  else if(ms[a].ku=='M'||ms[a].ku=='m')
   {
  	strcpy(ms[a].ukuran,"Medium");
  	ms[a].harga=43000;
  	}
  else if(ms[a].ku=='L'||ms[a].ku=='l')
   {
  	strcpy(ms[a].ukuran,"Large");
  	ms[a].harga=45000;
  	}
  }
}

else if(strcmp(ms[a].kb,"P")==0||strcmp(ms[a].kb,"p")==0)
{
 strcpy(ms[a].barang,"Peci");            //Peci
 if(ms[a].km=='A'||ms[a].km=='a')
  {
  strcpy(ms[a].merk,"Atlas");            //Merk Atlas
  if(ms[a].ku=='S'||ms[a].ku=='s')
  	{
  	strcpy(ms[a].ukuran,"Small");
  	ms[a].harga=65000;
  	}
  else if(ms[a].ku=='M'||ms[a].ku=='m')
   {
  	strcpy(ms[a].ukuran,"Medium");
  	ms[a].harga=68000;
  	}
  else if(ms[a].ku=='L'||ms[a].ku=='l')
   {
  	strcpy(ms[a].ukuran,"Large");
  	ms[a].harga=70000;
  	}
  }
 else if(ms[a].km=='B'||ms[a].km=='b')
  {
  strcpy(ms[a].merk,"BHS");              //Merk BHS
  if(ms[a].ku=='S'||ms[a].ku=='s')
  	{
  	strcpy(ms[a].ukuran,"Small");
  	ms[a].harga=115000;
  	}
  else if(ms[a].ku=='M'||ms[a].ku=='m')
   {
  	strcpy(ms[a].ukuran,"Medium");
  	ms[a].harga=117000;
  	}
  else if(ms[a].ku=='L'||ms[a].ku=='l')
   {
  	strcpy(ms[a].ukuran,"Large");
  	ms[a].harga=120000;
  	}
  }
 else if(ms[a].km=='W'||ms[a].km=='w')
  {
  strcpy(ms[a].merk,"Wadimor");         //Merk Wadimor
  if(ms[a].ku=='S'||ms[a].ku=='s')
  	{
  	strcpy(ms[a].ukuran,"Small");
  	ms[a].harga=55000;
  	}
  else if(ms[a].ku=='M'||ms[a].ku=='m')
   {
  	strcpy(ms[a].ukuran,"Medium");
  	ms[a].harga=58000;
  	}
  else if(ms[a].ku=='L'||ms[a].ku=='l')
   {
  	strcpy(ms[a].ukuran,"Large");
  	ms[a].harga=60000;
  	}
  }
}

else if(strcmp(ms[a].kb,"PK")==0||strcmp(ms[a].kb,"pk")==0)
{
 strcpy(ms[a].barang,"Paket");            //PAket
 if(ms[a].km=='1'||ms[a].km=='1')
  {
  strcpy(ms[a].merk,"RAA");              //Paket RAA
  if(ms[a].ku=='S'||ms[a].ku=='s')
  	{
  	strcpy(ms[a].ukuran,"Small");
  	ms[a].harga=250000;
  	}
  else if(ms[a].ku=='M'||ms[a].ku=='m')
   {
  	strcpy(ms[a].ukuran,"Medium");
  	ms[a].harga=259000;
  	}
  else if(ms[a].ku=='L'||ms[a].ku=='l')
   {
  	strcpy(ms[a].ukuran,"Large");
  	ms[a].harga=265000;
  	}
  }
 else if(ms[a].km=='2'||ms[a].km=='2')
  {
  strcpy(ms[a].merk,"CWB");               //Paket CWB
  if(ms[a].ku=='S'||ms[a].ku=='s')
  	{
  	strcpy(ms[a].ukuran,"Small");
  	ms[a].harga=350000;
  	}
  else if(ms[a].ku=='M'||ms[a].ku=='m')
   {
  	strcpy(ms[a].ukuran,"Medium");
  	ms[a].harga=358000;
  	}
  else if(ms[a].ku=='L'||ms[a].ku=='l')
   {
  	strcpy(ms[a].ukuran,"Large");
  	ms[a].harga=365000;
  	}
  }
 else if(ms[a].km=='3'||ms[a].km=='3')
  {
  strcpy(ms[a].merk,"EGB");                //Paket EGB
  if(ms[a].ku=='S'||ms[a].ku=='s')
  	{
  	strcpy(ms[a].ukuran,"Small");
  	ms[a].harga=260000;
  	}
  else if(ms[a].ku=='M'||ms[a].ku=='m')
   {
  	strcpy(ms[a].ukuran,"Medium");
  	ms[a].harga=269000;
  	}
  else if(ms[a].ku=='L'||ms[a].ku=='l')
   {
  	strcpy(ms[a].ukuran,"Large");
  	ms[a].harga=275000;
  	}
  }
}

else
{
  cout<<"Kode salah"<<endl;
  cout<<"Ingin Input Lagi [Y/T]?";cin>>lagi;
if(lagi=='Y'||lagi=='y')
	goto atas;
else
	goto akhir;
}
}

clrscr();
judul();
cout<<"Nama Petugas  : "<<petugas<<"\t\t Hari, Tanggal  : "<<hari<<endl;
cout<<"Nama Pembeli  : "<<pembeli<<endl<<endl;
cout<<"DATA PEMBELIAN"<<endl;
garis();
cout<<"No.  Nama      Nama         Ukuran   Harga      Banyak Subtotal   "<<endl;
cout<<"     Barang    Merk/Paket            Barang     barang            "<<endl;
garis();
for(a=1;a<=b;a++)
{
cout<<setiosflags(ios::left)<<setw(5)<<a;
cout<<setiosflags(ios::left)<<setw(10)<<ms[a].barang;
cout<<setiosflags(ios::left)<<setw(13)<<ms[a].merk;
cout<<setiosflags(ios::left)<<setw(9)<<ms[a].ukuran;
cout<<setiosflags(ios::left)<<setw(11)<<ms[a].harga;
cout<<setiosflags(ios::left)<<setw(7)<<ms[a].banyak;
ms[a].subtotal=ms[a].harga*ms[a].banyak;
cout<<setiosflags(ios::left)<<setw(11)<<ms[a].subtotal<<endl;
sum();
}
cout<<endl;

garis();
cout<<endl;
cout<<"                                       Total Bayar    : "<<total<<endl;
if(total>=2000000)
diskon=0.2*total;
else if(total>=1000000)
diskon=0.1*total;
else
diskon=0;
cout<<"                                       Diskon         : "<<diskon<<endl;
grand=total-diskon;
cout<<"                                       Grand Bayar    : "<<grand<<endl;
cout<<"                                       Uang Bayar     : ";cin>>bayar;
kembali=bayar-grand;
cout<<"                                       Uang Kembali   : "<<kembali;
cout<<endl<<endl;

garis();
cout<<"Terimakasih Sudah Membeli Pakaian Di MECCA STORE"<<endl<<endl;
cout<<"Input Data Lagi [Y/T] ???";cin>>lagi;
if(lagi=='Y'||lagi=='y')
goto awal;
else
goto akhir;

akhir:
getch();
}