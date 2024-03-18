#include <iostream>

using namespace std;

int main() {

  const double preco_ambiente_pequeno {25};
  const double preco_ambiente_grande {35};
  const double taxa {0.06};
  const int validade {30};

  cout << "Bem vindos ao serviço de limpeza de carpetes do Jubirau." << endl;
  cout << "Quantos ambientes pequenos você quer limpar? ";
  int ambientes_pequenos {0};
  cin >> ambientes_pequenos;

  cout << "Quantos ambientes grandes você quer limpar? ";
  int ambientes_grandes {0};
  cin >> ambientes_grandes;

  cout << "Valor estimado para o serviço de limpeza de carpete" << endl;
  cout << "Número de ambientes pequenos: " << ambientes_pequenos << endl;
  cout << "Número de ambientes grandes: " << ambientes_grandes << endl;
  cout << "Preço por ambiente pequeno: R$" << preco_ambiente_pequeno << endl;
  cout << "Preço por ambiente grande: R$" << preco_ambiente_grande << endl;
  cout << "Total: R$" << (preco_ambiente_pequeno * ambientes_pequenos) + (preco_ambiente_grande * ambientes_grandes) << endl;
  cout << "Taxa: R$" << ((preco_ambiente_pequeno * ambientes_pequenos) * taxa) + ((preco_ambiente_grande * ambientes_grandes) * taxa) << endl; 
  cout << "=======================================================" << endl;
  cout << "Total estimado: R$" << ((preco_ambiente_pequeno * ambientes_pequenos) + (preco_ambiente_grande * ambientes_grandes)) + (((preco_ambiente_pequeno * ambientes_pequenos) * taxa) + ((preco_ambiente_grande * ambientes_grandes) * taxa)) << endl;
  cout << "Esse total estimado vale por " << validade << " dias." << endl;

  return 0;
}