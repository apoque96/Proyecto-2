#pragma once
#include "Sistema.h"
#include <iostream>
#include <fstream>
#include <string>
#include <msclr\marshal_cppstd.h>
#include "Filtrar.h"

namespace CRUDFarmacia {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgv_medicamento;
	protected:






	private: System::Windows::Forms::DataGridView^ dgv_inventario;






	private: System::Windows::Forms::Button^ btn_agregar;
	private: System::Windows::Forms::Button^ btn_actualizar;


	private: System::Windows::Forms::Button^ btn_informe;
	private: System::Windows::Forms::Button^ btn_promedio;


	private: System::Windows::Forms::Button^ btn_precio;
	private: System::Windows::Forms::Button^ btn_buscar;


	private: System::Windows::Forms::Label^ lbl_nombre;
	private: System::Windows::Forms::DateTimePicker^ dT_caducidad;


	private: System::Windows::Forms::TextBox^ tB_nombre;
	private: System::Windows::Forms::TextBox^ tB_principio;
	private: System::Windows::Forms::Label^ lbl_principio;



	private: System::Windows::Forms::Label^ lbl_dosis;
	private: System::Windows::Forms::Label^ lbl_stock;
	private: System::Windows::Forms::Label^ lbl_compra;
	private: System::Windows::Forms::Label^ lbl_venta;
	private: System::Windows::Forms::MaskedTextBox^ tB_dosis;
	private: System::Windows::Forms::MaskedTextBox^ tB_stock;
	private: System::Windows::Forms::MaskedTextBox^ tB_compra;
	private: System::Windows::Forms::MaskedTextBox^ tB_venta;
	private: System::Windows::Forms::Label^ lbl_caducidad;














	private: System::Windows::Forms::DataGridView^ dgv_proveedor;
	private: System::Windows::Forms::Label^ lbl_proveedor;








	private: System::Windows::Forms::DataGridViewTextBoxColumn^ column_Medicamento;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ registro;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Categoría;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Principios;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dosis;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Stock;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Caducidad;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ column_Proveedor;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Compra;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Venta;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nombre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fiscal;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dirección;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Teléfono;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Correo;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ id;
	private: System::Windows::Forms::Button^ btn_proveedores;
	private: System::Windows::Forms::Panel^ pl_proveedores;

	private: System::Windows::Forms::Button^ btn_cerrar;
	private: System::Windows::Forms::Label^ lbl_categoria;
	private: System::Windows::Forms::RadioButton^ rB_libre;

	private: System::Windows::Forms::RadioButton^ rB_receta;
	private: System::Windows::Forms::Button^ btn_inventario;
	private: System::Windows::Forms::Panel^ pl_inventario;


	private: System::Windows::Forms::Label^ pl_inventario_lbl_nombre;
	private: System::Windows::Forms::Button^ pl_inventario_btn_mostrar;

	private: System::Windows::Forms::TextBox^ pl_inventario_tB_nombre;
	private: System::Windows::Forms::Button^ pl_inventario_btn_cerrar;
	private: System::Windows::Forms::Button^ btn_filtrar;
	private: System::Windows::Forms::Panel^ pl_buscar;
	private: System::Windows::Forms::Button^ pl_buscar_btn_cerrar;


	private: System::Windows::Forms::Button^ pl_buscar_btn_nombre;

	private: System::Windows::Forms::TextBox^ pl_buscar_tB_nombre;

	private: System::Windows::Forms::Label^ pl_buscar_lbl_nombre;
	private: System::Windows::Forms::Button^ pl_buscar_btn_principio;


	private: System::Windows::Forms::TextBox^ pl_buscar_tB_principio;

	private: System::Windows::Forms::Label^ pl_buscar_lbl_principio;
	private: System::Windows::Forms::Panel^ pl_informe;
	private: System::Windows::Forms::Button^ pl_informe_btn_cerrar;

	private: System::Windows::Forms::Button^ pl_informe_btn_guardar;
	private: System::Windows::Forms::TextBox^ pl_informe_tB_nombre;

