#include <iostream>
using namespace std;
 
int main()
{
    int nilai;
    {
        const int JUMLAH_PESERTA = 20;
        string namaPeserta[JUMLAH_PESERTA] = { "Asroni", "lia", "joko", "demas", "Lufi", "zoro", "kaido", "alucard","feni","sin","doni","roni","jomi" };
        int nilai[JUMLAH_PESERTA] = { 75, 85, 90, 65, 55, 70, 80, 75, 95, 60, 70, 80, 85, 75, 65, 70, 80, 90, 50, 95 };
        string status[JUMLAH_PESERTA];

        for (int i = 0; i < JUMLAH_PESERTA; i++)
        {
            if (nilai[i] >= 70)
            {
                status[i] = "Lulus";
            }
            else
            {
                status[i] = "Tidak Lulus";
            }
        }
    }

        cout << left << int(15) << "Nama" << int(15) << "Hasil" << int(15) << "Status" << endl;
        for (int i = 0; i < JUMLAH_PESERTA; i++)

        {
            cout << left << int(15) << namaPeserta[i] << int) << nilai[i] << int) << status[i] << endl;

        }
        





