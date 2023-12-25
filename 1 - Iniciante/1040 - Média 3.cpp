#include <iomanip>
#include <iostream>

using namespace std;

int main() {
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    double media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10;

    cout << fixed << setprecision(1);
    cout << "Media: " << media << endl;

    if (media >= 7) {
        cout << "Aluno aprovado." << endl;
        return 0;
    }

    if (media < 5) {
        cout << "Aluno reprovado." << endl;
        return 0;
    }

    cout << "Aluno em exame." << endl;
    double af;
    cin >> af;
    cout << "Nota do exame: " << af << endl;

    double final_media = (media + af) / 2.0;

    if (final_media >= 5) {
        cout << "Aluno aprovado." << endl;
    } else {
        cout << "Aluno reprovado." << endl;
    }

    cout << "Media final: " << final_media << endl;

    return 0;
}
