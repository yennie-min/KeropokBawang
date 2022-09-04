#include <iostream>

using namespace std;

int main() {

    float a;

     while ( a <= 4 ) {
        cout << "Berapa CGPA awak? Jawapan dalam satu perpuluhan.";

        cin >> a;

        if ( a < 2 ) {
            cout << "Keje je la";
        }
        else if ( a >= 2 && a < 3) {
            cout << "Oh...alhamdulillah";
        }
        else if ( a >= 3 && a <= 4) {
            cout << "Amboii kau. Kemain. Kau tuition mana tu? Berapa tu?";
        }
        else {
            cout << "Kau pandai baca ke tak.Baca lah betul-betul.";
        }

    }  

    


    return 0;
}