	private: System::Windows::Forms::Label^ pl_informe_lbl_nombre;


























	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->dgv_medicamento = (gcnew System::Windows::Forms::DataGridView());
			this->column_Medicamento = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->registro = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Categoría = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Principios = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dosis = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dgv_inventario = (gcnew System::Windows::Forms::DataGridView());
			this->Stock = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Caducidad = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->column_Proveedor = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Compra = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Venta = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_agregar = (gcnew System::Windows::Forms::Button());
			this->btn_actualizar = (gcnew System::Windows::Forms::Button());
			this->btn_informe = (gcnew System::Windows::Forms::Button());
			this->btn_promedio = (gcnew System::Windows::Forms::Button());
			this->btn_precio = (gcnew System::Windows::Forms::Button());
			this->btn_buscar = (gcnew System::Windows::Forms::Button());
			this->lbl_nombre = (gcnew System::Windows::Forms::Label());
			this->dT_caducidad = (gcnew System::Windows::Forms::DateTimePicker());
			this->tB_nombre = (gcnew System::Windows::Forms::TextBox());
			this->tB_principio = (gcnew System::Windows::Forms::TextBox());
			this->lbl_principio = (gcnew System::Windows::Forms::Label());
			this->lbl_dosis = (gcnew System::Windows::Forms::Label());
			this->lbl_stock = (gcnew System::Windows::Forms::Label());
			this->lbl_compra = (gcnew System::Windows::Forms::Label());
			this->lbl_venta = (gcnew System::Windows::Forms::Label());
			this->tB_dosis = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tB_stock = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tB_compra = (gcnew System::Windows::Forms::MaskedTextBox());
			this->tB_venta = (gcnew System::Windows::Forms::MaskedTextBox());
			this->lbl_caducidad = (gcnew System::Windows::Forms::Label());
			this->dgv_proveedor = (gcnew System::Windows::Forms::DataGridView());
			this->Nombre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Nit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fiscal = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dirección = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Teléfono = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Correo = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lbl_proveedor = (gcnew System::Windows::Forms::Label());
			this->btn_proveedores = (gcnew System::Windows::Forms::Button());
			this->pl_proveedores = (gcnew System::Windows::Forms::Panel());
			this->btn_cerrar = (gcnew System::Windows::Forms::Button());
			this->lbl_categoria = (gcnew System::Windows::Forms::Label());
			this->rB_libre = (gcnew System::Windows::Forms::RadioButton());
			this->rB_receta = (gcnew System::Windows::Forms::RadioButton());
			this->btn_inventario = (gcnew System::Windows::Forms::Button());
			this->pl_inventario = (gcnew System::Windows::Forms::Panel());
			this->pl_inventario_btn_cerrar = (gcnew System::Windows::Forms::Button());
			this->pl_inventario_btn_mostrar = (gcnew System::Windows::Forms::Button());
			this->pl_inventario_tB_nombre = (gcnew System::Windows::Forms::TextBox());
			this->pl_inventario_lbl_nombre = (gcnew System::Windows::Forms::Label());
			this->btn_filtrar = (gcnew System::Windows::Forms::Button());
			this->pl_buscar = (gcnew System::Windows::Forms::Panel());
			this->pl_buscar_btn_principio = (gcnew System::Windows::Forms::Button());
			this->pl_buscar_tB_principio = (gcnew System::Windows::Forms::TextBox());
			this->pl_buscar_lbl_principio = (gcnew System::Windows::Forms::Label());
			this->pl_buscar_btn_cerrar = (gcnew System::Windows::Forms::Button());
			this->pl_buscar_btn_nombre = (gcnew System::Windows::Forms::Button());
			this->pl_buscar_tB_nombre = (gcnew System::Windows::Forms::TextBox());
			this->pl_buscar_lbl_nombre = (gcnew System::Windows::Forms::Label());
			this->pl_informe = (gcnew System::Windows::Forms::Panel());
			this->pl_informe_btn_cerrar = (gcnew System::Windows::Forms::Button());
			this->pl_informe_btn_guardar = (gcnew System::Windows::Forms::Button());
			this->pl_informe_tB_nombre = (gcnew System::Windows::Forms::TextBox());
			this->pl_informe_lbl_nombre = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_medicamento))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_inventario))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_proveedor))->BeginInit();
			this->pl_proveedores->SuspendLayout();
			this->pl_inventario->SuspendLayout();
			this->pl_buscar->SuspendLayout();
			this->pl_informe->SuspendLayout();
			this->SuspendLayout();
			// 
			// dgv_medicamento
			// 
			this->dgv_medicamento->AllowUserToAddRows = false;
			this->dgv_medicamento->AllowUserToDeleteRows = false;
			this->dgv_medicamento->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_medicamento->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->column_Medicamento,
					this->registro, this->Categoría, this->Principios, this->Dosis
			});
			this->dgv_medicamento->Location = System::Drawing::Point(12, 184);
			this->dgv_medicamento->Name = L"dgv_medicamento";
			this->dgv_medicamento->ReadOnly = true;
			this->dgv_medicamento->Size = System::Drawing::Size(956, 136);
			this->dgv_medicamento->TabIndex = 0;
			this->dgv_medicamento->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &main::dgv_medicamento_CellClick);
			// 
			// column_Medicamento
			// 
			this->column_Medicamento->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->column_Medicamento->HeaderText = L"Medicamento";
			this->column_Medicamento->Name = L"column_Medicamento";
			this->column_Medicamento->ReadOnly = true;
			// 
			// registro
			// 
			this->registro->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->registro->HeaderText = L"Número de registro";
			this->registro->Name = L"registro";
			this->registro->ReadOnly = true;
			// 
			// Categoría
			// 
			this->Categoría->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Categoría->HeaderText = L"Categoría";
			this->Categoría->Name = L"Categoría";
			this->Categoría->ReadOnly = true;
			// 
			// Principios
			// 
			this->Principios->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Principios->HeaderText = L"Principios Activos";
			this->Principios->Name = L"Principios";
			this->Principios->ReadOnly = true;
			// 
			// Dosis
			// 
			this->Dosis->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Dosis->HeaderText = L"Dosis recomendada(mg)";
			this->Dosis->Name = L"Dosis";
			this->Dosis->ReadOnly = true;
			// 
			// dgv_inventario
			// 
			this->dgv_inventario->AllowUserToAddRows = false;
			this->dgv_inventario->AllowUserToDeleteRows = false;
			this->dgv_inventario->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_inventario->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Stock,
					this->Caducidad, this->column_Proveedor, this->Compra, this->Venta
			});
			this->dgv_inventario->Location = System::Drawing::Point(12, 347);
			this->dgv_inventario->Name = L"dgv_inventario";
			this->dgv_inventario->ReadOnly = true;
			this->dgv_inventario->Size = System::Drawing::Size(956, 74);
			this->dgv_inventario->TabIndex = 1;
			// 
			// Stock
			// 
			this->Stock->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Stock->HeaderText = L"Stock";
			this->Stock->Name = L"Stock";
			this->Stock->ReadOnly = true;
			// 
			// Caducidad
			// 
			this->Caducidad->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Caducidad->HeaderText = L"Fecha de caducidad";
			this->Caducidad->Name = L"Caducidad";
			this->Caducidad->ReadOnly = true;
			// 
			// column_Proveedor
			// 
			this->column_Proveedor->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->column_Proveedor->HeaderText = L"Proveedor";
			this->column_Proveedor->Name = L"column_Proveedor";
			this->column_Proveedor->ReadOnly = true;
			// 
			// Compra
			// 
			this->Compra->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Compra->HeaderText = L"Precio de compra";
			this->Compra->Name = L"Compra";
			this->Compra->ReadOnly = true;
			// 
			// Venta
			// 
			this->Venta->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Venta->HeaderText = L"Precio de venta";
			this->Venta->Name = L"Venta";
			this->Venta->ReadOnly = true;
			// 
			// btn_agregar
			// 
			this->btn_agregar->Location = System::Drawing::Point(877, 21);
			this->btn_agregar->Name = L"btn_agregar";
			this->btn_agregar->Size = System::Drawing::Size(75, 59);
			this->btn_agregar->TabIndex = 2;
			this->btn_agregar->Text = L"Agregar";
			this->btn_agregar->UseVisualStyleBackColor = true;
			this->btn_agregar->Click += gcnew System::EventHandler(this, &main::btn_agregar_Click);
			// 
			// btn_actualizar
			// 
			this->btn_actualizar->Location = System::Drawing::Point(877, 103);
			this->btn_actualizar->Name = L"btn_actualizar";
			this->btn_actualizar->Size = System::Drawing::Size(75, 59);
			this->btn_actualizar->TabIndex = 3;
			this->btn_actualizar->Text = L"Actualizar";
			this->btn_actualizar->UseVisualStyleBackColor = true;
			this->btn_actualizar->Click += gcnew System::EventHandler(this, &main::btn_actualizar_Click);
			// 
			// btn_informe
			// 
			this->btn_informe->Location = System::Drawing::Point(778, 21);
			this->btn_informe->Name = L"btn_informe";
			this->btn_informe->Size = System::Drawing::Size(75, 59);
			this->btn_informe->TabIndex = 4;
			this->btn_informe->Text = L"Informe";
			this->btn_informe->UseVisualStyleBackColor = true;
			this->btn_informe->Click += gcnew System::EventHandler(this, &main::btn_informe_Click);
			// 
			// btn_promedio
			// 
			this->btn_promedio->Location = System::Drawing::Point(778, 103);
			this->btn_promedio->Name = L"btn_promedio";
			this->btn_promedio->Size = System::Drawing::Size(75, 59);
			this->btn_promedio->TabIndex = 5;
			this->btn_promedio->Text = L"Promedio";
			this->btn_promedio->UseVisualStyleBackColor = true;
			this->btn_promedio->Click += gcnew System::EventHandler(this, &main::btn_promedio_Click);
			// 
			// btn_precio
			// 
			this->btn_precio->Location = System::Drawing::Point(681, 21);
			this->btn_precio->Name = L"btn_precio";
			this->btn_precio->Size = System::Drawing::Size(75, 59);
			this->btn_precio->TabIndex = 6;
			this->btn_precio->Text = L"Precio más alto";
			this->btn_precio->UseVisualStyleBackColor = true;
			// 
			// btn_buscar
			// 
			this->btn_buscar->Location = System::Drawing::Point(417, 135);
			this->btn_buscar->Name = L"btn_buscar";
			this->btn_buscar->Size = System::Drawing::Size(75, 40);
			this->btn_buscar->TabIndex = 7;
			this->btn_buscar->Text = L"Buscar";
			this->btn_buscar->UseVisualStyleBackColor = true;
			this->btn_buscar->Click += gcnew System::EventHandler(this, &main::btn_buscar_Click);
			// 
			// lbl_nombre
			// 
			this->lbl_nombre->AutoSize = true;
			this->lbl_nombre->Location = System::Drawing::Point(285, 24);
			this->lbl_nombre->Name = L"lbl_nombre";
			this->lbl_nombre->Size = System::Drawing::Size(44, 13);
			this->lbl_nombre->TabIndex = 8;
			this->lbl_nombre->Text = L"Nombre";
			// 
			// dT_caducidad
			// 
			this->dT_caducidad->Location = System::Drawing::Point(20, 37);
			this->dT_caducidad->Name = L"dT_caducidad";
			this->dT_caducidad->Size = System::Drawing::Size(200, 20);
			this->dT_caducidad->TabIndex = 9;
			// 
			// tB_nombre
			// 
			this->tB_nombre->Location = System::Drawing::Point(335, 21);
			this->tB_nombre->Name = L"tB_nombre";
			this->tB_nombre->Size = System::Drawing::Size(100, 20);
			this->tB_nombre->TabIndex = 10;
			// 
			// tB_principio
			// 
			this->tB_principio->Location = System::Drawing::Point(335, 60);
			this->tB_principio->Name = L"tB_principio";
			this->tB_principio->Size = System::Drawing::Size(100, 20);
			this->tB_principio->TabIndex = 12;
			// 
			// lbl_principio
			// 
			this->lbl_principio->AutoSize = true;
			this->lbl_principio->Location = System::Drawing::Point(241, 63);
			this->lbl_principio->Name = L"lbl_principio";
			this->lbl_principio->Size = System::Drawing::Size(90, 13);
			this->lbl_principio->TabIndex = 11;
			this->lbl_principio->Text = L"Principios Activos";
			// 
			// lbl_dosis
			// 
			this->lbl_dosis->AutoSize = true;
			this->lbl_dosis->Location = System::Drawing::Point(230, 99);
			this->lbl_dosis->Name = L"lbl_dosis";
			this->lbl_dosis->Size = System::Drawing::Size(101, 13);
			this->lbl_dosis->TabIndex = 13;
			this->lbl_dosis->Text = L"Dosis recomendada";
			// 
			// lbl_stock
			// 
			this->lbl_stock->AutoSize = true;
			this->lbl_stock->Location = System::Drawing::Point(513, 24);
			this->lbl_stock->Name = L"lbl_stock";
			this->lbl_stock->Size = System::Drawing::Size(35, 13);
			this->lbl_stock->TabIndex = 15;
			this->lbl_stock->Text = L"Stock";
			// 
			// lbl_compra
			// 
			this->lbl_compra->AutoSize = true;
			this->lbl_compra->Location = System::Drawing::Point(458, 63);
			this->lbl_compra->Name = L"lbl_compra";
			this->lbl_compra->Size = System::Drawing::Size(90, 13);
			this->lbl_compra->TabIndex = 17;
			this->lbl_compra->Text = L"Precio de compra";
			// 
			// lbl_venta
			// 
			this->lbl_venta->AutoSize = true;
			this->lbl_venta->Location = System::Drawing::Point(458, 99);
			this->lbl_venta->Name = L"lbl_venta";
			this->lbl_venta->Size = System::Drawing::Size(82, 13);
			this->lbl_venta->TabIndex = 19;
			this->lbl_venta->Text = L"Precio de venta";
			// 
			// tB_dosis
			// 
			this->tB_dosis->Location = System::Drawing::Point(337, 96);
			this->tB_dosis->Mask = L"000.00";
			this->tB_dosis->Name = L"tB_dosis";
			this->tB_dosis->Size = System::Drawing::Size(100, 20);
			this->tB_dosis->TabIndex = 21;
			this->tB_dosis->TextMaskFormat = System::Windows::Forms::MaskFormat::IncludePromptAndLiterals;
			// 
			// tB_stock
			// 
			this->tB_stock->Location = System::Drawing::Point(554, 21);
			this->tB_stock->Mask = L"000";
			this->tB_stock->Name = L"tB_stock";
			this->tB_stock->Size = System::Drawing::Size(100, 20);
			this->tB_stock->TabIndex = 22;
			this->tB_stock->ValidatingType = System::Int32::typeid;
			// 
			// tB_compra
			// 
			this->tB_compra->Location = System::Drawing::Point(554, 60);
			this->tB_compra->Mask = L"000.00";
			this->tB_compra->Name = L"tB_compra";
			this->tB_compra->Size = System::Drawing::Size(100, 20);
			this->tB_compra->TabIndex = 23;
			this->tB_compra->TextMaskFormat = System::Windows::Forms::MaskFormat::IncludePromptAndLiterals;
			// 
			// tB_venta
			// 
			this->tB_venta->Location = System::Drawing::Point(554, 96);
			this->tB_venta->Mask = L"000.00";
			this->tB_venta->Name = L"tB_venta";
			this->tB_venta->Size = System::Drawing::Size(100, 20);
			this->tB_venta->TabIndex = 24;
			this->tB_venta->TextMaskFormat = System::Windows::Forms::MaskFormat::IncludePromptAndLiterals;
			// 
			// lbl_caducidad
			// 
			this->lbl_caducidad->AutoSize = true;
			this->lbl_caducidad->Location = System::Drawing::Point(69, 21);
			this->lbl_caducidad->Name = L"lbl_caducidad";
			this->lbl_caducidad->Size = System::Drawing::Size(105, 13);
			this->lbl_caducidad->TabIndex = 25;
			this->lbl_caducidad->Text = L"Fecha de caducidad";
			// 
			// dgv_proveedor
			// 
			this->dgv_proveedor->AllowUserToAddRows = false;
			this->dgv_proveedor->AllowUserToDeleteRows = false;
			this->dgv_proveedor->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv_proveedor->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->Nombre,
					this->Nit, this->Fiscal, this->Dirección, this->Teléfono, this->Correo, this->id
			});
			this->dgv_proveedor->Location = System::Drawing::Point(-2, -2);
			this->dgv_proveedor->Name = L"dgv_proveedor";
			this->dgv_proveedor->ReadOnly = true;
			this->dgv_proveedor->Size = System::Drawing::Size(642, 259);
			this->dgv_proveedor->TabIndex = 26;
			// 
			// Nombre
			// 
			this->Nombre->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Nombre->HeaderText = L"Nombre";
			this->Nombre->Name = L"Nombre";
			this->Nombre->ReadOnly = true;
			// 
			// Nit
			// 
			this->Nit->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Nit->HeaderText = L"Nit";
			this->Nit->Name = L"Nit";
			this->Nit->ReadOnly = true;
			// 
			// Fiscal
			// 
			this->Fiscal->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Fiscal->HeaderText = L"Dirección fiscal";
			this->Fiscal->Name = L"Fiscal";
			this->Fiscal->ReadOnly = true;
			// 
			// Dirección
			// 
			this->Dirección->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Dirección->HeaderText = L"Dirección";
			this->Dirección->Name = L"Dirección";
			this->Dirección->ReadOnly = true;
			// 
			// Teléfono
			// 
			this->Teléfono->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Teléfono->HeaderText = L"Teléfono";
			this->Teléfono->Name = L"Teléfono";
			this->Teléfono->ReadOnly = true;
			// 
			// Correo
			// 
			this->Correo->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Correo->HeaderText = L"Correo";
			this->Correo->Name = L"Correo";
			this->Correo->ReadOnly = true;
			// 
			// id
			// 
			this->id->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->id->HeaderText = L"id";
			this->id->Name = L"id";
			this->id->ReadOnly = true;
			this->id->Visible = false;
			// 
			// lbl_proveedor
			// 
			this->lbl_proveedor->AutoSize = true;
			this->lbl_proveedor->Location = System::Drawing::Point(91, 67);
			this->lbl_proveedor->Name = L"lbl_proveedor";
			this->lbl_proveedor->Size = System::Drawing::Size(56, 13);
			this->lbl_proveedor->TabIndex = 27;
			this->lbl_proveedor->Text = L"Proveedor";
			// 
			// btn_proveedores
			// 
			this->btn_proveedores->Location = System::Drawing::Point(64, 96);
			this->btn_proveedores->Name = L"btn_proveedores";
			this->btn_proveedores->Size = System::Drawing::Size(112, 23);
			this->btn_proveedores->TabIndex = 28;
			this->btn_proveedores->Text = L"mostrar proveedores";
			this->btn_proveedores->UseVisualStyleBackColor = true;
			this->btn_proveedores->Click += gcnew System::EventHandler(this, &main::btn_proveedores_Click);
			// 
			// pl_proveedores
			// 
			this->pl_proveedores->Controls->Add(this->btn_cerrar);
			this->pl_proveedores->Controls->Add(this->dgv_proveedor);
			this->pl_proveedores->Location = System::Drawing::Point(906, 168);
			this->pl_proveedores->Name = L"pl_proveedores";
			this->pl_proveedores->Size = System::Drawing::Size(639, 285);
			this->pl_proveedores->TabIndex = 29;
			this->pl_proveedores->Visible = false;
			// 
			// btn_cerrar
			// 
			this->btn_cerrar->Location = System::Drawing::Point(3, 259);
			this->btn_cerrar->Name = L"btn_cerrar";
			this->btn_cerrar->Size = System::Drawing::Size(630, 23);
			this->btn_cerrar->TabIndex = 27;
			this->btn_cerrar->Text = L"cerrar";
			this->btn_cerrar->UseVisualStyleBackColor = true;
			this->btn_cerrar->Click += gcnew System::EventHandler(this, &main::btn_cerrar_Click);
			// 
			// lbl_categoria
			// 
			this->lbl_categoria->AutoSize = true;
			this->lbl_categoria->Location = System::Drawing::Point(32, 149);
			this->lbl_categoria->Name = L"lbl_categoria";
			this->lbl_categoria->Size = System::Drawing::Size(57, 13);
			this->lbl_categoria->TabIndex = 30;
			this->lbl_categoria->Text = L"Categoría:";
			// 
			// rB_libre
			// 
			this->rB_libre->AutoSize = true;
			this->rB_libre->Checked = true;
			this->rB_libre->Location = System::Drawing::Point(104, 147);
			this->rB_libre->Name = L"rB_libre";
			this->rB_libre->Size = System::Drawing::Size(75, 17);
			this->rB_libre->TabIndex = 31;
			this->rB_libre->TabStop = true;
			this->rB_libre->Text = L"Venta libre";
			this->rB_libre->UseVisualStyleBackColor = true;
			this->rB_libre->Click += gcnew System::EventHandler(this, &main::rB_libre_Click);
			// 
			// rB_receta
			// 
			this->rB_receta->AutoSize = true;
			this->rB_receta->Location = System::Drawing::Point(195, 149);
			this->rB_receta->Name = L"rB_receta";
			this->rB_receta->Size = System::Drawing::Size(86, 17);
			this->rB_receta->TabIndex = 32;
			this->rB_receta->TabStop = true;
			this->rB_receta->Text = L"Venta receta";
			this->rB_receta->UseVisualStyleBackColor = true;
			this->rB_receta->Click += gcnew System::EventHandler(this, &main::rB_receta_Click);
			// 
			// btn_inventario
			// 
			this->btn_inventario->Location = System::Drawing::Point(302, 135);
			this->btn_inventario->Name = L"btn_inventario";
			this->btn_inventario->Size = System::Drawing::Size(75, 40);
			this->btn_inventario->TabIndex = 33;
			this->btn_inventario->Text = L"Inventario";
			this->btn_inventario->UseVisualStyleBackColor = true;
			this->btn_inventario->Click += gcnew System::EventHandler(this, &main::btn_inventario_Click);
			// 
			// pl_inventario
			// 
			this->pl_inventario->Controls->Add(this->pl_inventario_btn_cerrar);
			this->pl_inventario->Controls->Add(this->pl_inventario_btn_mostrar);
			this->pl_inventario->Controls->Add(this->pl_inventario_tB_nombre);
			this->pl_inventario->Controls->Add(this->pl_inventario_lbl_nombre);
			this->pl_inventario->Location = System::Drawing::Point(235, 283);
			this->pl_inventario->Name = L"pl_inventario";
			this->pl_inventario->Size = System::Drawing::Size(200, 121);
			this->pl_inventario->TabIndex = 34;
			this->pl_inventario->Visible = false;
			// 
			// pl_inventario_btn_cerrar
			// 
			this->pl_inventario_btn_cerrar->Location = System::Drawing::Point(55, 87);
			this->pl_inventario_btn_cerrar->Name = L"pl_inventario_btn_cerrar";
			this->pl_inventario_btn_cerrar->Size = System::Drawing::Size(75, 31);
			this->pl_inventario_btn_cerrar->TabIndex = 36;
			this->pl_inventario_btn_cerrar->Text = L"cerrar";
			this->pl_inventario_btn_cerrar->UseVisualStyleBackColor = true;
			this->pl_inventario_btn_cerrar->Click += gcnew System::EventHandler(this, &main::pl_inventario_btn_cerrar_Click);
			// 
			// pl_inventario_btn_mostrar
			// 
			this->pl_inventario_btn_mostrar->Location = System::Drawing::Point(55, 56);
			this->pl_inventario_btn_mostrar->Name = L"pl_inventario_btn_mostrar";
			this->pl_inventario_btn_mostrar->Size = System::Drawing::Size(75, 31);
			this->pl_inventario_btn_mostrar->TabIndex = 35;
			this->pl_inventario_btn_mostrar->Text = L"mostrar";
			this->pl_inventario_btn_mostrar->UseVisualStyleBackColor = true;
			this->pl_inventario_btn_mostrar->Click += gcnew System::EventHandler(this, &main::pl_inventario_btn_mostrar_Click);
			// 
			// pl_inventario_tB_nombre
			// 
			this->pl_inventario_tB_nombre->Location = System::Drawing::Point(44, 30);
			this->pl_inventario_tB_nombre->Name = L"pl_inventario_tB_nombre";
			this->pl_inventario_tB_nombre->Size = System::Drawing::Size(100, 20);
			this->pl_inventario_tB_nombre->TabIndex = 35;
			// 
			// pl_inventario_lbl_nombre
			// 
			this->pl_inventario_lbl_nombre->AutoSize = true;
			this->pl_inventario_lbl_nombre->Location = System::Drawing::Point(77, 14);
			this->pl_inventario_lbl_nombre->Name = L"pl_inventario_lbl_nombre";
			this->pl_inventario_lbl_nombre->Size = System::Drawing::Size(44, 13);
			this->pl_inventario_lbl_nombre->TabIndex = 0;
			this->pl_inventario_lbl_nombre->Text = L"Nombre";
			// 
			// btn_filtrar
			// 
			this->btn_filtrar->Location = System::Drawing::Point(681, 103);
			this->btn_filtrar->Name = L"btn_filtrar";
			this->btn_filtrar->Size = System::Drawing::Size(75, 59);
			this->btn_filtrar->TabIndex = 35;
			this->btn_filtrar->Text = L"Filtrar";
			this->btn_filtrar->UseVisualStyleBackColor = true;
			this->btn_filtrar->Click += gcnew System::EventHandler(this, &main::btn_filtrar_Click);
			// 
			// pl_buscar
			// 
			this->pl_buscar->Controls->Add(this->pl_buscar_btn_principio);
			this->pl_buscar->Controls->Add(this->pl_buscar_tB_principio);
			this->pl_buscar->Controls->Add(this->pl_buscar_lbl_principio);
			this->pl_buscar->Controls->Add(this->pl_buscar_btn_cerrar);
			this->pl_buscar->Controls->Add(this->pl_buscar_btn_nombre);
			this->pl_buscar->Controls->Add(this->pl_buscar_tB_nombre);
			this->pl_buscar->Controls->Add(this->pl_buscar_lbl_nombre);
			this->pl_buscar->Location = System::Drawing::Point(461, 283);
			this->pl_buscar->Name = L"pl_buscar";
			this->pl_buscar->Size = System::Drawing::Size(243, 121);
			this->pl_buscar->TabIndex = 37;
			this->pl_buscar->Visible = false;
			// 
			// pl_buscar_btn_principio
			// 
			this->pl_buscar_btn_principio->Location = System::Drawing::Point(146, 56);
			this->pl_buscar_btn_principio->Name = L"pl_buscar_btn_principio";
			this->pl_buscar_btn_principio->Size = System::Drawing::Size(75, 31);
			this->pl_buscar_btn_principio->TabIndex = 39;
			this->pl_buscar_btn_principio->Text = L"Principio";
			this->pl_buscar_btn_principio->UseVisualStyleBackColor = true;
			this->pl_buscar_btn_principio->Click += gcnew System::EventHandler(this, &main::pl_buscar_btn_principio_Click);
			// 
			// pl_buscar_tB_principio
			// 
			this->pl_buscar_tB_principio->Location = System::Drawing::Point(132, 30);
			this->pl_buscar_tB_principio->Name = L"pl_buscar_tB_principio";
			this->pl_buscar_tB_principio->Size = System::Drawing::Size(100, 20);
			this->pl_buscar_tB_principio->TabIndex = 38;
			// 
			// pl_buscar_lbl_principio
			// 
			this->pl_buscar_lbl_principio->AutoSize = true;
			this->pl_buscar_lbl_principio->Location = System::Drawing::Point(163, 14);
			this->pl_buscar_lbl_principio->Name = L"pl_buscar_lbl_principio";
			this->pl_buscar_lbl_principio->Size = System::Drawing::Size(47, 13);
			this->pl_buscar_lbl_principio->TabIndex = 37;
			this->pl_buscar_lbl_principio->Text = L"Principio";
			// 
			// pl_buscar_btn_cerrar
			// 
			this->pl_buscar_btn_cerrar->Location = System::Drawing::Point(81, 87);
			this->pl_buscar_btn_cerrar->Name = L"pl_buscar_btn_cerrar";
			this->pl_buscar_btn_cerrar->Size = System::Drawing::Size(75, 31);
			this->pl_buscar_btn_cerrar->TabIndex = 36;
			this->pl_buscar_btn_cerrar->Text = L"cerrar";
			this->pl_buscar_btn_cerrar->UseVisualStyleBackColor = true;
			this->pl_buscar_btn_cerrar->Click += gcnew System::EventHandler(this, &main::pl_buscar_btn_cerrar_Click);
			// 
			// pl_buscar_btn_nombre
			// 
			this->pl_buscar_btn_nombre->Location = System::Drawing::Point(23, 56);
			this->pl_buscar_btn_nombre->Name = L"pl_buscar_btn_nombre";
			this->pl_buscar_btn_nombre->Size = System::Drawing::Size(75, 31);
			this->pl_buscar_btn_nombre->TabIndex = 35;
			this->pl_buscar_btn_nombre->Text = L"Nombre";
			this->pl_buscar_btn_nombre->UseVisualStyleBackColor = true;
			this->pl_buscar_btn_nombre->Click += gcnew System::EventHandler(this, &main::pl_buscar_btn_nombre_Click);
			// 
			// pl_buscar_tB_nombre
			// 
			this->pl_buscar_tB_nombre->Location = System::Drawing::Point(12, 30);
			this->pl_buscar_tB_nombre->Name = L"pl_buscar_tB_nombre";
			this->pl_buscar_tB_nombre->Size = System::Drawing::Size(100, 20);
			this->pl_buscar_tB_nombre->TabIndex = 35;
			// 
			// pl_buscar_lbl_nombre
			// 
			this->pl_buscar_lbl_nombre->AutoSize = true;
			this->pl_buscar_lbl_nombre->Location = System::Drawing::Point(43, 14);
			this->pl_buscar_lbl_nombre->Name = L"pl_buscar_lbl_nombre";
			this->pl_buscar_lbl_nombre->Size = System::Drawing::Size(44, 13);
			this->pl_buscar_lbl_nombre->TabIndex = 0;
			this->pl_buscar_lbl_nombre->Text = L"Nombre";
			// 
			// pl_informe
			// 
			this->pl_informe->Controls->Add(this->pl_informe_btn_cerrar);
			this->pl_informe->Controls->Add(this->pl_informe_btn_guardar);
			this->pl_informe->Controls->Add(this->pl_informe_tB_nombre);
			this->pl_informe->Controls->Add(this->pl_informe_lbl_nombre);
			this->pl_informe->Location = System::Drawing::Point(653, 21);
			this->pl_informe->Name = L"pl_informe";
			this->pl_informe->Size = System::Drawing::Size(200, 121);
			this->pl_informe->TabIndex = 37;
			this->pl_informe->Visible = false;
			// 
			// pl_informe_btn_cerrar
			// 
			this->pl_informe_btn_cerrar->Location = System::Drawing::Point(55, 87);
			this->pl_informe_btn_cerrar->Name = L"pl_informe_btn_cerrar";
			this->pl_informe_btn_cerrar->Size = System::Drawing::Size(75, 31);
			this->pl_informe_btn_cerrar->TabIndex = 36;
			this->pl_informe_btn_cerrar->Text = L"cerrar";
			this->pl_informe_btn_cerrar->UseVisualStyleBackColor = true;
			this->pl_informe_btn_cerrar->Click += gcnew System::EventHandler(this, &main::pl_informe_btn_cerrar_Click);
			// 
			// pl_informe_btn_guardar
			// 
			this->pl_informe_btn_guardar->Location = System::Drawing::Point(55, 56);
			this->pl_informe_btn_guardar->Name = L"pl_informe_btn_guardar";
			this->pl_informe_btn_guardar->Size = System::Drawing::Size(75, 31);
			this->pl_informe_btn_guardar->TabIndex = 35;
			this->pl_informe_btn_guardar->Text = L"guardar";
			this->pl_informe_btn_guardar->UseVisualStyleBackColor = true;
			this->pl_informe_btn_guardar->Click += gcnew System::EventHandler(this, &main::pl_informe_btn_guardar_Click);
			// 
			// pl_informe_tB_nombre
			// 
			this->pl_informe_tB_nombre->Location = System::Drawing::Point(44, 30);
			this->pl_informe_tB_nombre->Name = L"pl_informe_tB_nombre";
			this->pl_informe_tB_nombre->Size = System::Drawing::Size(100, 20);
			this->pl_informe_tB_nombre->TabIndex = 35;
			// 
			// pl_informe_lbl_nombre
			// 
			this->pl_informe_lbl_nombre->AutoSize = true;
			this->pl_informe_lbl_nombre->Location = System::Drawing::Point(45, 14);
			this->pl_informe_lbl_nombre->Name = L"pl_informe_lbl_nombre";
			this->pl_informe_lbl_nombre->Size = System::Drawing::Size(99, 13);
			this->pl_informe_lbl_nombre->TabIndex = 0;
			this->pl_informe_lbl_nombre->Text = L"Nombre del archivo";
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(980, 427);
			this->Controls->Add(this->pl_informe);
			this->Controls->Add(this->pl_buscar);
			this->Controls->Add(this->pl_inventario);
			this->Controls->Add(this->pl_proveedores);
			this->Controls->Add(this->rB_receta);
			this->Controls->Add(this->rB_libre);
			this->Controls->Add(this->lbl_categoria);
			this->Controls->Add(this->btn_proveedores);
			this->Controls->Add(this->lbl_proveedor);
			this->Controls->Add(this->lbl_caducidad);
			this->Controls->Add(this->tB_venta);
			this->Controls->Add(this->tB_compra);
			this->Controls->Add(this->tB_stock);
			this->Controls->Add(this->tB_dosis);
			this->Controls->Add(this->lbl_venta);
			this->Controls->Add(this->lbl_compra);
			this->Controls->Add(this->lbl_stock);
			this->Controls->Add(this->lbl_dosis);
			this->Controls->Add(this->tB_principio);
			this->Controls->Add(this->lbl_principio);
			this->Controls->Add(this->tB_nombre);
			this->Controls->Add(this->dT_caducidad);
			this->Controls->Add(this->lbl_nombre);
			this->Controls->Add(this->btn_buscar);
			this->Controls->Add(this->btn_precio);
			this->Controls->Add(this->btn_promedio);
			this->Controls->Add(this->btn_informe);
			this->Controls->Add(this->btn_actualizar);
			this->Controls->Add(this->btn_agregar);
			this->Controls->Add(this->dgv_inventario);
			this->Controls->Add(this->dgv_medicamento);
			this->Controls->Add(this->btn_inventario);
			this->Controls->Add(this->btn_filtrar);
			this->Name = L"main";
			this->Text = L"main";
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_medicamento))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_inventario))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgv_proveedor))->EndInit();
			this->pl_proveedores->ResumeLayout(false);
			this->pl_inventario->ResumeLayout(false);
			this->pl_inventario->PerformLayout();
			this->pl_buscar->ResumeLayout(false);
			this->pl_buscar->PerformLayout();
			this->pl_informe->ResumeLayout(false);
			this->pl_informe->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//Contiene todos los metodos y las variables del sistema
		Sistema^ sistema = gcnew Sistema();
		//Categoría seleccionada
		Clasificación categoría = ventaLibre;
		//Form para filtrar medicamentos
		Filtrar^ formFiltrado;

		void desplegarProveedores();
		void desplegarInventario(Inventario^ inventario);
		void actualizar();

		//Llena el dataGridView con los 4 proveedores
	private: System::Void main_Load(System::Object^ sender, System::EventArgs^ e);
