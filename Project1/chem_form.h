#pragma once
#include <exception>
#include"customersform.h"
#include "suppliersform.h"
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for chem_form
	/// </summary>
	public ref class chem_form : public System::Windows::Forms::Form
	{
		SqlConnection^ sqlconn = gcnew SqlConnection();
		SqlCommand^ sqlcmd = gcnew SqlCommand();
		SqlDataAdapter^ sqldta = gcnew SqlDataAdapter();
		DataTable^ sqltable = gcnew DataTable(); 
		SqlDataReader^ sqlrdr;
		long long result;
		int no;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	public: System::Windows::Forms::DataGridView^ dataGridView1;
	private:







	private: System::Windows::Forms::Button^ button2;











	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ tbnotes;



	private: System::Windows::Forms::TextBox^ tbname;





	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ profitlbl;
	private: System::Windows::Forms::TextBox^ tbcode;
	private: System::Windows::Forms::TextBox^ tbunit;
	private: System::Windows::Forms::TextBox^ tbquantity;











	private: System::Windows::Forms::Label^ label17;













	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ tbbuy;
	private: System::Windows::Forms::TextBox^ tbsell;


	private: System::Windows::Forms::TextBox^ tbcas;









	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label22;

	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;












private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Button^ button7;
private: System::Windows::Forms::Label^ label21;
private: System::Windows::Forms::Label^ label26;
private: System::Windows::Forms::TextBox^ tbbrand;
private: System::Windows::Forms::Label^ label1;
private: System::Windows::Forms::Label^ label11;
private: System::Windows::Forms::TextBox^ tbmarket;
private: System::Windows::Forms::Label^ label15;
private: System::Windows::Forms::Label^ label16;
private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::Label^ label14;





private: System::Windows::Forms::Button^ button6;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::Button^ button9;



private: System::Windows::Forms::Button^ button1;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
private: System::Windows::Forms::Button^ button3;
private: System::Windows::Forms::Button^ button10;















	private: System::Windows::Forms::Button^ button4;

		  
	public:
		chem_form(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			 connector();
		}
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~chem_form()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(chem_form::typeid));
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->tbmarket = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tbbrand = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tbbuy = (gcnew System::Windows::Forms::TextBox());
			this->tbsell = (gcnew System::Windows::Forms::TextBox());
			this->tbcas = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->profitlbl = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbnotes = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tbcode = (gcnew System::Windows::Forms::TextBox());
			this->tbunit = (gcnew System::Windows::Forms::TextBox());
			this->tbquantity = (gcnew System::Windows::Forms::TextBox());
			this->tbname = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(3, 479);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1562, 379);
			this->panel2->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowDrop = true;
			this->dataGridView1->AllowUserToOrderColumns = true;
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
			this->dataGridView1->Location = System::Drawing::Point(7, 3);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->RowHeadersWidth = 51;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(1557, 369);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &chem_form::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &chem_form::dataGridView1_CellClick);
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->AutoScroll = true;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->panel1);
			this->panel3->Location = System::Drawing::Point(3, 1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1567, 472);
			this->panel3->TabIndex = 0;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->dateTimePicker2);
			this->panel1->Controls->Add(this->dateTimePicker1);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->tbmarket);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->label26);
			this->panel1->Controls->Add(this->tbbrand);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->tbbuy);
			this->panel1->Controls->Add(this->tbsell);
			this->panel1->Controls->Add(this->tbcas);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->profitlbl);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->tbnotes);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->tbcode);
			this->panel1->Controls->Add(this->tbunit);
			this->panel1->Controls->Add(this->tbquantity);
			this->panel1->Controls->Add(this->tbname);
			this->panel1->Location = System::Drawing::Point(9, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1555, 461);
			this->panel1->TabIndex = 2;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &chem_form::panel1_Paint);
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->BackColor = System::Drawing::Color::Navy;
			this->button10->Font = (gcnew System::Drawing::Font(L"Century", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::Control;
			this->button10->Location = System::Drawing::Point(737, 328);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(142, 112);
			this->button10->TabIndex = 71;
			this->button10->Text = L"code search";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &chem_form::button10_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"Californian FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(885, 326);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(112, 112);
			this->button3->TabIndex = 70;
			this->button3->Text = L"cas search";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &chem_form::button3_Click);
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePicker2->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker2->Location = System::Drawing::Point(1233, 220);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->Size = System::Drawing::Size(200, 30);
			this->dateTimePicker2->TabIndex = 12;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dateTimePicker1->CustomFormat = L"dd/MM/yyyy";
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->dateTimePicker1->Format = System::Windows::Forms::DateTimePickerFormat::Custom;
			this->dateTimePicker1->Location = System::Drawing::Point(1233, 143);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 30);
			this->dateTimePicker1->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button1->Font = (gcnew System::Drawing::Font(L"Californian FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(614, 385);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 54);
			this->button1->TabIndex = 69;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &chem_form::button1_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button9->Font = (gcnew System::Drawing::Font(L"Californian FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(614, 329);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(117, 111);
			this->button9->TabIndex = 66;
			this->button9->Text = L"name search";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &chem_form::button9_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button8->Font = (gcnew System::Drawing::Font(L"Californian FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(326, 386);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(136, 54);
			this->button8->TabIndex = 65;
			this->button8->Text = L"refresh";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &chem_form::button8_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button6->Font = (gcnew System::Drawing::Font(L"Californian FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(468, 385);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(140, 53);
			this->button6->TabIndex = 64;
			this->button6->Text = L"clear";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &chem_form::button6_Click);
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(1208, 143);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(19, 29);
			this->label15->TabIndex = 61;
			this->label15->Text = L":";
			// 
			// label16
			// 
			this->label16->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(1063, 143);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(118, 29);
			this->label16->TabIndex = 60;
			this->label16->Text = L"Start date";
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(1208, 220);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(19, 29);
			this->label13->TabIndex = 59;
			this->label13->Text = L":";
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(1056, 220);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(133, 29);
			this->label14->TabIndex = 58;
			this->label14->Text = L"Expire date";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(1159, 60);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(19, 29);
			this->label1->TabIndex = 55;
			this->label1->Text = L":";
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(1063, 60);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(90, 29);
			this->label11->TabIndex = 54;
			this->label11->Text = L"Market";
			// 
			// tbmarket
			// 
			this->tbmarket->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbmarket->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbmarket->Location = System::Drawing::Point(1196, 60);
			this->tbmarket->Name = L"tbmarket";
			this->tbmarket->Size = System::Drawing::Size(418, 37);
			this->tbmarket->TabIndex = 9;
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(561, 131);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(19, 29);
			this->label21->TabIndex = 52;
			this->label21->Text = L":";
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(469, 131);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(77, 29);
			this->label26->TabIndex = 51;
			this->label26->Text = L"Brand";
			// 
			// tbbrand
			// 
			this->tbbrand->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbbrand->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbbrand->Location = System::Drawing::Point(592, 128);
			this->tbbrand->Name = L"tbbrand";
			this->tbbrand->Size = System::Drawing::Size(417, 37);
			this->tbbrand->TabIndex = 6;
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button7->Font = (gcnew System::Drawing::Font(L"Californian FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(182, 385);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(138, 54);
			this->button7->TabIndex = 49;
			this->button7->Text = L"update";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &chem_form::button7_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(110, 131);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(19, 29);
			this->label24->TabIndex = 48;
			this->label24->Text = L":";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(110, 196);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(19, 29);
			this->label22->TabIndex = 47;
			this->label22->Text = L":";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(561, 60);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(19, 29);
			this->label20->TabIndex = 45;
			this->label20->Text = L":";
			// 
			// label19
			// 
			this->label19->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(561, 196);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(19, 29);
			this->label19->TabIndex = 44;
			this->label19->Text = L":";
			// 
			// label18
			// 
			this->label18->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(561, 262);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(19, 29);
			this->label18->TabIndex = 43;
			this->label18->Text = L":";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(110, 60);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(19, 29);
			this->label23->TabIndex = 42;
			this->label23->Text = L":";
			// 
			// tbbuy
			// 
			this->tbbuy->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbbuy->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbbuy->Location = System::Drawing::Point(592, 188);
			this->tbbuy->Name = L"tbbuy";
			this->tbbuy->Size = System::Drawing::Size(417, 37);
			this->tbbuy->TabIndex = 7;
			this->tbbuy->TextChanged += gcnew System::EventHandler(this, &chem_form::tbbuy_TextChanged);
			// 
			// tbsell
			// 
			this->tbsell->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbsell->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbsell->Location = System::Drawing::Point(592, 257);
			this->tbsell->Name = L"tbsell";
			this->tbsell->Size = System::Drawing::Size(417, 37);
			this->tbsell->TabIndex = 8;
			this->tbsell->TextChanged += gcnew System::EventHandler(this, &chem_form::selltxt_TextChanged);
			// 
			// tbcas
			// 
			this->tbcas->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbcas->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbcas->Location = System::Drawing::Point(592, 60);
			this->tbcas->Name = L"tbcas";
			this->tbcas->Size = System::Drawing::Size(417, 37);
			this->tbcas->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(469, 262);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(52, 29);
			this->label9->TabIndex = 34;
			this->label9->Text = L"Sell";
			// 
			// profitlbl
			// 
			this->profitlbl->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->profitlbl->AutoSize = true;
			this->profitlbl->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->profitlbl->Location = System::Drawing::Point(899, 397);
			this->profitlbl->Name = L"profitlbl";
			this->profitlbl->Size = System::Drawing::Size(98, 38);
			this->profitlbl->TabIndex = 11;
			this->profitlbl->Text = L"00.00";
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(469, 196);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 29);
			this->label12->TabIndex = 33;
			this->label12->Text = L"Buy";
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button5->Font = (gcnew System::Drawing::Font(L"Californian FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(33, 386);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(143, 54);
			this->button5->TabIndex = 9;
			this->button5->Text = L"add";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &chem_form::button5_Click);
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 25.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(1227, 301);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(112, 52);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Notes";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 25.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(884, 329);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(113, 52);
			this->label8->TabIndex = 31;
			this->label8->Text = L"Profit";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(28, 131);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(67, 29);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Code";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(28, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(60, 29);
			this->label6->TabIndex = 29;
			this->label6->Text = L"Unit";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(0, 262);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(107, 29);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Quantity";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(469, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(86, 29);
			this->label4->TabIndex = 27;
			this->label4->Text = L"cas no.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(28, 60);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 29);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Name";
			// 
			// tbnotes
			// 
			this->tbnotes->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->tbnotes->BackColor = System::Drawing::SystemColors::Window;
			this->tbnotes->Font = (gcnew System::Drawing::Font(L"Arabic Typesetting", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbnotes->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tbnotes->Location = System::Drawing::Point(1149, 356);
			this->tbnotes->Multiline = true;
			this->tbnotes->Name = L"tbnotes";
			this->tbnotes->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->tbnotes->Size = System::Drawing::Size(284, 83);
			this->tbnotes->TabIndex = 10;
			this->tbnotes->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(110, 261);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(19, 29);
			this->label17->TabIndex = 23;
			this->label17->Text = L":";
			// 
			// tbcode
			// 
			this->tbcode->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbcode->Location = System::Drawing::Point(153, 123);
			this->tbcode->Name = L"tbcode";
			this->tbcode->Size = System::Drawing::Size(418, 37);
			this->tbcode->TabIndex = 2;
			// 
			// tbunit
			// 
			this->tbunit->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbunit->Location = System::Drawing::Point(153, 188);
			this->tbunit->Name = L"tbunit";
			this->tbunit->Size = System::Drawing::Size(418, 37);
			this->tbunit->TabIndex = 3;
			// 
			// tbquantity
			// 
			this->tbquantity->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbquantity->Location = System::Drawing::Point(153, 257);
			this->tbquantity->Name = L"tbquantity";
			this->tbquantity->Size = System::Drawing::Size(418, 35);
			this->tbquantity->TabIndex = 4;
			// 
			// tbname
			// 
			this->tbname->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbname->Location = System::Drawing::Point(153, 60);
			this->tbname->Name = L"tbname";
			this->tbname->Size = System::Drawing::Size(418, 37);
			this->tbname->TabIndex = 1;
			// 
			// button2
			// 
			this->button2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->button2->Font = (gcnew System::Drawing::Font(L"Arabic Typesetting", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(244, 864);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(171, 65);
			this->button2->TabIndex = 1;
			this->button2->Text = L"موردين";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &chem_form::button2_Click);
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->button4->Font = (gcnew System::Drawing::Font(L"Arabic Typesetting", 25.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(1303, 864);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(171, 65);
			this->button4->TabIndex = 1;
			this->button4->Text = L"عملاء";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &chem_form::button4_Click);
			// 
			// chem_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->ClientSize = System::Drawing::Size(1582, 953);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"chem_form";
			this->Text = L"ORCHID";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &chem_form::chem_form_Load);
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void connector() {
			sqlconn-> ConnectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=orchid;Integrated Security=True";
			sqlconn->Open();
			sqlcmd->Connection = sqlconn;
			sqlcmd->CommandText = "select * from chemicals";
			sqlrdr = sqlcmd->ExecuteReader();
			sqltable->Load(sqlrdr);
			sqlrdr->Close();
			sqlconn->Close();
			dataGridView1->DataSource = sqltable;
		}

	private: System::Void chem_form_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void selltxt_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	result = System::Convert::ToInt64(tbsell->Text) - System::Convert::ToInt64(tbbuy->Text);
	profitlbl->Text = System::Convert::ToString(result);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = tbname->Text;
	String^ unit = tbunit->Text;
	String^ code = tbcode->Text;
	String^ cas = tbcas->Text;
	String^ buy = tbbuy->Text;
	String^ sell = tbsell->Text;
	String^ quantity = tbquantity->Text;
	String^ notes = tbnotes->Text;
	String^ brand = tbbrand->Text;
	String^ market = tbmarket->Text;
	String^ start = dateTimePicker1->Text->ToString();
	String^ expire = dateTimePicker2->Text->ToString();

	if (tbname->Text == "") {
		MessageBox::Show("The name field is empty!!");
	}
	else {
		try
		{
			//String^ connString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=orchid;Integrated Security=True";
			//SqlConnection sqlConn(connString);
			//sqlConn.Open();
			
			SqlCommand^ sqlcmd = gcnew SqlCommand("INSERT INTO chemicals " + "(name, unit, code,brand,cas, quantity, buy, sell,market, start,expire,notes) VALUES" + "(@name, @unit, @code,@brand,@cas, @quantity, @buy, @sell,@market,@start,@expire,@notes);",sqlconn);
			//SqlCommand command(sqlquery, % sqlConn);
			sqlcmd->Parameters->AddWithValue("@name", name);
			sqlcmd->Parameters->AddWithValue("@unit", unit);
			sqlcmd->Parameters->AddWithValue("@code", code);
			sqlcmd->Parameters->AddWithValue("@brand", brand);
			sqlcmd->Parameters->AddWithValue("@quantity", quantity);
			sqlcmd->Parameters->AddWithValue("@cas", cas);
			sqlcmd->Parameters->AddWithValue("@buy", buy);
			sqlcmd->Parameters->AddWithValue("@sell", sell);
			sqlcmd->Parameters->AddWithValue("@market", market);
			sqlcmd->Parameters->AddWithValue("@start", start);
			sqlcmd->Parameters->AddWithValue("@expire", expire);
			sqlcmd->Parameters->AddWithValue("@notes", notes);

			sqlconn->Open();
			sqlrdr = sqlcmd->ExecuteReader();
			sqlconn->Close();
			ref();
			/*String^ sqlquery = "INSERT INTO chemicals " + "(name, unit, code, quantity, buy, sell, notes) VALUES" + "(@name, @unit, @code, @quantity, @buy, @sell,@notes);";
			//SqlCommand command(sqlquery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@unit", unit);
			command.Parameters->AddWithValue("@code", code);
			command.Parameters->AddWithValue("@quantity", quantity);
			command.Parameters->AddWithValue("@buy", buy);
			command.Parameters->AddWithValue("@sell", sell);

			command.Parameters->AddWithValue("@notes", notes);
			//command.Parameters->AddWithValue("@start date", start);
			//command.Parameters->AddWithValue("@expire date", expire);



			command.ExecuteNonQuery();
			sqlConn.Close();
			*/
		}
		catch (const std::exception&)
		{
			MessageBox::Show("Failed to connect to the database", "Database connection error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
		MessageBox::Show("Added successfully :)","", MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
	}
	
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try
	{
		tbname->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		tbunit->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		tbcode->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		tbbrand->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		tbcas->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		tbbuy->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		tbsell->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();
		tbmarket->Text = dataGridView1->SelectedRows[0]->Cells[7]->Value->ToString();
		tbquantity->Text = dataGridView1->SelectedRows[0]->Cells[8]->Value->ToString();
		tbnotes->Text = dataGridView1->SelectedRows[0]->Cells[11]->Value->ToString();
		dateTimePicker1->Text = dataGridView1->SelectedRows[0]->Cells[9]->Value->ToString();
		dateTimePicker2->Text = dataGridView1->SelectedRows[0]->Cells[10]->Value->ToString();
	
	}
	
	catch (Exception^ ex)
	{
	}


		


		
	


}
private: System::Void tbbuy_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	tbname->Text = "";
	tbunit->Text = "";
	tbcode->Text = "";
	tbbrand->Text = "";
	tbcas->Text = "";
	tbbuy->Text = "0";
	tbsell->Text = "0";
	tbmarket->Text = "0";
	tbquantity->Text = "0";
	tbnotes->Text = "";
}
 private: System::Void ref() {
		   sqlcmd->Connection = sqlconn;
		   SqlDataAdapter^ sqldta = gcnew SqlDataAdapter("select * from chemicals", sqlconn);
		   DataTable^ sqltable = gcnew DataTable();
		   sqldta->Fill(sqltable);
		   dataGridView1->DataSource = sqltable;
	   }
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	//sqlconn->ConnectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=orchid;Integrated Security=True";
	ref();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ name = tbname->Text;
		String^ code = tbcode->Text;
		
		sqlcmd->Connection = sqlconn;
		SqlCommand^ sqlcmd = gcnew SqlCommand("delete from chemicals where name ='" + name + "'and code='"+code+"'", sqlconn);
		sqlconn->Open();
		sqlrdr = sqlcmd->ExecuteReader();
		sqlconn->Close();
		MessageBox::Show("Deleted X_X","", MessageBoxButtons::OK,MessageBoxIcon::Exclamation);
		ref();
		
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
	
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ name = tbname->Text;
	String^ unit = tbunit->Text;
	String^ code = tbcode->Text;
	String^ buy = tbbuy->Text;
	String^ sell = tbsell->Text;
	String^ quantity = tbquantity->Text;
	String^ start = dateTimePicker1->Text->ToString();
	String^ expire = dateTimePicker2->Text->ToString();
	String^ notes = tbnotes->Text;

	try
	{
		

		sqlcmd->Connection = sqlconn;
		SqlCommand^ sqlcmd = gcnew SqlCommand("update chemicals set name ='" + name + "',unit='"+unit+"', sell = '" + sell +  "', buy = '" + buy + "', start = '"+start+"', expire = '"+expire+"' where code = '" + code + "'update chemicals set " + " notes = " + "(@notes) where code = '"+code+"'", sqlconn);
		sqlconn->Open();
		sqlcmd->Parameters->AddWithValue("@notes", notes);

		sqlrdr = sqlcmd->ExecuteReader();

		/*SqlCommand^ sqlcmd = gcnew SqlCommand("INSERT INTO chemicals " + "( notes) VALUES" + "(@notes);", sqlconn);
		sqlcmd->Parameters->AddWithValue("@notes", notes);
		sqlrdr = sqlcmd->ExecuteReader();
		*/
		sqlconn->Close();
		MessageBox::Show("Upadated ;-)", "", MessageBoxButtons::OK, MessageBoxIcon::Information);
		
		ref();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ name = tbname->Text;
	
		sqlcmd->Connection = sqlconn;
		
		//SqlCommand^ sqlcmd = gcnew SqlCommand("select * from chemicals where name ='" + name + "'or code ='" + code + "'or cas ='"+cas+"'", sqlconn);
		
		
		SqlDataAdapter^ sqldta = gcnew SqlDataAdapter("select * from chemicals where name LIKE '%" + name +"%'", sqlconn);
		DataTable^ sqltable = gcnew DataTable();
		sqlconn->Open();
		sqldta->Fill(sqltable);
		dataGridView1->DataSource = sqltable;
		sqlconn->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	Project1::suppliersform sf;
	sf.ShowDialog();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	Project1::customersform csf;
	csf.ShowDialog();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
	
		String^ cas = tbcas->Text;
		sqlcmd->Connection = sqlconn;

		//SqlCommand^ sqlcmd = gcnew SqlCommand("select * from chemicals where name ='" + name + "'or code ='" + code + "'or cas ='"+cas+"'", sqlconn);


		SqlDataAdapter^ sqldta = gcnew SqlDataAdapter("select * from chemicals where cas LIKE '%" + cas + "%'", sqlconn);
		DataTable^ sqltable = gcnew DataTable();
		sqlconn->Open();
		sqldta->Fill(sqltable);
		dataGridView1->DataSource = sqltable;
		sqlconn->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{

		String^ code = tbcode->Text;
		sqlcmd->Connection = sqlconn;

		//SqlCommand^ sqlcmd = gcnew SqlCommand("select * from chemicals where name ='" + name + "'or code ='" + code + "'or cas ='"+cas+"'", sqlconn);


		SqlDataAdapter^ sqldta = gcnew SqlDataAdapter("select * from chemicals where code LIKE '%" + code + "%'", sqlconn);
		DataTable^ sqltable = gcnew DataTable();
		sqlconn->Open();
		sqldta->Fill(sqltable);
		dataGridView1->DataSource = sqltable;
		sqlconn->Close();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
};
}
/*sqlconn->ConnectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=orchid;Integrated Security=True";
sqlconn->Open();
sqlcmd->Connection = sqlconn;
sqlcmd->CommandText = "select * from chemicals";
sqlrdr = sqlcmd->ExecuteReader();
sqltable->Load(sqlrdr);
sqlrdr->Close();
sqlconn->Close();
dataGridView1->DataSource = sqltable;*/