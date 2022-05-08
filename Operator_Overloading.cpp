#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class PersegiPanjang{
    public:
        float xmin;
        float xmax;
        float ymin;
        float ymax;
    
    PersegiPanjang(float inp_ttengahx, float inp_ttengahy, float inp_p, float inp_l){
        PersegiPanjang::xmin = inp_ttengahx - 0.5 * inp_p;
        PersegiPanjang::xmax = inp_ttengahx + 0.5 * inp_p;
        PersegiPanjang::ymin = inp_ttengahy - 0.5 * inp_l;
        PersegiPanjang::ymax = inp_ttengahy + 0.5 * inp_l;
        
    }

    void operator == (PersegiPanjang kek)
    {
        if (xmin >= kek.xmax || ymin >= kek.ymax || xmax <= kek.xmin || ymax <= kek.ymin){
            cout << "Persegi panjang tidak berpotongan.." << endl;

        } else {
            cout << "Persegi panjang berpotongan.." << endl;
        }
        return;
    }

    PersegiPanjang operator -- ()
    {
        float tengahx,tengahy,panjang,lebar;
        tengahx = xmin + ( xmax - xmin ) / 2;
        tengahy = ymin + ( ymax - ymin ) / 2;
        panjang = xmax - xmin;
        lebar = ymax - ymin;
        panjang /=2;
        lebar /=2;


        PersegiPanjang newew = PersegiPanjang(tengahx,tengahy,panjang,lebar);
        return newew;
    }
    
    PersegiPanjang operator ++ ()
    {
        float tengahx,tengahy,panjang,lebar;
        tengahx = xmin + ( xmax - xmin ) / 2;
        tengahy = ymin + ( ymax - ymin ) / 2;
        panjang = xmax - xmin;
        lebar = ymax - ymin;
        panjang *=2;
        lebar *=2;


        PersegiPanjang newew = PersegiPanjang(tengahx,tengahy,panjang,lebar);
        return newew;
    }

    PersegiPanjang operator - (PersegiPanjang kok)
    {
        if (xmin >= kok.xmax || ymin >= kok.ymax || xmax <= kok.xmin || ymax <= kok.ymin){
            cout << "Tidak berpotongan.." << endl;
            cout << "Operasi error..";
            
        } else {
            cout << "Berpotongan.." << endl;
            cout << "Melanjutkan operasi.. " << endl;
            float newxmax,newxmin,newymax,newymin;
            if (kok.xmax < xmax){
                newxmax = kok.xmax;
            } else {
                newxmax = xmax;
            }
            if (kok.xmin > xmin){
                newxmin = kok.xmin;
            } else {
                newxmin = xmin;
            }
            if (kok.ymax < ymax){
                newymax = kok.ymax;
            } else {
                newymax = ymax;
            }
            if (kok.ymin > ymin){
                newymin = kok.ymin;
            } else {
                newymin = ymin;
            }

            float tengahx,tengahy,panjang,lebar;
            tengahx = newxmin + ( newxmax - newxmin ) / 2;
            tengahy = newymin + ( newymax - newymin ) / 2;
            panjang = newxmax - newxmin;
            lebar = newymax - newymin;

            PersegiPanjang newew = PersegiPanjang(tengahx,tengahy,panjang,lebar);
            return newew;
        }

    }

    PersegiPanjang operator + (PersegiPanjang kok)
    {
        if (xmin >= kok.xmax || ymin >= kok.ymax || xmax <= kok.xmin || ymax <= kok.ymin){
            cout << "Tidak berpotongan.." << endl;
            cout << "Operasi error..";
            
        } else {
            cout << "Berpotongan.." << endl;
            cout << "Melanjutkan operasi.. " << endl;
            float newxmax,newxmin,newymax,newymin;
            if (kok.xmax > xmax){
                newxmax = kok.xmax;
            } else {
                newxmax = xmax;
            }
            if (kok.xmin < xmin){
                newxmin = kok.xmin;
            } else {
                newxmin = xmin;
            }
            if (kok.ymax > ymax){
                newymax = kok.ymax;
            } else {
                newymax = ymax;
            }
            if (kok.ymin < ymin){
                newymin = kok.ymin;
            } else {
                newymin = ymin;
            }

            float tengahx,tengahy,panjang,lebar;
            tengahx = newxmin + ( newxmax - newxmin ) / 2;
            tengahy = newymin + ( newymax - newymin ) / 2;
            panjang = newxmax - newxmin;
            lebar = newymax - newymin;

            PersegiPanjang newew = PersegiPanjang(tengahx,tengahy,panjang,lebar);
            return newew;
        }

    }

    void show(){
        cout << endl;
        cout << " xmin: " << xmin << endl;
        cout << " xmax: " << xmax << endl;
        cout << " ymin: " << ymin << endl;
        cout << " ymax: " << ymax << endl;
        
    }
};

