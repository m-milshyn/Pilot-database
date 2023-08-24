#pragma once
#include "Form1.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	private:
		array<Letchik^>^ letchikArray;
	public:
		property array<Letchik^>^ LetchikArray {
			array<Letchik^>^ get() {
				return letchikArray;
			}
		}
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripTextBox^ toolStripTextBox2;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->toolStripTextBox1 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripTextBox2 = (gcnew System::Windows::Forms::ToolStripTextBox());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->toolStripTextBox1,
					this->toolStripMenuItem1, this->toolStripTextBox2, this->toolStripMenuItem2
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(656, 27);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridView1->CellValidating += gcnew System::Windows::Forms::DataGridViewCellValidatingEventHandler(this, &Form2::dataGridView1_CellValidating);
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->Location = System::Drawing::Point(0, 27);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(656, 343);
			this->dataGridView1->TabIndex = 1;
			// 
			// toolStripTextBox1
			// 
			this->toolStripTextBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox1->Name = L"toolStripTextBox1";
			this->toolStripTextBox1->Size = System::Drawing::Size(100, 23);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(41, 23);
			this->toolStripMenuItem1->Text = L"Add";
			toolStripMenuItem1->Click += gcnew System::EventHandler(this, &Form2::toolStripMenuItem1_Click);

			// 
			// toolStripTextBox2
			// 
			this->toolStripTextBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->toolStripTextBox2->Name = L"toolStripTextBox2";
			this->toolStripTextBox2->Size = System::Drawing::Size(100, 23);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(54, 23);
			this->toolStripMenuItem2->Text = L"Search";
			toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Form2::toolStripMenuItem2_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(656, 370);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form2";
			this->Text = L"Edit Form";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form2::Form2_FormClosing);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public:
		void SetData(array<Letchik^>^ letchikArray)
		{
			dataGridView1->Columns->Clear();
			dataGridView1->Rows->Clear();

			dataGridView1->Columns->Add("Age", "Age");
			dataGridView1->Columns->Add("FullName", "Full Name");
			dataGridView1->Columns->Add("AircraftType", "Aircraft Type");
			dataGridView1->Columns->Add("Ejections", "Ejections");
			dataGridView1->Columns->Add("Weight", "Weight");
			dataGridView1->Columns->Add("Height", "Height");
			dataGridView1->Columns->Add("Hair presence", "Hair presence");

			for (int i = 0; i < letchikArray->Length; i++)
			{
				Letchik^ letchik = letchikArray[i];
				DataGridViewRow^ row = gcnew DataGridViewRow();

				DataGridViewCell^ ageCell = gcnew DataGridViewTextBoxCell();
				ageCell->Value = letchik->Age;
				row->Cells->Add(ageCell);

				DataGridViewCell^ fullNameCell = gcnew DataGridViewTextBoxCell();
				fullNameCell->Value = letchik->FullName;
				row->Cells->Add(fullNameCell);

				DataGridViewCell^ aircraftTypeCell = gcnew DataGridViewTextBoxCell();
				aircraftTypeCell->Value = letchik->AircraftType;
				row->Cells->Add(aircraftTypeCell);

				DataGridViewCell^ ejectionsCell = gcnew DataGridViewTextBoxCell();
				ejectionsCell->Value = letchik->Ejections;
				row->Cells->Add(ejectionsCell);

				DataGridViewCell^ weightCell = gcnew DataGridViewTextBoxCell();
				weightCell->Value = letchik->Weight;
				row->Cells->Add(weightCell);

				DataGridViewCell^ heightCell = gcnew DataGridViewTextBoxCell();
				heightCell->Value = letchik->Height;
				row->Cells->Add(heightCell);

				DataGridViewCell^ hasHairCell = gcnew DataGridViewTextBoxCell();
				hasHairCell->Value = letchik->HasHair;
				row->Cells->Add(hasHairCell);

				dataGridView1->Rows->Add(row);
			}
		}

		void SaveChanges()
		{
			array<Letchik^>^ updatedList = gcnew array<Letchik^>(dataGridView1->Rows->Count - 1);
			for (int i = 0; i < updatedList->Length; i++)
			{
				updatedList[i] = gcnew Letchik();
			}
			for (int i = 0; i < dataGridView1->Rows->Count - 1; i++)
			{
				DataGridViewRow^ row = dataGridView1->Rows[i];

				if (row->Cells[0]->Value == nullptr || row->Cells[1]->Value == nullptr ||
					row->Cells[2]->Value == nullptr || row->Cells[3]->Value == nullptr ||
					row->Cells[4]->Value == nullptr || row->Cells[5]->Value == nullptr ||
					row->Cells[6]->Value == nullptr)
				{
					MessageBox::Show("Empty cell found. Please fill in all the values.");
					return;
				}

				int age;
				double weight, height;
				bool hasHair;

				try
				{
					age = Convert::ToInt32(row->Cells[0]->Value);
					weight = Convert::ToDouble(row->Cells[4]->Value);
					height = Convert::ToDouble(row->Cells[5]->Value);
					hasHair = Convert::ToBoolean(row->Cells[6]->Value);
				}
				catch (FormatException^)
				{
					MessageBox::Show("Invalid format entered in the cell. Row: " + (i + 1));
					return;
				}
				catch (OverflowException^)
				{
					MessageBox::Show("Value exceeds the allowed range. Row: " + (i + 1));
					return;
				}
				updatedList[i]->Age = age;
				updatedList[i]->FullName = row->Cells[1]->Value->ToString();
				updatedList[i]->AircraftType = row->Cells[2]->Value->ToString();
				updatedList[i]->Ejections = Convert::ToInt32(row->Cells[3]->Value);
				updatedList[i]->Weight = weight;
				updatedList[i]->Height = height;
				updatedList[i]->HasHair = hasHair;
			}
			letchikArray = updatedList;
		}
	private: System::Void Form2_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e)
	{
		SaveChanges();

		if (dataGridView1->IsCurrentRowDirty)
		{
			e->Cancel = true;
		}
	}
	private: void Form2::dataGridView1_CellValidating(System::Object^ sender, System::Windows::Forms::DataGridViewCellValidatingEventArgs^ e)
	{
		if (dataGridView1->IsCurrentCellDirty)
		{
			String^ newValue = e->FormattedValue->ToString();

			int rowIndex = e->RowIndex;

			String^ originalValue = dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value != nullptr ?
				dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value->ToString() : "";

			switch (e->ColumnIndex)
			{
			case 0:
				int age;
				if (!Int32::TryParse(newValue, age) || age < 0)
				{
					e->Cancel = true;
					MessageBox::Show("Invalid value entered for age. Row: " + rowIndex);
					dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = originalValue;
				}
				break;
			case 3:
				int ejections;
				if (!Int32::TryParse(newValue, ejections) || ejections < 0)
				{
					e->Cancel = true;
					MessageBox::Show("Invalid value entered for ejections. Row: " + rowIndex);
					dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = originalValue;
				}
				break;
			case 4:
				double weight;
				if (!Double::TryParse(newValue, weight) || weight < 0)
				{
					e->Cancel = true;
					MessageBox::Show("Invalid value entered for weight. Row: " + rowIndex);
					dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = originalValue;
				}
				break;
			case 5:
				double height;
				if (!Double::TryParse(newValue, height) || height < 0)
				{
					e->Cancel = true;
					MessageBox::Show("Invalid value entered for height. Row: " + rowIndex);
					dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = originalValue;
				}
				break;
			case 6:
				bool hasHair;
				if (!Boolean::TryParse(newValue, hasHair))
				{
					e->Cancel = true;
					MessageBox::Show("Invalid value entered for has hair. Row: " + rowIndex);
					dataGridView1->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value = originalValue;
				}
				break;
			}
		}
	}
	private: System::Void toolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		int insertPosition = Int32::Parse(toolStripTextBox1->Text) - 1;

		
		if (insertPosition < 0 || insertPosition > dataGridView1->RowCount)
		{
			MessageBox::Show("Invalid position!");
			return;
		}
 
		DataGridViewRow^ newRow = gcnew DataGridViewRow();
		newRow->CreateCells(dataGridView1);

		for (int i = 0; i < dataGridView1->Columns->Count; i++)
		{
			DataGridViewCell^ cell = newRow->Cells[i];
			String^ columnName = dataGridView1->Columns[i]->Name;

			if (columnName == "FullName" || columnName == "AircraftType")
				cell->Value = "";
			else if (columnName == "Age" || columnName == "Ejections" || columnName == "Weight" || columnName == "Height")
				cell->Value = 0;
			else if (columnName == "Hair presence")
				cell->Value = false;
		}

		dataGridView1->Rows->Insert(insertPosition, newRow);
	}
	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		String^ searchText = toolStripTextBox2->Text;

		bool found = false;

		for (int i = 0; i < dataGridView1->RowCount; i++) {

			String^ cellValue = dataGridView1->Rows[i]->Cells["FullName"]->Value->ToString();

			if (cellValue->IndexOf(searchText, StringComparison::CurrentCultureIgnoreCase) != -1) {
				dataGridView1->CurrentCell = dataGridView1->Rows[i]->Cells[0];
				dataGridView1->FirstDisplayedScrollingRowIndex = i;
				found = true;
				break;
			}
		}

		if (!found)
			MessageBox::Show("No matching rows found.", "Information", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}


	};
}
