#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <msclr\marshal_cppstd.h>
template <class T>
ref class Lista {
private:
	template <class T>
	ref struct Node {
		Node<T>^ next;
		Node<T>^ prev;
		T val;

		Node<T>(T val) : val(val) {}
	};
	Node<T>^ head;
	Node<T>^ tail;
	int size;
public:
	//Constructor de la lista
	Lista() : size(0) {}
	//Añade un nodo al final de la lista
	void Add(T val) {
		size++;
		if (!head) {
			//Se ejecuta en caso de que la lista está vacia
			head = gcnew Node<T>(val);
			tail = head;
			return;
		}
		tail->next = gcnew Node<T>(val);
		tail->next->prev = tail;
		tail = tail->next;
	}
	//Borra el nodo según el valor dado
	void Remove(T val) {
		if (size <= 0) return;
		size--;
		//Traversas la lista hasta un nodo anterior al nodo a eliminar
		Node<T>^ current = head;
		while (current && current->val != val) {
			current = current->next;
		}
		//En caso de no encontrar el nodo, simplemente no borra ningún nodo
		if (!current) return;
		//En caso de que el nodo sea la cabeza, asigna el siguiente nodo como la nueva cabeza
		if (current == head) {
			head = head->next;
			head->prev = nullptr;
			return;
		}
		//En caso de que el nodo sea la cola, asigna el nodo previo como la cola nueva
		if (current == tail) {
			tail = tail->prev;
			tail->next = nullptr;
			return;
		}
		//Borra el nodo
		current->prev->next = current->next;
		current->next->prev = current->prev;
		current = nullptr;
	}
	//Borra el nodo según el indice indicado
	void Remove(int index) {
		//Si el indice está fuera de rango, no hace nada
		if (index < 0 || index >= size) return;
		Node<T>^ node_to_delete;
		//Elimina la cabeza
		if (index == 0) {
			node_to_delete = head;
			head = head->next;
			head->prev = nullptr;
			if (!head) tail = nullptr;
			size--;
			node_to_delete = nullptr;
			return;
		}
		//Elimina la cola
		if (index == size - 1) {
			node_to_delete = tail;
			tail = tail->prev;
			tail->next = nullptr;
			size--;
			node_to_delete = nullptr;
			return;
		}
		size--;
		//Traversas la lista hasta un nodo anterior al nodo a eliminar
		Node<T>^ current = head;
		for (int i = 0; i < index - 1; i++) {
			current = current->next;
		}
		node_to_delete = current->next;
		current->next = node_to_delete->next;
		node_to_delete->next->prev = current;
		//Elimina el nodo indicado
		node_to_delete = nullptr;
	}
	//Obtiene el nodo con el valor dado
	Node<T>^ Get(T val) {
		if (size <= 0) return nullptr;
		Node<T>^ current = head;
		while (current && current->val != val) {
			current = current->next;
		}
		return current;
	}
	//Obtiene el nodo en el indice dado
	Node<T>^ Get(int index) {
		if (index < 0) return nullptr;
		Node<T>^ current = head;
		for (int i = 0; i < index && current; i++) {
			current = current->next;
		}
		return current;
	}

	//Obtiene el nodo a partir de su id
	//Nota: solo utilizar con la lista de inventario
	Node<T>^ GetMedicamento(int id) {
		Node<T>^ current = head;
		while (current) {
			if (id == current->val->getNumRegistro()) return current;
			current = current->next;
		}
		return nullptr;
	}

	//Obtiene el nodo con el principio activo del medicamento dado
	//Nota: solo utilizar con la lista de inventario
	Node<T>^ GetMedicamentoPrincipio(System::String^ principio) {
		Node<T>^ current = head;
		while (current) {
			if (!System::String::Compare(principio, current->val->getPrincipiosActivos())) return current;
			current = current->next;
		}
		return nullptr;
	}

	//Obtiene el valor del nodo
	T GetNodeVal(Node<T>^ node) {
		if (node) return node->val;
		throw 0;
	}

	//Obtiene el nodo al que apunta del nodo dado
	Node<T>^ nextNode(Node<T>^ node) {
		if (node) return node->next;
		return nullptr;
	}

	bool isEmpty() {
		return size == 0;
	}

	int Size() {
		return size;
	}

	//Escribe los datos a un archivo CSV
	//Nota: utilizar solo con listas de inventario
	void escribirCSV(std::string nombre) {
		std::ofstream archivo(nombre + ".csv");

		archivo << "Medicamento" << "," << "Número de registro" << "," << "Categoría" << "," <<
			"Principios activos" << "," << "Dosis recomendada(mg)" << "," << "Stock" << "," <<
			"Fecha de caducidad" << "," << "Proveedor" << "," << "Precio de compra" << "," <<
			"Precio de venta" << '\n';

		Node<T>^ current = head;
		msclr::interop::marshal_context context;
		//Cli be like
		std::string Nombre;
		std::string registro;
		std::string categoria;
		std::string principio;
		std::string dosis;
		std::string cantidad;
		std::string caducidad;
		std::string proveedor;
		std::string compra;
		std::string venta;
		while (current) {
			Nombre = context.marshal_as<std::string>(current->val->getNombre());
			registro = context.marshal_as<std::string>(current->val->getNumRegistro().ToString());
			categoria = current->val->getCategoría() == 0 ? "Venta Libre" : "Venta Receta";
			principio = context.marshal_as<std::string>(current->val->getPrincipiosActivos());
			dosis = context.marshal_as<std::string>(current->val->getDosisMg().ToString());
			cantidad = context.marshal_as<std::string>(current->val->getCantidad().ToString());
			caducidad = context.marshal_as<std::string>(current->val->getCaducidad());
			proveedor = context.marshal_as<std::string>(current->val->getProveedor()->getNombre());
			compra = context.marshal_as<std::string>(current->val->getCompra().ToString());
			venta = context.marshal_as<std::string>(current->val->getVenta().ToString());
			archivo << Nombre << ',' << registro << ',' << categoria << ',' << principio << ',' <<
				dosis << ',' << cantidad << ',' << caducidad << ',' << proveedor << ',' << compra <<
				',' << venta << '\n';
			current = current->next;
		}
		archivo.close();
	}

	//Muestra los datos en el DGV de filtrado cuando se filtra por proveedores
	//Nora: utilizar solo con listas de proveedores
	void filtrarPorProveedor(System::Windows::Forms::DataGridView^ dgv) {
		Node<T>^ current = head;
		while (current) {
			auto val = current->val;
			dgv->Rows->Add(
				val->getNombre(),
				val->getNumRegistro(),
				val->getCategoría() == 0 ? "Venta Libre" : "Venta Receta",
				val->getPrincipiosActivos(),
				val->getDosisMg()
			);
			current = current->next;
		}
	}

	//Muestra los datos en el DGV de filtrado cuando se filtra por categoría
	//Nora: utilizar solo con listas de Inventario
	void filtrarPorCategoría(System::Windows::Forms::DataGridView^ dgv, int categoría) {
		//0 = ventaLibre, 1 = ventaReceta
		Node<T>^ current = head;
		while (current) {
			auto val = current->val;
			if (val->getCategoría() != categoría) {
				current = current->next;
				continue;
			}
			dgv->Rows->Add(
				val->getNombre(),
				val->getNumRegistro(),
				val->getCategoría() == 0 ? "Venta Libre" : "Venta Receta",
				val->getPrincipiosActivos(),
				val->getDosisMg()
			);
			current = current->next;
		}
	}
	//Obtiene el promedio del precio de compra
	//Nota: utilizar solamente en listas de inventario
	double promC() {
		int n = 0;
		Node<T>^ nodeAcutal;
		int sum = 0;

		if (head == nullptr) {
			return 0;
		}
		else {
			nodeAcutal = head;
			while (nodeAcutal != nullptr)
			{
				sum += nodeAcutal->val->getCompra();
				nodeAcutal = nodeAcutal->next;
				n++;
			}
		}
		return sum / n;
	}
	//Obtiene el promedio del precio de venta
	//Nota: utilizar solamente en listas de inventario
	double promV() {
		int n = 0;
		Node<T>^ nodeAcutal;
		int sum = 0;

		if (head == nullptr) {
			return 0;
		}
		else {
			nodeAcutal = head;
			while (nodeAcutal != nullptr)
			{
				sum += nodeAcutal->val->getVenta();
				nodeAcutal = nodeAcutal->next;
				n++;
			}
		}
		return sum / n;
	}
#pragma region Sort
	void swap(Node<T>^ a, Node<T>^ b) {
		T temp = a->val;
		a->val = b->val;
		b->val = temp;
	}

	Node<T>^ partition(Node<T>^ low, Node<T>^ high) {
		T pivot = high->val;
		Node<T>^ i = low->prev;
		for (Node<T>^ j = low; j != high; j = j->next) {
			if (System::String::Compare(pivot->getNombre(), j->val->getNombre()) > 0) {
				if (i) i = i->next;
				else i = low;
				swap(i, j);
			}
		}
		if (i) i = i->next;
		else i = low;
		swap(i, high);
		return i;
	}
	void quickSort(Node<T>^ low, Node<T>^ high) {
		if (high != nullptr && low != high && low != high->next) {
			Node<T>^ pivot = partition(low, high);
			quickSort(low, pivot->prev);
			quickSort(pivot->next, high);
		}
	}
	void sort() {
		quickSort(head, tail);
	}
#pragma endregion
};