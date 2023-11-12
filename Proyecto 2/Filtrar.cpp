#include "Filtrar.h"
using namespace CRUDFarmacia;
//Despliega los datos de los proveedores
void Filtrar::desplegarProveedores() {
	Proveedor^ temp;
	for (int i = 0; i < 4; i++) {
		temp = sistema->getProveedor(i);
		dgv_proveedor->Rows->Add(
			temp->getNombre(),
			temp->getNit(),
			temp->getDirecciónFiscal(),
			temp->getDirección(),
			temp->getTeléfono(),
			temp->getCorreo(),
			temp->getId()
		);
	}
	dgv_proveedor->CurrentCell = dgv_proveedor->Rows[0]->Cells[0];
}
//Pasa el sistema del main al form "Filtrar"
void Filtrar::pasarSistema(Sistema^ sistema) {
	this->sistema = sistema;
	desplegarProveedores();
}
//Abre la lista de proveedores
System::Void Filtrar::btn_proveedores_Click(System::Object^ sender, System::EventArgs^ e) {
	pl_proveedores->Location = btn_proveedores->Location;
	pl_proveedores->Visible = true;
	dgv_proveedor->CurrentCell = dgv_proveedor->Rows[0]->Cells[0];
}
//Muestra solamente los medicamentos que distribuye el proveedor seleccionado
System::Void Filtrar::btn_filtrar_proveedores_Click(System::Object^ sender, System::EventArgs^ e) {
	dgv_medicamento->Rows->Clear();
	sistema->filtrarPorProveedor(dgv_medicamento, System::Convert::ToInt16(dgv_proveedor->CurrentRow->Cells[6]->Value));
}
//Muestra solamente los medicamentos que tengan la categoría seleccionada
System::Void Filtrar::btn_filtrar_categoría_Click(System::Object^ sender, System::EventArgs^ e) {
	dgv_medicamento->Rows->Clear();
	sistema->filtrarPorCategoría(dgv_medicamento, categoría);
}
//Selecciona la categoría
System::Void Filtrar::rB_libre_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	categoría = ventaLibre;
}
//Selecciona la categoría
System::Void Filtrar::rB_receta_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	categoría = ventaReceta;
}
//Cierra la lista de proveedores
System::Void Filtrar::btn_cerrar_Click(System::Object^ sender, System::EventArgs^ e) {
	pl_proveedores->Visible = false;
}