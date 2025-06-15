#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Judol {
    private:
        static const int baris = 4;
        static const int kolom = 5;
        char papan_permainan[baris][kolom];
        bool dibuka[baris][kolom];
        int data[baris][kolom];
        bool berakhir;

    public:
        Judol(){
            srand(time(0));
            berakhir = false;
            buat_papan_permainan();
        }
    
        void buat_papan_permainan(){
            for(int i=0;i<baris;i++){
                for(int j=0;j<kolom;j++){
                    data[i][j] = 0;
                }
            }

            int letakkan_bom = 0;
            while(letakkan_bom < 2){
                int baris_bom = rand() % baris;
                int kolom_bom = rand() % kolom;
                if(data[baris_bom][kolom_bom] == 0){
                    data[baris_bom][kolom_bom] = 1;
                    letakkan_bom++;
                }
            }

            for(int i=0;i<baris;i++){
                for(int j=0;j<kolom;j++){
                    papan_permainan[i][j] = '*';
                    dibuka[i][j] = false;
                }
            }
        }

        void tampilkan_papan_permainan(){
            cout << "\nPapan Lotre\n";
            cout << "===========\n";
            cout << " ";
            for(int i=0;i<baris;i++){
                for(int j=0;j<kolom;j++){
                    if(dibuka[i][j]){
                        if(data[i][j] == 1){
                            cout << "X ";
                        }else{
                            cout << "O ";
                        }
                    }else{
                        cout << "* ";
                    }
                }
                cout << endl;
                cout << " ";
            }
        }

        void tebak(int b, int k){
            b--;
            k--;
            if(b < 0 || b >= baris || k < 0 || k >= kolom){
                cout << "\nPosisinya Gak Ada Lekk!  Isilah Yang Betol!\n\n";
                system("pause");
                return;
            }
            if(dibuka[b][k]){
                cout << "\nUdah Kau Buka Itu Tadi Kotaknya!  Kek gadak yg laen!\n\n";
                system("pause");
                return;
            }

            dibuka[b][k] = true;

            if(data[b][k] == 1){
                papan_permainan[b][k] = 'X';
                berakhir = true;
            }else{
                papan_permainan[b][k] = 'O';
            }
        }

        bool permainan_berakhir(){
            if(berakhir){
                return true;
            }

            int udah_dibuka = 0;
            for(int i=0;i<baris;i++){
                for(int j=0;j<kolom;j++){
                    if(dibuka[i][j] && data[i][j] == 0){
                        udah_dibuka++;
                    }
                }
            }

            if(udah_dibuka == 18){
                cout << "Widiihhh JACKPOT Wakkk!!!, Yoklah Kita Makan Baksoo... :)";
                return true;
            }
            return false;
        }
};

int depo_lagi(){
    int pilihan;
    cout << "\nTekan 1 Untuk Depo lagi!\n\n";
    cout << "Masukkan Pilihan : ";cin >> pilihan;
    if(pilihan == 1){
        return 1;
    }
    return 0;
}

int main(){
    main_lagi:
    Judol lotre;
    int barisnya, kolomnya;

    while(true){
        lotre.tampilkan_papan_permainan();

        cout << "\nMasukkan Baris (1-4) : ";cin >> barisnya;
        cout << "\nMasukkan Kolom (1-5) : ";cin >> kolomnya;

        lotre.tebak(barisnya,kolomnya);

        if(lotre.permainan_berakhir()){
            system("cls");
            lotre.tampilkan_papan_permainan();
            cout << "\nYahhh Kenak Bom!, Yok Bisa Yok Depo Lagi...\n\n";
            system("pause");
            int jawaban = depo_lagi();
            if(jawaban == 1){
                system("cls");
                goto main_lagi;
            }else{
                break;
            }
            
        }
        system("cls");
    }
    cout << "\nTerima Kasih Sudah Berjudi Bersama Kami!\n";
    return 0;
}