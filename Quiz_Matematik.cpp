#include <iostream>

using namespace std;

int main() {

    char jawapan;
    int markah = 0;

    // Peringatan : Jawapan anda mestilah hanya satu huruf daripada pilihan jawapan
    cout << "Mulakan quiz?" << endl;
    cout << "Tekan 'A' untuk mula" << endl;
    cout << "Tekan 'B' untuk keluar" << endl;
    cout << "Sila pilih :";

    cin >> jawapan;

    cout << endl;

    if ( jawapan == 'A' || jawapan == 'a' ) {
        cout << "Eleh bole ke tu..Ye ye je ko..";
    }
    else if ( jawapan == 'B' || jawapan == 'b' ) {
        cout << "Awal-awal dah give up. Kata nak berjaya.";
      }
      else {
        cout << "Bodonye. Baca pon tak reti." << endl;
    }
    cout << endl;
    cout << "Pilih satu huruf untuk teruskan : ";

    cin >> jawapan;

    cout << endl;

    cout << "----------------------------------" << endl;
    cout << "Arahan :" << endl;
    cout << "Quiz ini mengandungi 5 soalan." << endl;
    cout << "Pilih satu huruf untuk teruskan : ";
    cin >> jawapan;

    cout << endl;

    cout << "----------------------------------" << endl;
    cout << "Jika jawapan anda betul, anda dapat 2 markah." << endl;
    cout << endl;
    cout << "Pilih satu huruf untuk teruskan : ";
    cin >> jawapan;

    cout << endl;

    cout << "----------------------------------" << endl;
    cout << "Jika jawapan anda salah, hehe adela." << endl;
    cout << endl;
    cout << "Pilih satu huruf untuk teruskan : ";
    cin >> jawapan;
    
    cout << endl;



    // 1
    cout << "----------------------------------" << endl;
    cout << "Level : Tadika" << endl;
    cout << "1 + 5 = _" << endl;
    cout << "A. 6" << endl;
    cout << "B. 4" << endl;
    cout << "C. 7" << endl;
    cout << "D. 5" << endl;
    cout << "Jawapan anda :";

    cin >> jawapan;

    cout << jawapan;
    cout << endl;

    if ( jawapan == 'A' || jawapan == 'a' ) {
        cout<< endl;
        cout << "acah." << endl;
        markah = +2;
    }
    else if ( jawapan == 'B' || jawapan == 'b') {
        cout << "Eh eh pandainye.. anak sape ni" << endl;
        markah = -1;
    }
    else if ( jawapan == 'C' || jawapan == 'c') {
        cout << "Sayang. Baca pandai. Tapi takle jawap." << endl;
        markah = -1;
    }
    else if ( jawapan == 'D' || jawapan == 'd') {
        cout << "Tambah. Bukan Darab. Bongok." << endl;
        markah = -1;
    
    }
    else {
        cout << "Haih. Apa benda la kau ni. Ada laptop tapi takle baca." << endl;
        markah = (markah)-2;
    }

    cout << endl;
    cout << endl;
    //2
    cout << "Level : Sekolah Rendah" << endl;
    cout << "Yasmin ada 1 epal. Yasmin mendapati bahawa Jungwon lapar." << endl;
    cout << "lalu memberikan epal tersebut kepada Jungwon." << endl;
    cout << "Jungwon memakan satu pertiga epal tersebut." << endl;
    cout << "Berapakah bilangan epal yang tinggal?" << endl;
    cout << endl;
    cout << endl;
    cout << "A. 1/3" << endl;
    cout << "B. 2/3" << endl;
    cout << "C. 3/3" << endl;
    cout << "D. 0" << endl;
    cout << "Jawapan anda : ";

    cin >> jawapan;


    cout << jawapan;
    cout << endl;

    if ( jawapan == 'A' || jawapan == 'a' ) {
        cout << "Jawapannya 0.. Yasmin pun lapar jugak.. Dia makan lagi 2/3 tu." << endl;
        markah = (markah)-1;
    }
    else if ( jawapan == 'B' || jawapan == 'b') {
        cout << "Jawapannya 0.. Yasmin pun lapar jugak.. Dia makan lagi 2/3 tu." << endl;
        markah = (markah)-1;
    }
    else if ( jawapan == 'C' || jawapan == 'c') {
        cout << "Jawapannya 0.. Yasmin pun lapar jugak.. Dia makan lagi 2/3 tu." << endl;
        markah = (markah)-1;
    }
    else if ( jawapan == 'D' || jawapan == 'd') {
        cout << "Salah." << endl;
        markah = (markah)+2;
    
    }
    else {
        cout << "Kalau dah pandai sangat nak buat jawapan sendiri nape tak bukak sekolah je." << endl;
        markah = (markah)-2;
    }


    cout << endl;

    //3

    cout << "Level : Sekolah Menengah Kebangsaan Rebab Indah" << endl;
    cout << "Akiem adalah seseorang yang ber-MBTI 'ISTJ'. Jungwon juga merupakan seseorang ber-MBTI 'ISTJ'." << endl;
    cout << "Jadi, terdapat 2 orang ber-MBTI 'ISTJ'." << endl;
    cout << "Jika Akiem adalah seorang Programmer, adakah Jungwon juga seorang Programmer?" << endl;
    cout << endl;
    cout << "Oleh itu, nyatakan hubungan Yasmin dan Jungwon." << endl;
    cout << endl;
    cout << "A. Jiran" << endl;
    cout << "B. Kawan" << endl;
    cout << "C. Kekasih" << endl;
    cout << "D. Kembar" << endl;
    cout << "Jawapan anda : ";
    cin >> jawapan;

    cout << jawapan;
    cout << endl;

    if ( jawapan == 'A' || jawapan == 'a' ) {
        cout << "Bukan ah.." << endl;
        markah = (markah)-1;
    }
    else if ( jawapan == 'B' || jawapan == 'b') {
        cout << "SALAH." << endl;
        markah = (markah)-2;
    }
    else if ( jawapan == 'C' || jawapan == 'c') {
        cout << "Anda sangat bijak! Tahniah!" << endl;
        markah = (markah)+2;
    }
    else if ( jawapan == 'D' || jawapan == 'd') {
        cout << "Bukan......" << endl;
        markah = (markah)-1;
    
    }
    else {
        cout << "Kalau dah pandai sangat nak buat jawapan sendiri nape tak bukak sekolah je." << endl;
        markah = (markah)-2;
    }

    cout << endl;

    //4

    cout << "Level : Matematik" << endl;
    cout << "1+2=9" << endl;
    cout << "keropok = bawang" << endl;
    cout << "keropokbawang + 1 = ?" << endl;
    cout << endl;
    cout << "A. 45" << endl;
    cout << "B. 14" << endl;
    cout << "C. 22" << endl;
    cout << "D. 16" << endl;
    cout << endl;
    cout << "Jawapan anda : ";
    cin >> jawapan;

    cout << jawapan;
    cout << endl;

    if ( jawapan == 'A' || jawapan == 'a' ) {
        cout << "keropok = 7 huruf" << endl;
        cout << "bawang = 6 huruf" << endl;
        cout << "1(3)+2(3)=9" << endl;
        cout << "(7)(9)+3=45" << endl;
        cout << "A. 45" << endl;
        markah = (markah)+2;
    }
    else if ( jawapan == 'B' || jawapan == 'b') {
        cout << "keropok = 7 huruf" << endl;
        cout << "bawang = 6 huruf" << endl;
        cout << "1(3)+2(3)=9" << endl;
        cout << "(7)(9)+3=45" << endl;
        cout << "A. 45" << endl;
        markah = (markah)-2;
    }
    else if ( jawapan == 'C' || jawapan == 'c') {
        cout << "keropok = 7 huruf" << endl;
        cout << "bawang = 6 huruf" << endl;
        cout << "1(3)+2(3)=9" << endl;
        cout << "(7)(9)+3=45" << endl;
        cout << "A. 45" << endl;
        markah = (markah)-2;
    }
    else if ( jawapan == 'D' || jawapan == 'd') {
        cout << "keropok = 7 huruf" << endl;
        cout << "bawang = 6 huruf" << endl;
        cout << "1(3)+2(3)=9" << endl;
        cout << "(7)(9)+3=45" << endl;
        cout << "A. 45" << endl;
        markah = (markah)-2;
    
    }
    else {
        cout << "Kalau dah pandai sangat nak buat jawapan sendiri nape tak bukak sekolah je." << endl;
        markah = (markah)-2;
    }

    cout << endl;

    //5
    cout << "Level : Rezeki" << endl;
    cout << "Choose the one." << endl;
    cout << "A. One" << endl;
    cout << "B. One." << endl;
    cout << "C. One" << endl;
    cout << "D. One" << endl;
    cout << endl;
    cout << "Jawapan anda : ";
    cin >> jawapan;

    cout << jawapan;
    cout << endl;

    if ( jawapan == 'A' || jawapan == 'a' ) {
        cout << "Rezeki kau dik..." << endl;
        markah = (markah)+2;
    }
    else if ( jawapan == 'B' || jawapan == 'b') {
        cout << "Engkau... Pantang nampak lain sikit nak tekan" << endl;
        cout << "Tapi takde rezeki dik.. Salah pilih ko.." << endl;
        markah = (markah)-2;
    }
    else if ( jawapan == 'C' || jawapan == 'c') {
        cout << "Maaf, anda tiada rezeki." << endl;
        markah = (markah)-2;
    }
    else if ( jawapan == 'D' || jawapan == 'd') {
        cout << "Takde rezeki dik.. Lain kali je lah.." << endl;
        markah = (markah)-2;
    
    }
    else {
        cout << "Kalau dah pandai sangat nak buat jawapan sendiri nape tak bukak sekolah je." << endl;
        markah = (markah)-2;
    }

    cout << endl;





    cout << endl << "Tahap kepandaian anda :" << markah << endl;

    if (markah == 10) {
        cout << "Kau ni dulu budak Oxford ke dik?" << endl;
    }
    else if (markah >= 8 && markah <=9 ) {
        cout << "Pandai jugak ek engko.. Tauuuu aje." << endl;
    }

    else if (markah < 8) {
        cout << "Anda terlalu bodoh. Sila sekolah balik. Ape la hahaha." << endl;
    
    }

    return 0;

}