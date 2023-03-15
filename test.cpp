#include <iostream>
using namespace std;

double rerata(double a, double b){
return (a + b)/2;
}

string status(double r){
    if (r >= 60){
        return "lulus";
    }else {
        return "gagal";
    }
}

string status2(double r, double n){
    if (r>= 60 && n >= 70){
        return "lulus";
    }else {
        return "gagal";
    }
}

string status3(double r, double n){
    if (r >= 60 || n >= 70){
        return "lulus";
    }else  {
        return "gagal";
    }
}    

int main(){
    double nilaiMath, nilaiBahasa;

    cout << "masukkan nilai math";
    cin >> nilaiMath;
    cout << "masukkan nilai bahasa";
    cin >> nilaiBahasa;

    cout << "Nilai rata - rata nya : " << rerata(nilaiMath, nilaiBahasa);
    cout << "\nStatus kelulusannya : " << status(rerata(nilaiMath, nilaiBahasa));
    cout << "\nStatus kelulusannya : " << status2(rerata(nilaiMath, nilaiBahasa), nilaiMath);
    cout << "\nStatus kelulusannya : " << status2(rerata(nilaiMath, nilaiBahasa), nilaiMath);




}