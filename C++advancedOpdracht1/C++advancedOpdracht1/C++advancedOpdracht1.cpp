#include "pch.h"
#include "Transactie.h"
#include "Bankrekening.h"
#include <iostream>
#include "windows.h"
#include "time.h"
#include <stdio.h>
#include <conio.h>
float x;
int main()
{
	//input();
	std::cout << "vul een bedrag in...." << std::endl;
	std::cin >> x;
	Bankrekening* rekening = new Bankrekening();
	Transactie* prijs = new Transactie(x);
	*rekening += *prijs;
	std::cout << "saldo : " << rekening->getSaldo() << "euro" <<  std::endl;
	return 0;
}

  