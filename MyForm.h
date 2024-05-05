#include"List.h"
#pragma once

namespace ooplab9progslr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RadioButton^ list1_rb;
	protected:
	private: System::Windows::Forms::RadioButton^ list2_rb;
	private: System::Windows::Forms::Label^ list1_lbl;
	private: System::Windows::Forms::Label^ list2_lbl;
	private: System::Windows::Forms::Label^ result_lbl;
	private: System::Windows::Forms::Label^ result_lbl2;
	private: System::Windows::Forms::Button^ getright_bt;
	private: System::Windows::Forms::Button^ getleft_bt;
	private: System::Windows::Forms::Button^ getsize_bt;
	private: System::Windows::Forms::Button^ getaverage_bt;
	private: System::Windows::Forms::Button^ sort_bt;
	private: System::Windows::Forms::Button^ add_bt;
	private: System::Windows::Forms::Button^ sub_bt;
	private: System::Windows::Forms::Button^ multi_bt;
	private: System::Windows::Forms::TextBox^ multy_tb;


	private: System::Windows::Forms::TextBox^ addelem_tb;
	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::TextBox^ index_tb;








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
			this->list1_rb = (gcnew System::Windows::Forms::RadioButton());
			this->list2_rb = (gcnew System::Windows::Forms::RadioButton());
			this->list1_lbl = (gcnew System::Windows::Forms::Label());
			this->list2_lbl = (gcnew System::Windows::Forms::Label());
			this->result_lbl = (gcnew System::Windows::Forms::Label());
			this->result_lbl2 = (gcnew System::Windows::Forms::Label());
			this->getright_bt = (gcnew System::Windows::Forms::Button());
			this->getleft_bt = (gcnew System::Windows::Forms::Button());
			this->getsize_bt = (gcnew System::Windows::Forms::Button());
			this->getaverage_bt = (gcnew System::Windows::Forms::Button());
			this->sort_bt = (gcnew System::Windows::Forms::Button());
			this->add_bt = (gcnew System::Windows::Forms::Button());
			this->sub_bt = (gcnew System::Windows::Forms::Button());
			this->multi_bt = (gcnew System::Windows::Forms::Button());
			this->multy_tb = (gcnew System::Windows::Forms::TextBox());
			this->addelem_tb = (gcnew System::Windows::Forms::TextBox());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->index_tb = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// list1_rb
			// 
			this->list1_rb->AutoSize = true;
			this->list1_rb->Location = System::Drawing::Point(50, 18);
			this->list1_rb->Name = L"list1_rb";
			this->list1_rb->Size = System::Drawing::Size(58, 20);
			this->list1_rb->TabIndex = 0;
			this->list1_rb->TabStop = true;
			this->list1_rb->Text = L"List1:";
			this->list1_rb->UseVisualStyleBackColor = true;
			// 
			// list2_rb
			// 
			this->list2_rb->AutoSize = true;
			this->list2_rb->Location = System::Drawing::Point(50, 42);
			this->list2_rb->Name = L"list2_rb";
			this->list2_rb->Size = System::Drawing::Size(58, 20);
			this->list2_rb->TabIndex = 1;
			this->list2_rb->TabStop = true;
			this->list2_rb->Text = L"List2:";
			this->list2_rb->UseVisualStyleBackColor = true;
			// 
			// list1_lbl
			// 
			this->list1_lbl->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->list1_lbl->Location = System::Drawing::Point(114, 18);
			this->list1_lbl->Name = L"list1_lbl";
			this->list1_lbl->Size = System::Drawing::Size(120, 20);
			this->list1_lbl->TabIndex = 2;
			// 
			// list2_lbl
			// 
			this->list2_lbl->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->list2_lbl->Location = System::Drawing::Point(114, 44);
			this->list2_lbl->Name = L"list2_lbl";
			this->list2_lbl->Size = System::Drawing::Size(120, 20);
			this->list2_lbl->TabIndex = 3;
			// 
			// result_lbl
			// 
			this->result_lbl->AutoSize = true;
			this->result_lbl->Location = System::Drawing::Point(60, 75);
			this->result_lbl->Name = L"result_lbl";
			this->result_lbl->Size = System::Drawing::Size(48, 16);
			this->result_lbl->TabIndex = 4;
			this->result_lbl->Text = L"Result:";
			// 
			// result_lbl2
			// 
			this->result_lbl2->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->result_lbl2->Location = System::Drawing::Point(114, 71);
			this->result_lbl2->Name = L"result_lbl2";
			this->result_lbl2->Size = System::Drawing::Size(120, 20);
			this->result_lbl2->TabIndex = 5;
			// 
			// getright_bt
			// 
			this->getright_bt->Location = System::Drawing::Point(163, 157);
			this->getright_bt->Name = L"getright_bt";
			this->getright_bt->Size = System::Drawing::Size(188, 23);
			this->getright_bt->TabIndex = 6;
			this->getright_bt->Text = L"Get first element from right";
			this->getright_bt->UseVisualStyleBackColor = true;
			// 
			// getleft_bt
			// 
			this->getleft_bt->Location = System::Drawing::Point(163, 186);
			this->getleft_bt->Name = L"getleft_bt";
			this->getleft_bt->Size = System::Drawing::Size(188, 23);
			this->getleft_bt->TabIndex = 7;
			this->getleft_bt->Text = L"Get first element from left";
			this->getleft_bt->UseVisualStyleBackColor = true;
			// 
			// getsize_bt
			// 
			this->getsize_bt->Location = System::Drawing::Point(163, 215);
			this->getsize_bt->Name = L"getsize_bt";
			this->getsize_bt->Size = System::Drawing::Size(188, 23);
			this->getsize_bt->TabIndex = 8;
			this->getsize_bt->Text = L"Get size of list";
			this->getsize_bt->UseVisualStyleBackColor = true;
			// 
			// getaverage_bt
			// 
			this->getaverage_bt->Location = System::Drawing::Point(163, 244);
			this->getaverage_bt->Name = L"getaverage_bt";
			this->getaverage_bt->Size = System::Drawing::Size(188, 23);
			this->getaverage_bt->TabIndex = 9;
			this->getaverage_bt->Text = L"Get average";
			this->getaverage_bt->UseVisualStyleBackColor = true;
			// 
			// sort_bt
			// 
			this->sort_bt->Location = System::Drawing::Point(163, 273);
			this->sort_bt->Name = L"sort_bt";
			this->sort_bt->Size = System::Drawing::Size(188, 23);
			this->sort_bt->TabIndex = 10;
			this->sort_bt->Text = L"Bubble sort";
			this->sort_bt->UseVisualStyleBackColor = true;
			this->sort_bt->Click += gcnew System::EventHandler(this, &MyForm::sort_bt_Click);
			// 
			// add_bt
			// 
			this->add_bt->Location = System::Drawing::Point(50, 312);
			this->add_bt->Name = L"add_bt";
			this->add_bt->Size = System::Drawing::Size(188, 23);
			this->add_bt->TabIndex = 11;
			this->add_bt->Text = L"Add lists";
			this->add_bt->UseVisualStyleBackColor = true;
			this->add_bt->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// sub_bt
			// 
			this->sub_bt->Location = System::Drawing::Point(50, 341);
			this->sub_bt->Name = L"sub_bt";
			this->sub_bt->Size = System::Drawing::Size(188, 23);
			this->sub_bt->TabIndex = 12;
			this->sub_bt->Text = L"Substract lists";
			this->sub_bt->UseVisualStyleBackColor = true;
			// 
			// multi_bt
			// 
			this->multi_bt->Location = System::Drawing::Point(50, 370);
			this->multi_bt->Name = L"multi_bt";
			this->multi_bt->Size = System::Drawing::Size(188, 23);
			this->multi_bt->TabIndex = 13;
			this->multi_bt->Text = L"Multiply by";
			this->multi_bt->UseVisualStyleBackColor = true;
			// 
			// multy_tb
			// 
			this->multy_tb->Location = System::Drawing::Point(244, 370);
			this->multy_tb->Name = L"multy_tb";
			this->multy_tb->Size = System::Drawing::Size(56, 22);
			this->multy_tb->TabIndex = 14;
			// 
			// addelem_tb
			// 
			this->addelem_tb->Location = System::Drawing::Point(101, 115);
			this->addelem_tb->Name = L"addelem_tb";
			this->addelem_tb->Size = System::Drawing::Size(56, 22);
			this->addelem_tb->TabIndex = 17;
			// 
			// add_btn
			// 
			this->add_btn->Location = System::Drawing::Point(63, 157);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(75, 23);
			this->add_btn->TabIndex = 18;
			this->add_btn->Text = L"Add";
			this->add_btn->UseVisualStyleBackColor = true;
			// 
			// index_tb
			// 
			this->index_tb->Location = System::Drawing::Point(50, 114);
			this->index_tb->Name = L"index_tb";
			this->index_tb->Size = System::Drawing::Size(45, 22);
			this->index_tb->TabIndex = 19;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(406, 451);
			this->Controls->Add(this->index_tb);
			this->Controls->Add(this->add_btn);
			this->Controls->Add(this->addelem_tb);
			this->Controls->Add(this->multy_tb);
			this->Controls->Add(this->multi_bt);
			this->Controls->Add(this->sub_bt);
			this->Controls->Add(this->add_bt);
			this->Controls->Add(this->sort_bt);
			this->Controls->Add(this->getaverage_bt);
			this->Controls->Add(this->getsize_bt);
			this->Controls->Add(this->getleft_bt);
			this->Controls->Add(this->getright_bt);
			this->Controls->Add(this->result_lbl2);
			this->Controls->Add(this->result_lbl);
			this->Controls->Add(this->list2_lbl);
			this->Controls->Add(this->list1_lbl);
			this->Controls->Add(this->list2_rb);
			this->Controls->Add(this->list1_rb);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		CDoubleLinkedList* arr;
		int SelectedIndex;
private: System::Void ChangeCheck(System::Object^ sender, System::EventArgs^ e);
private: System::Void UpdateListLabel();
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void sort_bt_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void add_btn_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void ooplab9progslr::MyForm::UpdateListLabel(Label^ label);

};
}


