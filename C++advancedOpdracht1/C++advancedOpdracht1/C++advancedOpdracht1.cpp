#include "pch.h"
#include "Transactie.h"
#include "Bankrekening.h"
#include <iostream>
float x;
int main()
{
	//input();
	std::cout << "vul een bedrag in...." << std::endl;
	std::cin >> x;
	Bankrekening* rekening = new Bankrekening();
	Transactie* prijs = new Transactie(x);
	*rekening + *prijs;
	std::cout << "saldo : " << rekening->getSaldo() << "euro" <<  std::endl;
	system("pause");

}
