#include "heapSort/heapSort.h"

int main() {
	srand(time(NULL));
	int option = -1;

	std::cout << "Opciones:" << std::endl;
	std::cout << "0. Salir." << std::endl;
	std::cout << "1. Heap sort." << std::endl;
	std::cout << "2. Iterativo." << std::endl;
	std::cout << "3. Recursivo." << std::endl;

	while (option != 0) {
		std::cout << "Opcion: ";
		std::cin >> option;

		if (option == 1) ordenacionHeapSort();
		else if (option == 2) std::cout << "opcion 2" << std::endl;
		else if (option == 3) std::cout << "opcion 3" << std::endl;
		else if (option == 0) std::cout << "saliendo..." << std::endl;
		else std::cout << "Opcion incorrecta." << std::endl;
	}
}
