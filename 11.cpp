#include <iostream>
using namespace std;

template <typename shablon>
shablon summas(const shablon* mas, int size) {
    shablon sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += mas[i];
    }
    return sum;
}

template <typename kluch, typename znachenie>
class kluzna {
private:
    kluch kl;
    znachenie zn;

public:
    kluzna(kluch k, znachenie v) : kl(k), zn(v) {}

    kluch polkl() const {
        return kl;
    }

    znachenie polzn() const {
        return zn;
    }

    void otobrazit() const {
        cout << "kluch: " << kl << ", znachenie: " << zn << endl;
    }
};

int main() {
    int massiv[] = { 1, 2, 3, 4, 5, 6 };
    double dvmassiv[] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };

    cout << "summa odinochnogo: " << summas(massiv, 6) << endl;
    cout << "summa dvoynogo: " << summas(dvmassiv, 5) << endl;


    kluzna<int, string> paraint(3, "tri");
    kluzna<string, string> parastring("Z", "koltso");

    paraint.otobrazit();
    parastring.otobrazit();

}