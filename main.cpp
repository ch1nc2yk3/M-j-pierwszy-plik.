#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    string x;
    int carrots;
    carrots = 2;

    cout << "Zabaw sie z C++ nie pozalojesz, bo to przyniesie ci frajde."<<endl;
    cout << "Zatem jaki bedzie Twoj pierwszy projekt?" << endl;

    cin >> x;

    cout << "Gratulacje podjales decyzje. Pierwszy krok za Toba!!!";
    cout << endl;
    cout << "Teraz masz Az " << carrots << " lata na zrealizowanie projektu."<<endl;
    cout<<  "Nie zmarnuj tego!"<<endl;
    cout << "Jednak bylo by super gdybys ukonczyl to w ciagu ";

    carrots = carrots - 1;

    cout<<" ."<< endl;
    cout << "Nie mam racji? ;)";

    return 0;
}