int main(){
    int x;
    float a,b,c,d,e,f,g,h;
    imhere:
    system("cls");
    cout << "Operator overloading task!\n" << endl;
    cout << "Silahkan pilih menu!" << endl;
    cout << "1. Menggabungkan dua persegi panjang +" << endl;
    cout << "2. Mengambil irisan kedua persegi panjang -" << endl;
    cout << "3. Memperluas persegi panjang 2x ++" << endl;
    cout << "4. Mempersempit persegi panjang 2x --" << endl;
    cout << "5. Menampilkan properti dari persegi panjang []" << endl;
    cout << "6. Mengecek apakah persegi panjang beririsan ==" << endl;
    cout << "7. exit" << endl;
    cout << "Pilihan: ";
    cin >> x;
    switch (x){
        case 1:
        {
            system("cls");
            cout << "Untuk persegi panjang pertama:\n";
            cout << "\nMasukan titik tengah x : ";
            cin >> a;
            cout << "Masuktan titik tengah y : ";
            cin >> b;
            cout << "Masukan panjang : ";
            cin >> c;
            cout << "Masukan lebar : ";
            cin >> d;
            PersegiPanjang satu = PersegiPanjang(a,b,c,d);
            cout << "\nUntuk persegi panjang kedua:\n";
            cout << "\nMasukan titik tengah x : ";
            cin >> e;
            cout << "Masuktan titik tengah y : ";
            cin >> f;
            cout << "Masukan panjang : ";
            cin >> g;
            cout << "Masukan lebar : ";
            cin >> h;
            PersegiPanjang dua = PersegiPanjang(e,f,g,h);
            PersegiPanjang gab = satu + dua;
            cout << "Maka didapat persegi gabungan:" << endl;
            gab.show();
            system("pause");
            break;
        }
        case 2:
        {
            system("cls");
            cout << "Untuk persegi panjang pertama:\n";
            cout << "\nMasukan titik tengah x : ";
            cin >> a;
            cout << "Masuktan titik tengah y : ";
            cin >> b;
            cout << "Masukan panjang : ";
            cin >> c;
            cout << "Masukan lebar : ";
            cin >> d;
            PersegiPanjang sata = PersegiPanjang(a,b,c,d);
            cout << "\nUntuk persegi panjang kedua:\n";
            cout << "\nMasukan titik tengah x : ";
            cin >> e;
            cout << "Masuktan titik tengah y : ";
            cin >> f;
            cout << "Masukan panjang : ";
            cin >> g;
            cout << "Masukan lebar : ";
            cin >> h;
            PersegiPanjang daa = PersegiPanjang(e,f,g,h);
            PersegiPanjang gaab = sata - daa;
            cout << "Maka didapat persegi irisan:" << endl;
            gaab.show();
            system("pause");
            break;
        }
        case 3:
        {
            system("cls");
            cout << "Data persegi panjang:" << endl;
            cout << "Masukan titik tengah x : ";
            cin >> a;
            cout << "Masuktan titik tengah y : ";
            cin >> b;
            cout << "Masukan panjang : ";
            cin >> c;
            cout << "Masukan lebar : ";
            cin >> d;
            cout << "Didapat properti:";
            PersegiPanjang(a,b,c,d).show();
            PersegiPanjang ew = ++ PersegiPanjang(a,b,c,d);
            cout << "\nMaka setelah diperluas didapat :";
            ew.show();
            system("pause");
            break;
        }
        case 4:
        {
            system("cls");
            cout << "Data persegi panjang:" << endl;
            cout << "Masukan titik tengah x : ";
            cin >> a;
            cout << "Masuktan titik tengah y : ";
            cin >> b;
            cout << "Masukan panjang : ";
            cin >> c;
            cout << "Masukan lebar : ";
            cin >> d;
            cout << "Didapat properti:";
            PersegiPanjang(a,b,c,d).show();
            PersegiPanjang ew = -- PersegiPanjang(a,b,c,d);
            cout << "\nMaka setelah dipersempit didapat :";
            ew.show();
            system("pause");
            break;
        }
        case 5:
        {
            system("cls");
            cout << "Data persegi panjang:" << endl;
            cout << "Masukan titik tengah x : ";
            cin >> a;
            cout << "Masuktan titik tengah y : ";
            cin >> b;
            cout << "Masukan panjang : ";
            cin >> c;
            cout << "Masukan lebar : ";
            cin >> d;
            PersegiPanjang ew = PersegiPanjang(a,b,c,d);
            cout << "Properti sebagai berikut :" << endl;
            ew.show();
            system("pause");
            break;
        }
        case 6:
        {
            system("cls");
            cout << "Untuk persegi panjang pertama:\n";
            cout << "\nMasukan titik tengah x : ";
            cin >> a;
            cout << "Masuktan titik tengah y : ";
            cin >> b;
            cout << "Masukan panjang : ";
            cin >> c;
            cout << "Masukan lebar : ";
            cin >> d;
            PersegiPanjang satu = PersegiPanjang(a,b,c,d);
            cout << "\nUntuk persegi panjang kedua:\n";
            cout << "\nMasukan titik tengah x : ";
            cin >> e;
            cout << "Masuktan titik tengah y : ";
            cin >> f;
            cout << "Masukan panjang : ";
            cin >> g;
            cout << "Masukan lebar : ";
            cin >> h;
            PersegiPanjang dua = PersegiPanjang(e,f,g,h);
            satu == dua;
            system("pause");
            break;
        }
        case 7:
        {
            exit(1);
        }

        default:
        {
            system("cls");
            cout << "Invalid input! Try again!" << endl;
            system("pause");
        }
        
    }
    goto imhere;
    return 0;
}