/**
 *@mainpage program ini
 *
 * @section ini kodinfgan
 * \b makanan
 * \b benda
 */


#include <iostream>
using namespace std;
class MataKuliah
    /**
     * @brief ini class
     *
     */

{
protected:
    float presensi;
    string Activity;
    string Exercise;
    string Tugasakhir;

public:
    MataKuliah()
    {
        presensi = 0.0;
        Activity = 0.0;
        Exercise = 0.0;
        Tugasakhir = 0.0;
    }
    virtual void namaMataKuliah() { return; }
    virtual void inputNIlai() {
        cout << "Masukkan nilai presensi: ";
        cin >> presensi;
        cout << "Masukkan nilai activity: ";
        cin >> Activity;
        cout << "Masukkan nilai exercise: ";
        cin >> Exercise;
        cout << "Masukkan nilai tugas akhir:";
        cin >> Tugasakhir;
    }
    virtual void hitungNilaiAkhir() {


    }

    virtual void cekKelulusan() {
        cout << "Nama mahasiswa: " << Activity << endl;
        cout << "Kategori kelulusan: " << Exercise << endl;
        cout << "Nilai akhir : " << Tugasakhir << endl;
    }
    void setPresensi(float nilai)
    {
        this->presensi = nilai;
    }
    float getPresensi()
    {
        return presensi;
    }
    void setpresensi(float Presensi) { presensi = Presensi; }
    void setactivity(const string& activity) { Activity = activity; }
    void setexercise(const string& exercise) { Exercise = exercise; }
    void settugasakhir(const string& tugasakhir) { Tugasakhir = tugasakhir; }

    float getpresensi() const { return presensi; }
    string getactivity() const { return Activity; }
    string getexercise() const { return Exercise; }
    string gettugasakhir() const { return Tugasakhir; }
};
class Pemrograman : public MataKuliah
{
public:
    void input() override {
        MataKuliah::input();
    }

    void cekKelulusan() override {
        MataKuliah::cekKelulusan();
    }
};
class Jaringan : public MataKuliah
{
public:
    void input() override {
        Matakuliah::input();
    }

    void cekKelulusan() override {
        MataKuliah::cekKelulusan();
    }
};
int main()
{
    char pilih;
    MataKuliah mataKuliah;
    Pemrograman pemrograman;
    Jaringan jaringan;
    cout << "Input *matakuliah:" << endl;
    mataKuliah.input();

    cout << "Input pemrograman:" << endl;
    pemrograman.input();

    cout << "Input jaringan:" << endl;
    jaringan.input();

    cout << "keterangan *matakuliah" << endl;
    mataKuliah.cekKelulusan();

    cout << "Keterangan pemrograman:" << endl;
    pemrograman.cekKelulusan();

    cout << "Keterangan jaringan:" << endl;
    jaringan.cekKelulusan();

    return 0;
}
