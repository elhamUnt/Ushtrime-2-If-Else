#include <iostream>
using namespace std;

int main() {
  cout << "Ushtrime 2 IF-ELSE Statement!\n";
  int vitet;
  double gjatesia;
  bool kushti = true; // Le te supozojme se secili mund te hyp ne Rollocoaster
  double cmimi;
  cout << "\n Sa vite jeni? \n";
  cin >> vitet;

  cout << "\n Sa jeni i gjate cm? \n";
  cin >> gjatesia;

  if (gjatesia >= 120) {
    if (vitet <= 12) {
      kushti = false;
    }
    if (vitet > 12 && vitet < 18) {
      kushti = true;
      cmimi = 7;
    }
    if (vitet >= 18) {
      kushti = true;
      cmimi = 12;
    }
  } else
    kushti = false;

  if (kushti) {
    // ekzekutohe kete block
    cout << "Kushti u plotesua, ju mund te hyjni ne Rollocoaster-in! Do kushtoj"
         << cmimi << "$\n";
  } else {
    // perndryshe ekzekutohe kete block
    cout << "Kushti nuk u plotesua, ju nuk mund te hyjni ne Rollocoaster-";
  }
  
}