#pragma region Botones
		   //Agrega el inventario de un medicamento
	private: System::Void btn_agregar_Click(System::Object^ sender, System::EventArgs^ e);
		   //Muestra el panel de los proveedores
	private: System::Void btn_proveedores_Click(System::Object^ sender, System::EventArgs^ e);
		   //Cierra el panel de los proveedores
	private: System::Void btn_cerrar_Click(System::Object^ sender, System::EventArgs^ e);
		   //Selecciona la categoria "Venta libre"	
	private: System::Void rB_libre_Click(System::Object^ sender, System::EventArgs^ e);
		   //Selecciona la categoría "Venta receta"
	private: System::Void rB_receta_Click(System::Object^ sender, System::EventArgs^ e);
		   //Despliega el inventario del medicamento dado
	private: System::Void dgv_medicamento_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e);
		   //Muestra el panel para que el usuario ingrese el medicamento a buscar
	private: System::Void btn_inventario_Click(System::Object^ sender, System::EventArgs^ e);
		   //Cierra el panel para buscar medicamento por nombre
	private: System::Void pl_inventario_btn_cerrar_Click(System::Object^ sender, System::EventArgs^ e);
		   //Busca el inventario del medicamento a partir de su nombre y luego despliega el inventario
	private: System::Void pl_inventario_btn_mostrar_Click(System::Object^ sender, System::EventArgs^ e);
		   //Muestra el panel para buscar el medicamento a partir del nombre o principio activo
	private: System::Void btn_buscar_Click(System::Object^ sender, System::EventArgs^ e);
		   //Cierra el panel de busqueda
	private: System::Void pl_buscar_btn_cerrar_Click(System::Object^ sender, System::EventArgs^ e);
		   //Busca el medicamento a partir de su nombre
	private: System::Void pl_buscar_btn_nombre_Click(System::Object^ sender, System::EventArgs^ e);
		   //Busca el medicamento a partir de su principio activo
	private: System::Void pl_buscar_btn_principio_Click(System::Object^ sender, System::EventArgs^ e);
		   //Muestra el panel para crear un informe
	private: System::Void btn_informe_Click(System::Object^ sender, System::EventArgs^ e);
		   //Guarda los datos ingresados a un csv
	private: System::Void pl_informe_btn_guardar_Click(System::Object^ sender, System::EventArgs^ e);
		   //Cierra el panel del informe
	private: System::Void pl_informe_btn_cerrar_Click(System::Object^ sender, System::EventArgs^ e);
		   //Abre el form utilizado para mostrar los medicamentos con un filtro dado
	private: System::Void btn_filtrar_Click(System::Object^ sender, System::EventArgs^ e);
		   //Actualiza los datos del medicamento
	private: System::Void btn_actualizar_Click(System::Object^ sender, System::EventArgs^ e);
		   //Obtiene el promedio del precio de venta y de compra
	private: System::Void btn_promedio_Click(System::Object^ sender, System::EventArgs^ e);
#pragma endregion
	};
}
