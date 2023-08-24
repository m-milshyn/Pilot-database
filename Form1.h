#pragma once
#include <fstream>
#include <vector>
#include <string>
#include "Letchik.h"
#include "Form2.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::IO;
	using namespace System::Text;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Runtime::InteropServices;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	private:
		array<Letchik^>^ letchikArray;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator3;
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saveAsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	protected:

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveAsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->toolStripSeparator3 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->fileToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(299, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(10) {
				this->openToolStripMenuItem,
					this->toolStripSeparator, this->saveToolStripMenuItem, this->saveAsToolStripMenuItem, this->toolStripSeparator2, this->toolStripMenuItem1,
					this->toolStripSeparator3, this->toolStripMenuItem2, this->toolStripSeparator1, this->exitToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"&File";
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->openToolStripMenuItem->Size = System::Drawing::Size(214, 22);
			this->openToolStripMenuItem->Text = L"&Open";
			this->openToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::openToolStripMenuItem_Click);
			// 
			// toolStripSeparator
			// 
			this->toolStripSeparator->Name = L"toolStripSeparator";
			this->toolStripSeparator->Size = System::Drawing::Size(211, 6);
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Enabled = false;
			this->saveToolStripMenuItem->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::S));
			this->saveToolStripMenuItem->Size = System::Drawing::Size(214, 22);
			this->saveToolStripMenuItem->Text = L"&Save";
			this->saveToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveToolStripMenuItem_Click);
			// 
			// saveAsToolStripMenuItem
			// 
			this->saveAsToolStripMenuItem->Enabled = false;
			this->saveAsToolStripMenuItem->Name = L"saveAsToolStripMenuItem";
			this->saveAsToolStripMenuItem->Size = System::Drawing::Size(214, 22);
			this->saveAsToolStripMenuItem->Text = L"Save &As";
			this->saveAsToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saveAsToolStripMenuItem_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(211, 6);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Enabled = false;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(214, 22);
			this->toolStripMenuItem1->Text = L"Edit selected data from file";
			this->toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem1_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(211, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(214, 22);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::exitToolStripMenuItem_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(214, 22);
			this->toolStripMenuItem2->Text = L"Info";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form1::toolStripMenuItem2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 73);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(74, 20);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Fullname";
			// 
			// comboBox1
			// 
			this->comboBox1->Enabled = false;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(166, 72);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 3;
			this->comboBox1->TextChanged += gcnew System::EventHandler(this, &Form1::comboBox1_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(166, 99);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(121, 20);
			this->textBox1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(38, 20);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Age";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 125);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(94, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Aircraft type";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 151);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(113, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Catapult count";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(12, 177);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(59, 20);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Weight";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(12, 203);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(56, 20);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Height";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(51, 24);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(200, 31);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Pilots database";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(12, 229);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(108, 20);
			this->label8->TabIndex = 11;
			this->label8->Text = L"Hair presence";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(166, 125);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(121, 20);
			this->textBox2->TabIndex = 12;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(166, 151);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(121, 20);
			this->textBox3->TabIndex = 13;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(166, 177);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(121, 20);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(166, 203);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(121, 20);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(166, 229);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(121, 20);
			this->textBox6->TabIndex = 16;
			// 
			// toolStripSeparator3
			// 
			this->toolStripSeparator3->Name = L"toolStripSeparator3";
			this->toolStripSeparator3->Size = System::Drawing::Size(211, 6);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(299, 260);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Pilots data";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		array<Char>^ delimiter = { '|' };
		array<String^>^ words;
		OpenFileDialog openFileDialog1;
		openFileDialog1.Filter = "Text files (*.txt)|*.txt|All files (*.*)|*.*";
		if (openFileDialog1.ShowDialog() != System::Windows::Forms::DialogResult::OK)
			return;
		StreamReader^ myStream = gcnew StreamReader(openFileDialog1.OpenFile());
		if (myStream == nullptr)
		{
			MessageBox::Show(L"Error open file " + openFileDialog1.OpenFile());
			return;
		}
		int NRec = 0;
		String^ input;
		while ((input = myStream->ReadLine()) != nullptr) NRec++;
		myStream->Close();
		myStream = gcnew StreamReader(openFileDialog1.OpenFile());
		letchikArray = gcnew array<Letchik^>(NRec);

		for (int i = 0; i < letchikArray->Length; i++)
		{
			letchikArray[i] = gcnew Letchik();
		}
		int i = 0;
		while ((input = myStream->ReadLine()) != nullptr)
		{
			try
			{
				words = input->Split(delimiter);
				letchikArray[i]->Age = int::Parse(words[0]);
				letchikArray[i]->FullName = words[1];
				letchikArray[i]->AircraftType = words[2];
				letchikArray[i]->Ejections = int::Parse(words[3]);
				letchikArray[i]->Weight = double::Parse(words[4]);
				letchikArray[i]->Height = double::Parse(words[5]);
				letchikArray[i]->HasHair = bool::Parse(words[6]);
				i++;
			}
			catch (System::OverflowException^ e)
			{
				System::String^ message = "The number in " + (i + 1).ToString() + " file record causes an error when trying to read";
				System::Windows::Forms::MessageBox::Show(message, "Error", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return;
			}
			catch (System::FormatException^ e)
			{
				System::String^ message = "The number in " + (i + 1).ToString() + " file record is error, review this record";
				System::Windows::Forms::MessageBox::Show(message, "Error", System::Windows::Forms::MessageBoxButtons::OK, System::Windows::Forms::MessageBoxIcon::Error);
				return;
			}
		}
		saveAsToolStripMenuItem->Enabled = true;
		saveToolStripMenuItem->Enabled = true;
		toolStripMenuItem1->Enabled = true;
		comboBox1->Enabled = true;
		PopulateComboBox(letchikArray, comboBox1);
		myStream->Close();
	}
private:
	void PopulateComboBox(array<Letchik^>^ letchikArray, System::Windows::Forms::ComboBox^ comboBox)
	{
		comboBox->Items->Clear();

		for (int i = 0; i < letchikArray->Length; i++)
		{
			Letchik^ letchik = letchikArray[i];
			comboBox->Items->Add(letchik->FullName);
		}
	}
private: System::Void saveToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ResultArray;
	StreamWriter^ writer = gcnew StreamWriter("NewPilots.txt");
	for (size_t i = 0; i < letchikArray->Length; i++)
	{
		ResultArray += letchikArray[i]->Age.ToString() + "|"
			+ letchikArray[i]->FullName + "|"
			+ letchikArray[i]->AircraftType + "|"
			+ letchikArray[i]->Ejections.ToString() + "|"
			+ letchikArray[i]->Weight.ToString() + "|"
			+ letchikArray[i]->Height.ToString() + "|"
			+ letchikArray[i]->HasHair.ToString();
		if (i < letchikArray->Length - 1)
		{
			ResultArray += "\n";
		}
	}
	writer->WriteLine(ResultArray);
	writer->Close();
	saveAsToolStripMenuItem->Enabled = false;
	saveToolStripMenuItem->Enabled = false;
	toolStripMenuItem1->Enabled = false;
	comboBox1->Enabled = false;
	letchikArray->Clear(letchikArray, 0, letchikArray->Length);
}
private: System::Void saveAsToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ ResultArray;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	saveFileDialog1->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 1;
	saveFileDialog1->RestoreDirectory = true;
	for (size_t i = 0; i < letchikArray->Length; i++)
	{
		ResultArray += letchikArray[i]->Age.ToString() + "|"
			+ letchikArray[i]->FullName + "|"
			+ letchikArray[i]->AircraftType + "|"
			+ letchikArray[i]->Ejections.ToString() + "|"
			+ letchikArray[i]->Weight.ToString() + "|"
			+ letchikArray[i]->Height.ToString() + "|"
			+ letchikArray[i]->HasHair.ToString();
		if (i < letchikArray->Length - 1)
		{
			ResultArray += "\n";
		}
	}

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		StreamWriter^ writer = gcnew StreamWriter(saveFileDialog1->OpenFile());
		writer->WriteLine(ResultArray);
		writer->Close();
	}
	saveAsToolStripMenuItem->Enabled = false;
	saveToolStripMenuItem->Enabled = false;
	toolStripMenuItem1->Enabled = false;
	comboBox1->Enabled = false;
	letchikArray->Clear(letchikArray, 0, letchikArray->Length);
}
private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
	Form2^ form2 = gcnew Form2();
	form2->SetData(letchikArray);
	form2->ShowDialog();
	letchikArray = form2->LetchikArray;
	PopulateComboBox(letchikArray, comboBox1);
}
private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	Close();
}
private: System::Void comboBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	System::Windows::Forms::ComboBox^ comboBox = safe_cast<System::Windows::Forms::ComboBox^>(sender);
	System::String^ selectedFullName = comboBox->Text;

	for (int i = 0; i < letchikArray->Length; i++)
	{
		Letchik^ letchik = letchikArray[i];
		if (letchik->FullName == selectedFullName)
		{
			textBox1->Text = letchik->Age.ToString();
			textBox2->Text = letchik->AircraftType;
			textBox3->Text = letchik->Ejections.ToString();
			textBox4->Text = letchik->Weight.ToString();
			textBox5->Text = letchik->Height.ToString();
			textBox6->Text = letchik->HasHair.ToString();
			return;
		}
	}

	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	textBox4->Text = "";
	textBox5->Text = "";
	textBox6->Text = "";
}
private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ filePath = L"Readme.rtf";
	if (File::Exists(filePath))
	{
		// Создание новой формы для отображения текста
		Form^ form = gcnew Form();
		RichTextBox^ richTextBox = gcnew RichTextBox();

		// Установка свойств RichTextBox
		richTextBox->Dock = DockStyle::Fill;
		richTextBox->ReadOnly = true;

		// Загрузка содержимого файла .rtf в RichTextBox
		richTextBox->LoadFile(filePath, RichTextBoxStreamType::RichText);

		// Добавление RichTextBox на форму
		form->Controls->Add(richTextBox);

		// Отображение формы в модальном режиме
		form->ShowDialog();
	}
	else
	{
		Console::WriteLine("Файл не существует.");
	}
}
};
}
