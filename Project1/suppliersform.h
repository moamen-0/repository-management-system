#pragma once
#include <exception>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;
	/// <summary>
	/// Summary for suppliersform
	/// </summary>
	public ref class suppliersform : public System::Windows::Forms::Form
	{
		SqlConnection^ sqlconn3 = gcnew SqlConnection();
		SqlCommand^ sqlcmd3 = gcnew SqlCommand();
		SqlDataAdapter^ sqldta3 = gcnew SqlDataAdapter();
		DataTable^ sqltable3 = gcnew DataTable();
		SqlDataReader^ sqlrdr3;
	public:
		suppliersform(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			connector3();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~suppliersform()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel3;
	protected:
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ addbtn;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ tbsaddress;

	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::TextBox^ tbsphone;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbsnotes;

	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ tbscompany;
	private: System::Windows::Forms::TextBox^ tbsagent;
	private: System::Windows::Forms::TextBox^ tbstax;



	private: System::Windows::Forms::TextBox^ tbsname;

	public: System::Windows::Forms::DataGridView^ dataGridView1;
	private:
	private: System::Windows::Forms::Panel^ panel2;
	public:

	protected:




























	private:

	public:

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
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->addbtn = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->tbsaddress = (gcnew System::Windows::Forms::TextBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->tbsphone = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbsnotes = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->tbscompany = (gcnew System::Windows::Forms::TextBox());
			this->tbsagent = (gcnew System::Windows::Forms::TextBox());
			this->tbstax = (gcnew System::Windows::Forms::TextBox());
			this->tbsname = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel3
			// 
			this->panel3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel3->AutoScroll = true;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3->Controls->Add(this->panel1);
			this->panel3->Location = System::Drawing::Point(8, 12);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1567, 472);
			this->panel3->TabIndex = 5;
			// 
			// panel1
			// 
			this->panel1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel1->Controls->Add(this->addbtn);
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button9);
			this->panel1->Controls->Add(this->button8);
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->label21);
			this->panel1->Controls->Add(this->label26);
			this->panel1->Controls->Add(this->tbsaddress);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->label24);
			this->panel1->Controls->Add(this->label22);
			this->panel1->Controls->Add(this->label20);
			this->panel1->Controls->Add(this->label23);
			this->panel1->Controls->Add(this->tbsphone);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->tbsnotes);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->tbscompany);
			this->panel1->Controls->Add(this->tbsagent);
			this->panel1->Controls->Add(this->tbstax);
			this->panel1->Controls->Add(this->tbsname);
			this->panel1->Location = System::Drawing::Point(9, 3);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1555, 461);
			this->panel1->TabIndex = 2;
			// 
			// addbtn
			// 
			this->addbtn->Font = (gcnew System::Drawing::Font(L"Californian FB", 18));
			this->addbtn->Location = System::Drawing::Point(76, 395);
			this->addbtn->Name = L"addbtn";
			this->addbtn->Size = System::Drawing::Size(147, 45);
			this->addbtn->TabIndex = 70;
			this->addbtn->Text = L"Add";
			this->addbtn->UseVisualStyleBackColor = true;
			this->addbtn->Click += gcnew System::EventHandler(this, &suppliersform::addbtn_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button1->Font = (gcnew System::Drawing::Font(L"Californian FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(1316, 386);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 54);
			this->button1->TabIndex = 69;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &suppliersform::button1_Click);
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button9->Font = (gcnew System::Drawing::Font(L"Californian FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->Location = System::Drawing::Point(275, 386);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(139, 54);
			this->button9->TabIndex = 66;
			this->button9->Text = L"search";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &suppliersform::button9_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button8->Font = (gcnew System::Drawing::Font(L"Californian FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(744, 387);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(136, 54);
			this->button8->TabIndex = 65;
			this->button8->Text = L"refresh";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &suppliersform::button8_Click);
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button6->Font = (gcnew System::Drawing::Font(L"Californian FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1028, 387);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(140, 53);
			this->button6->TabIndex = 64;
			this->button6->Text = L"clear";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &suppliersform::button6_Click);
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(892, 131);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(19, 29);
			this->label21->TabIndex = 52;
			this->label21->Text = L":";
			// 
			// label26
			// 
			this->label26->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(739, 131);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(94, 29);
			this->label26->TabIndex = 51;
			this->label26->Text = L"address";
			// 
			// tbsaddress
			// 
			this->tbsaddress->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->tbsaddress->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbsaddress->Location = System::Drawing::Point(1007, 123);
			this->tbsaddress->Name = L"tbsaddress";
			this->tbsaddress->Size = System::Drawing::Size(417, 37);
			this->tbsaddress->TabIndex = 6;
			// 
			// button7
			// 
			this->button7->Anchor = System::Windows::Forms::AnchorStyles::Left;
			this->button7->Font = (gcnew System::Drawing::Font(L"Californian FB", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(495, 387);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(138, 54);
			this->button7->TabIndex = 49;
			this->button7->Text = L"update";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &suppliersform::button7_Click);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(181, 136);
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
			this->label22->Location = System::Drawing::Point(181, 223);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(19, 29);
			this->label22->TabIndex = 47;
			this->label22->Text = L":";
			// 
			// label20
			// 
			this->label20->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(892, 45);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(19, 29);
			this->label20->TabIndex = 45;
			this->label20->Text = L":";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(181, 45);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(19, 29);
			this->label23->TabIndex = 42;
			this->label23->Text = L":";
			// 
			// tbsphone
			// 
			this->tbsphone->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->tbsphone->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbsphone->Location = System::Drawing::Point(1007, 37);
			this->tbsphone->Name = L"tbsphone";
			this->tbsphone->Size = System::Drawing::Size(417, 37);
			this->tbsphone->TabIndex = 5;
			// 
			// label10
			// 
			this->label10->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Monotype Corsiva", 25.8F, System::Drawing::FontStyle::Italic, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(1164, 168);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(112, 52);
			this->label10->TabIndex = 32;
			this->label10->Text = L"Notes";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(61, 131);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(114, 29);
			this->label7->TabIndex = 30;
			this->label7->Text = L"Company";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(85, 223);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(74, 29);
			this->label6->TabIndex = 29;
			this->label6->Text = L"agent";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(70, 293);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(91, 29);
			this->label5->TabIndex = 28;
			this->label5->Text = L"Tax no.";
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(739, 45);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(121, 29);
			this->label4->TabIndex = 27;
			this->label4->Text = L"phone no.";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(85, 45);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(76, 29);
			this->label3->TabIndex = 26;
			this->label3->Text = L"Name";
			// 
			// tbsnotes
			// 
			this->tbsnotes->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->tbsnotes->BackColor = System::Drawing::SystemColors::Window;
			this->tbsnotes->Font = (gcnew System::Drawing::Font(L"Arabic Typesetting", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbsnotes->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->tbsnotes->Location = System::Drawing::Point(1007, 223);
			this->tbsnotes->Multiline = true;
			this->tbsnotes->Name = L"tbsnotes";
			this->tbsnotes->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->tbsnotes->Size = System::Drawing::Size(417, 134);
			this->tbsnotes->TabIndex = 10;
			this->tbsnotes->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(181, 295);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(19, 29);
			this->label17->TabIndex = 23;
			this->label17->Text = L":";
			// 
			// tbscompany
			// 
			this->tbscompany->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbscompany->Location = System::Drawing::Point(248, 128);
			this->tbscompany->Name = L"tbscompany";
			this->tbscompany->Size = System::Drawing::Size(418, 37);
			this->tbscompany->TabIndex = 2;
			// 
			// tbsagent
			// 
			this->tbsagent->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbsagent->Location = System::Drawing::Point(248, 215);
			this->tbsagent->Name = L"tbsagent";
			this->tbsagent->Size = System::Drawing::Size(418, 37);
			this->tbsagent->TabIndex = 3;
			// 
			// tbstax
			// 
			this->tbstax->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbstax->Location = System::Drawing::Point(248, 288);
			this->tbstax->Name = L"tbstax";
			this->tbstax->Size = System::Drawing::Size(418, 35);
			this->tbstax->TabIndex = 4;
			// 
			// tbsname
			// 
			this->tbsname->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbsname->Location = System::Drawing::Point(248, 42);
			this->tbsname->Name = L"tbsname";
			this->tbsname->Size = System::Drawing::Size(418, 37);
			this->tbsname->TabIndex = 1;
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
			this->dataGridView1->Size = System::Drawing::Size(1557, 441);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &suppliersform::dataGridView1_CellClick);
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2->Controls->Add(this->dataGridView1);
			this->panel2->Location = System::Drawing::Point(8, 490);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1562, 451);
			this->panel2->TabIndex = 4;
			// 
			// suppliersform
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1582, 953);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->MinimumSize = System::Drawing::Size(800, 600);
			this->Name = L"suppliersform";
			this->Text = L"suppliersform";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel3->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

private: System::Void connector3() {
			 sqlconn3->ConnectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=orchid;Integrated Security=True";
			 sqlconn3->Open();
			 sqlcmd3->Connection = sqlconn3;
			 sqlcmd3->CommandText = "select * from suppliers";
			 sqlrdr3 = sqlcmd3->ExecuteReader();
			 sqltable3->Load(sqlrdr3);
			 sqlrdr3->Close();
			 sqlconn3->Close();
			 dataGridView1->DataSource = sqltable3;
		 }


private: System::Void ref3() {
	sqlcmd3->Connection = sqlconn3;

	SqlDataAdapter^ sqldta3 = gcnew SqlDataAdapter("select * from suppliers", sqlconn3);
	DataTable^ sqltable3 = gcnew DataTable();
	sqldta3->Fill(sqltable3);
	dataGridView1->DataSource = sqltable3;
}











	private: System::Void addbtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name2 = tbsname->Text;
		String^ company = tbscompany->Text;
		String^ address = tbsaddress->Text;
		String^ phone = tbsphone->Text;
		String^ tax = tbstax->Text;
		String^ agent = tbsagent->Text;
		String^ notes2 = tbsnotes->Text;
		if (tbsname->Text == "") {
			MessageBox::Show("The name field is empty!!");
		}
		else {
			try
			{
				sqlconn3->Open();
				SqlCommand^ sqlcmd3 = gcnew SqlCommand("INSERT INTO suppliers " + "(name, company,address, phone,\"tax number\", agent, notes) VALUES " + "(@name, @company, @address, @phone, @tax, @agent, @notes); ", sqlconn3);

				sqlcmd3->Parameters->AddWithValue("@name", name2);
				sqlcmd3->Parameters->AddWithValue("@company", company);
				sqlcmd3->Parameters->AddWithValue("@address", address);
				sqlcmd3->Parameters->AddWithValue("@phone", phone);
				sqlcmd3->Parameters->AddWithValue("@tax", tax);
				sqlcmd3->Parameters->AddWithValue("@agent", agent);
				sqlcmd3->Parameters->AddWithValue("@notes", notes2);


				sqlrdr3 = sqlcmd3->ExecuteReader();
				sqlconn3->Close();
				MessageBox::Show("Added successfully :)", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
				ref3();
			}
			catch (Exception^ ex)
			{
				MessageBox::Show(ex->Message);
			}


		}
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ name2 = tbsname->Text;


		sqlcmd3->Connection = sqlconn3;
		SqlCommand^ sqlcmd = gcnew SqlCommand("delete from suppliers where name ='" + name2 + "'", sqlconn3);
		sqlconn3->Open();
		sqlrdr3 = sqlcmd->ExecuteReader();
		sqlconn3->Close();
		MessageBox::Show("Deleted X_X", "", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		ref3();

	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {

	String^ name2 = tbsname->Text;
	String^ company = tbscompany->Text;
	String^ address = tbsaddress->Text;
	String^ phone = tbsphone->Text;
	String^ tax = tbstax->Text;
	String^ agent = tbsagent->Text;
	String^ notes2 = tbsnotes->Text;

	try
	{


		sqlcmd3->Connection = sqlconn3;
		SqlCommand^ sqlcmd3 = gcnew SqlCommand("update suppliers set phone ='" + phone + "',company ='"+company+"',address='"+address+"',\"tax number\"='"+tax+"',agent='"+agent+"',notes=@notes2 where name = '" +name2 + "'", sqlconn3);
		sqlconn3->Open();
		sqlcmd3->Parameters->AddWithValue("@notes2", notes2);

		sqlrdr3 = sqlcmd3->ExecuteReader();

		/*SqlCommand^ sqlcmd = gcnew SqlCommand("INSERT INTO chemicals " + "( notes) VALUES" + "(@notes);", sqlconn);
		sqlcmd->Parameters->AddWithValue("@notes", notes);
		sqlrdr = sqlcmd->ExecuteReader();
		*/
		sqlconn3->Close();
		MessageBox::Show("Upadated ;-)", "", MessageBoxButtons::OK, MessageBoxIcon::Information);

		ref3();
	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}

}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	ref3();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	tbsname->Text = "";
	tbscompany->Text = "";
	tbsaddress->Text = "";
	tbsphone->Text = "";
	tbstax->Text = "";
	tbsagent->Text = "";
	tbsnotes->Text = "";
}
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	try
	{
		String^ name = tbsname->Text;
		sqlcmd3->Connection = sqlconn3;
		//SqlCommand^ sqlcmd = gcnew SqlCommand("select * from chemicals where name ='" + name + "'or code ='" + code + "'or cas ='"+cas+"'", sqlconn);

		SqlDataAdapter^ sqldta3 = gcnew SqlDataAdapter("select * from suppliers where name LIKE '%" + name + "%'", sqlconn3);
		DataTable^ sqltable3 = gcnew DataTable();
		sqlconn3->Open();

		sqldta3->Fill(sqltable3);

		dataGridView1->DataSource = sqltable3;
		sqlconn3->Close();


	}
	catch (Exception^ ex)
	{
		MessageBox::Show(ex->Message);
	}
}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	try
	{
		tbsname->Text = dataGridView1->SelectedRows[0]->Cells[0]->Value->ToString();
		tbscompany->Text = dataGridView1->SelectedRows[0]->Cells[1]->Value->ToString();
		tbsphone->Text = dataGridView1->SelectedRows[0]->Cells[2]->Value->ToString();
		tbsaddress->Text = dataGridView1->SelectedRows[0]->Cells[3]->Value->ToString();
		tbsagent->Text = dataGridView1->SelectedRows[0]->Cells[4]->Value->ToString();
		tbstax->Text = dataGridView1->SelectedRows[0]->Cells[5]->Value->ToString();
		tbsnotes->Text = dataGridView1->SelectedRows[0]->Cells[6]->Value->ToString();


	}

	catch (Exception^ ex)
	{
	}
}
};
}
