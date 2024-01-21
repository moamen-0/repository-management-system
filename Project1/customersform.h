#pragma once
#include <exception>
#include <cstring>
namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
    using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for customersform
	/// </summary>
	public ref class customersform : public System::Windows::Forms::Form
	{
        SqlConnection^ sqlconn2 = gcnew SqlConnection();
        SqlCommand^ sqlcmd2 = gcnew SqlCommand();
        SqlDataAdapter^ sqldta2 = gcnew SqlDataAdapter();
        DataTable^ sqltable2 = gcnew DataTable(); 
        SqlDataReader^ sqlrdr2;

    private: System::Windows::Forms::Button^ addbtn;
          
	public:
		customersform(void)
		{
           
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		 connector2();
        }

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~customersform()
		{
			if (components)
			{
				delete components;
			}
		}

    protected:

    private: System::Windows::Forms::Button^ button1;
    private: System::Windows::Forms::Button^ button9;
    private: System::Windows::Forms::Button^ button8;
    private: System::Windows::Forms::Button^ button6;







    private: System::Windows::Forms::Label^ label21;
    private: System::Windows::Forms::Label^ label26;
    private: System::Windows::Forms::TextBox^ tbaddress;

    private: System::Windows::Forms::Button^ button7;
    private: System::Windows::Forms::Label^ label24;
    private: System::Windows::Forms::Label^ label20;
    private: System::Windows::Forms::Label^ label22;

    private: System::Windows::Forms::Panel^ panel2;
    public: System::Windows::Forms::DataGridView^ dataGridView3;
    private:

    private:
    private: System::Windows::Forms::Panel^ panel1;
    public:

    private: System::Windows::Forms::Label^ label23;
    private: System::Windows::Forms::TextBox^ tbphone;







    private: System::Windows::Forms::Label^ label10;

    private: System::Windows::Forms::Label^ label7;
    private: System::Windows::Forms::Label^ label6;
    private: System::Windows::Forms::Label^ label5;
    private: System::Windows::Forms::Label^ label4;
    private: System::Windows::Forms::Label^ label3;
    private: System::Windows::Forms::TextBox^ tbcnotes;

    private: System::Windows::Forms::Label^ label17;
    private: System::Windows::Forms::TextBox^ tbcompany;
    private: System::Windows::Forms::TextBox^ tbagent;
    private: System::Windows::Forms::TextBox^ tbtax;



    private: System::Windows::Forms::TextBox^ tbcname;

    private: System::Windows::Forms::Panel^ panel3;

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
        /// 
		void InitializeComponent(void)
		{
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->button9 = (gcnew System::Windows::Forms::Button());
            this->button8 = (gcnew System::Windows::Forms::Button());
            this->button6 = (gcnew System::Windows::Forms::Button());
            this->label21 = (gcnew System::Windows::Forms::Label());
            this->label26 = (gcnew System::Windows::Forms::Label());
            this->tbaddress = (gcnew System::Windows::Forms::TextBox());
            this->button7 = (gcnew System::Windows::Forms::Button());
            this->label24 = (gcnew System::Windows::Forms::Label());
            this->label20 = (gcnew System::Windows::Forms::Label());
            this->label22 = (gcnew System::Windows::Forms::Label());
            this->panel2 = (gcnew System::Windows::Forms::Panel());
            this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
            this->panel1 = (gcnew System::Windows::Forms::Panel());
            this->addbtn = (gcnew System::Windows::Forms::Button());
            this->label23 = (gcnew System::Windows::Forms::Label());
            this->tbphone = (gcnew System::Windows::Forms::TextBox());
            this->label10 = (gcnew System::Windows::Forms::Label());
            this->label7 = (gcnew System::Windows::Forms::Label());
            this->label6 = (gcnew System::Windows::Forms::Label());
            this->label5 = (gcnew System::Windows::Forms::Label());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->tbcnotes = (gcnew System::Windows::Forms::TextBox());
            this->label17 = (gcnew System::Windows::Forms::Label());
            this->tbcompany = (gcnew System::Windows::Forms::TextBox());
            this->tbagent = (gcnew System::Windows::Forms::TextBox());
            this->tbtax = (gcnew System::Windows::Forms::TextBox());
            this->tbcname = (gcnew System::Windows::Forms::TextBox());
            this->panel3 = (gcnew System::Windows::Forms::Panel());
            this->panel2->SuspendLayout();
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
            this->panel1->SuspendLayout();
            this->panel3->SuspendLayout();
            this->SuspendLayout();
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
            this->button1->Click += gcnew System::EventHandler(this, &customersform::button1_Click);
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
            this->button9->Click += gcnew System::EventHandler(this, &customersform::button9_Click);
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
            this->button8->Click += gcnew System::EventHandler(this, &customersform::button8_Click);
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
            this->button6->Click += gcnew System::EventHandler(this, &customersform::button6_Click);
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
            // tbaddress
            // 
            this->tbaddress->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->tbaddress->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbaddress->Location = System::Drawing::Point(1007, 123);
            this->tbaddress->Name = L"tbaddress";
            this->tbaddress->Size = System::Drawing::Size(417, 37);
            this->tbaddress->TabIndex = 6;
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
            this->button7->Click += gcnew System::EventHandler(this, &customersform::button7_Click);
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
            // panel2
            // 
            this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
            this->panel2->Controls->Add(this->dataGridView3);
            this->panel2->Location = System::Drawing::Point(8, 490);
            this->panel2->Name = L"panel2";
            this->panel2->Size = System::Drawing::Size(1562, 451);
            this->panel2->TabIndex = 2;
            // 
            // dataGridView3
            // 
            this->dataGridView3->AllowDrop = true;
            this->dataGridView3->AllowUserToOrderColumns = true;
            this->dataGridView3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            this->dataGridView3->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
            dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
            dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView3->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
            this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView3->EditMode = System::Windows::Forms::DataGridViewEditMode::EditOnEnter;
            this->dataGridView3->Location = System::Drawing::Point(7, 3);
            this->dataGridView3->Name = L"dataGridView3";
            dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
            dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
            dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular,
                System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
            dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
            dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
            dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
            dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
            this->dataGridView3->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
            this->dataGridView3->RowHeadersWidth = 51;
            dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->dataGridView3->RowsDefaultCellStyle = dataGridViewCellStyle3;
            this->dataGridView3->RowTemplate->Height = 24;
            this->dataGridView3->Size = System::Drawing::Size(1557, 441);
            this->dataGridView3->TabIndex = 1;
            this->dataGridView3->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &customersform::dataGridView3_CellClick);
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
            this->panel1->Controls->Add(this->tbaddress);
            this->panel1->Controls->Add(this->button7);
            this->panel1->Controls->Add(this->label24);
            this->panel1->Controls->Add(this->label22);
            this->panel1->Controls->Add(this->label20);
            this->panel1->Controls->Add(this->label23);
            this->panel1->Controls->Add(this->tbphone);
            this->panel1->Controls->Add(this->label10);
            this->panel1->Controls->Add(this->label7);
            this->panel1->Controls->Add(this->label6);
            this->panel1->Controls->Add(this->label5);
            this->panel1->Controls->Add(this->label4);
            this->panel1->Controls->Add(this->label3);
            this->panel1->Controls->Add(this->tbcnotes);
            this->panel1->Controls->Add(this->label17);
            this->panel1->Controls->Add(this->tbcompany);
            this->panel1->Controls->Add(this->tbagent);
            this->panel1->Controls->Add(this->tbtax);
            this->panel1->Controls->Add(this->tbcname);
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
            this->addbtn->Click += gcnew System::EventHandler(this, &customersform::addbtn_Click);
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
            // tbphone
            // 
            this->tbphone->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->tbphone->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbphone->Location = System::Drawing::Point(1007, 37);
            this->tbphone->Name = L"tbphone";
            this->tbphone->Size = System::Drawing::Size(417, 37);
            this->tbphone->TabIndex = 5;
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
            // tbcnotes
            // 
            this->tbcnotes->Anchor = System::Windows::Forms::AnchorStyles::Right;
            this->tbcnotes->BackColor = System::Drawing::SystemColors::Window;
            this->tbcnotes->Font = (gcnew System::Drawing::Font(L"Arabic Typesetting", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbcnotes->ImeMode = System::Windows::Forms::ImeMode::NoControl;
            this->tbcnotes->Location = System::Drawing::Point(1007, 223);
            this->tbcnotes->Multiline = true;
            this->tbcnotes->Name = L"tbcnotes";
            this->tbcnotes->ScrollBars = System::Windows::Forms::ScrollBars::Both;
            this->tbcnotes->Size = System::Drawing::Size(417, 134);
            this->tbcnotes->TabIndex = 10;
            this->tbcnotes->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
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
            // tbcompany
            // 
            this->tbcompany->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbcompany->Location = System::Drawing::Point(248, 128);
            this->tbcompany->Name = L"tbcompany";
            this->tbcompany->Size = System::Drawing::Size(418, 37);
            this->tbcompany->TabIndex = 2;
            // 
            // tbagent
            // 
            this->tbagent->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbagent->Location = System::Drawing::Point(248, 215);
            this->tbagent->Name = L"tbagent";
            this->tbagent->Size = System::Drawing::Size(418, 37);
            this->tbagent->TabIndex = 3;
            // 
            // tbtax
            // 
            this->tbtax->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbtax->Location = System::Drawing::Point(248, 288);
            this->tbtax->Name = L"tbtax";
            this->tbtax->Size = System::Drawing::Size(418, 35);
            this->tbtax->TabIndex = 4;
            // 
            // tbcname
            // 
            this->tbcname->Font = (gcnew System::Drawing::Font(L"Microsoft Tai Le", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
                static_cast<System::Byte>(0)));
            this->tbcname->Location = System::Drawing::Point(248, 42);
            this->tbcname->Name = L"tbcname";
            this->tbcname->Size = System::Drawing::Size(418, 37);
            this->tbcname->TabIndex = 1;
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
            this->panel3->TabIndex = 3;
            // 
            // customersform
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(1582, 953);
            this->Controls->Add(this->panel2);
            this->Controls->Add(this->panel3);
            this->MinimumSize = System::Drawing::Size(800, 600);
            this->Name = L"customersform";
            this->Text = L"customersform";
            this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
            this->panel2->ResumeLayout(false);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
            this->panel1->ResumeLayout(false);
            this->panel1->PerformLayout();
            this->panel3->ResumeLayout(false);
            this->ResumeLayout(false);

        }
#pragma endregion
        private: System::Void connector2() {
            sqlconn2->ConnectionString = "Data Source=localhost\\SQLEXPRESS;Initial Catalog=orchid;Integrated Security=True";
            sqlconn2->Open();
            sqlcmd2->Connection = sqlconn2;
            sqlcmd2->CommandText = "select * from customers";
            sqlrdr2 = sqlcmd2->ExecuteReader();
            sqltable2->Load(sqlrdr2);
            sqlrdr2->Close();
            sqlconn2->Close();
            dataGridView3->DataSource = sqltable2;
        }
   
        
 
private: System::Void addbtn_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ name2 = tbcname->Text;
    String^ company = tbcompany->Text;
    String^ address = tbaddress->Text;
    String^ phone = tbphone->Text;
    String^ tax = tbtax->Text;
    String^ agent = tbagent->Text;
    String^ notes2 = tbcnotes->Text;
    String^ status="";
    
    if (checkBox1->Checked) {  status = u8"محترم"; }
    if (tbcname->Text == "") {
        MessageBox::Show("The name field is empty!!");
    }
    else {
        try
        { 
           
            SqlCommand^ sqlcmd2 = gcnew SqlCommand("INSERT INTO customers " + "(name, company,address, phone,\"tax number\", agent, notes,status) VALUES " + "(@name, @company, @address, @phone, @tax, @agent, @notes,@status); ", sqlconn2);

            sqlcmd2->Parameters->AddWithValue("@name", name2);
            sqlcmd2->Parameters->AddWithValue("@company", company);
            sqlcmd2->Parameters->AddWithValue("@address", address);
            sqlcmd2->Parameters->AddWithValue("@phone", phone);
            sqlcmd2->Parameters->AddWithValue("@tax", tax);
            sqlcmd2->Parameters->AddWithValue("@agent", agent);
            sqlcmd2->Parameters->AddWithValue("@notes", notes2);
            sqlcmd2->Parameters->AddWithValue("@status",status);


            sqlconn2->Open();
            sqlrdr2 = sqlcmd2->ExecuteReader();
            sqlconn2->Close(); 
            MessageBox::Show("Added successfully :)", "", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
            ref2();
        }
        catch (Exception^ ex)
        {
            MessageBox::Show(ex->Message);
        }
       

    }
}



private: System::Void ref2() {
            sqlcmd2->Connection = sqlconn2;
            SqlDataAdapter^ sqldta2 = gcnew SqlDataAdapter("select * from customers", sqlconn2);
            DataTable^ sqltable2 = gcnew DataTable();
            sqldta2->Fill(sqltable2);
            dataGridView3->DataSource = sqltable2;
        }


private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
    try
    {
        String^ name2 = tbcname->Text;
      

        sqlcmd2->Connection = sqlconn2;
        SqlCommand^ sqlcmd = gcnew SqlCommand("delete from customers where name ='" + name2 +  "'", sqlconn2);
        sqlconn2->Open();
        sqlrdr2 = sqlcmd->ExecuteReader();
        sqlconn2->Close();
        MessageBox::Show("Deleted X_X", "", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
        ref2();

    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }

}
private: System::Void dataGridView3_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
    try
    {
        tbcname->Text = dataGridView3->SelectedRows[0]->Cells[0]->Value->ToString();
        tbcompany->Text = dataGridView3->SelectedRows[0]->Cells[1]->Value->ToString();
        tbphone->Text = dataGridView3->SelectedRows[0]->Cells[2]->Value->ToString();
        tbaddress->Text = dataGridView3->SelectedRows[0]->Cells[3]->Value->ToString();
        tbagent->Text = dataGridView3->SelectedRows[0]->Cells[4]->Value->ToString();
        tbtax->Text = dataGridView3->SelectedRows[0]->Cells[5]->Value->ToString();
        tbcnotes->Text = dataGridView3->SelectedRows[0]->Cells[6]->Value->ToString();
        
       
  }

    catch (Exception^ ex)
    {
    }
}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
    String^ name2 = tbcname->Text;
    String^ company = tbcompany->Text;
    String^ address = tbaddress->Text;
    String^ phone = tbphone->Text;
    String^ tax = tbtax->Text;
    String^ agent = tbagent->Text;
    String^ notes2 = tbcnotes->Text;
    String^ status = "";
    if (checkBox1->Checked) { status = u8"محترم"; }

    try
    {


        sqlcmd2->Connection = sqlconn2;
        SqlCommand^ sqlcmd2 = gcnew SqlCommand("update customers set phone ='" + phone + "',company='"+company+"',address='"+address+"',\"tax number\"='"+tax+"',agent='"+agent+"',notes=@notes2,status=@status where name = '" + name2 + "'", sqlconn2);
        //sqlcmd->Parameters->AddWithValue("@notes", notes);
        sqlcmd2->Parameters->AddWithValue("@status", status);   
        sqlcmd2->Parameters->AddWithValue("@notes2", notes2);
        sqlconn2->Open();

        sqlrdr2 = sqlcmd2->ExecuteReader();

        /*SqlCommand^ sqlcmd = gcnew SqlCommand("INSERT INTO chemicals " + "( notes) VALUES" + "(@notes);", sqlconn);
        sqlcmd->Parameters->AddWithValue("@notes", notes);
        sqlrdr = sqlcmd->ExecuteReader();
        */
        sqlconn2->Close();
        MessageBox::Show("Upadated ;-)", "", MessageBoxButtons::OK, MessageBoxIcon::Information);

        ref2();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
    ref2();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
    tbcname->Text="";
    tbcompany->Text="";
    tbaddress->Text="";
    tbphone->Text="";
    tbtax->Text="";
    tbagent->Text="";
    tbcnotes->Text="";

}
/*private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
   
    try
    {
        sqlconn2->Open();
        SqlCommand^ sqlcmd2 = gcnew SqlCommand("update customers set status = '" + "محترم" + "' where name = '" + tbcname->Text + "'", sqlconn2);

        
        sqlrdr2 = sqlcmd2->ExecuteReader();
        sqlconn2->Close();
      
        ref2();
    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }

}*/
private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
    try
    {
        String^ name = tbcname->Text;        
        sqlcmd2->Connection = sqlconn2;
        //SqlCommand^ sqlcmd = gcnew SqlCommand("select * from chemicals where name ='" + name + "'or code ='" + code + "'or cas ='"+cas+"'", sqlconn);

        SqlDataAdapter^ sqldta2 = gcnew SqlDataAdapter("select * from customers where name LIKE '%" + name + "%'", sqlconn2);
        DataTable^ sqltable2 = gcnew DataTable();
        sqlconn2->Open();

        sqldta2->Fill(sqltable2);
        
        dataGridView3->DataSource = sqltable2;
        sqlconn2->Close();


    }
    catch (Exception^ ex)
    {
        MessageBox::Show(ex->Message);
    }
}
};
}

