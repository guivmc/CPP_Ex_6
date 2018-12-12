// ExSexta6.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

std::vector<int> test(int num1, int num2)
{
	std::vector<int> intArray;

	for (int i = num1 + 1; i < num2; i++)
	{
		int result = 0;

		for (int j = 1; j < i; j++)
			if ((i % j) == 0) result += j;
		
		if (result == i)
			intArray.push_back(i);
	}

	return intArray;
	
}

int main()
{
	int num1 = 1, num2 = 2;

	std::vector<std::vector<int>> final;

	do
	{
		std::cin >> num1;
		std::cin >> num2;

		final.push_back(test(num1, num2));

	} while (num1 != 0 && num2 != 0);

	for (int i = 0; i < final.size(); i++)
	{
		std::cout << "Amount: ";
		std::cout << final.at(i).size() << std::endl;

		for (int j = 0; j < final.at(i).size(); j++)
			std::cout << final.at(i).at(j) << std::endl;			
	}	
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
