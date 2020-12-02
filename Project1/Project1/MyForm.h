#pragma once
#include<fstream>
#include<vector>
#include<string>

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
		//Создание векторов и сортировка входных данных
		std::vector<char> sortCharVector(std::vector<char> charVector)
		{
			size_t n = 0;
			for (int i = 0; i < charVector.size(); i++)
				for (int j = i; j < charVector.size(); j++)
					if (charVector[i] > charVector[j])
					{
						char tempChar = charVector[i];
						charVector[i] = charVector[j];
						charVector[j] = tempChar;

					}

			return charVector;

		}


	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Enabled = false;
			this->button1->Location = System::Drawing::Point(371, 240);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Start";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(368, 132);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"login";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(433, 132);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(100, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(368, 180);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"password";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Enabled = false;
			this->textBox2->Location = System::Drawing::Point(433, 180);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(100, 20);
			this->textBox2->TabIndex = 4;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(977, 49);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(144, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Ходаев Георгий Сергеевич";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(1010, 85);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 6;
			this->label4->Click += gcnew System::EventHandler(this, &MyForm::label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(77, 183);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(120, 13);
			this->label5->TabIndex = 7;
			this->label5->Text = L" Изначальные данные";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(795, 180);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Результат";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(80, 243);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(117, 188);
			this->textBox3->TabIndex = 9;
			// 
			// textBox4
			// 
			this->textBox4->Enabled = false;
			this->textBox4->Location = System::Drawing::Point(798, 243);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(120, 188);
			this->textBox4->TabIndex = 10;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1158, 568);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox4->Enabled = true;
		fillTextBox4();


	}; //Окно логина
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->textBox1->Text == "George")
		{
			this->textBox2->Enabled = true;
		}
		else
			this->textBox2->Enabled = false;
	}
		   private: System::Void fillTextBox4()
		   {
			   calculateOutputFile();
			   
			   std::ifstream fin("out.csv");
			   std::string s1;
			   char temp;
			   const size_t arrSize = 10;
			   char* c = new char[arrSize];

			   for (int i = 0; i < 10; i++)
			   {
				   for (size_t j = 0; j < arrSize; j++) {
					   fin >> c[j] >> temp;
				   }
				   String^ s = gcnew String(c, 0, 10);
				   textBox4->Text += s + "\n";
				   getline(fin, s1);


			   }

		   } //сортировка
	private: System::Void calculateOutputFile()
				  {
					  using namespace std;
					  int i;
					  setlocale(LC_ALL, "ru");
					  ifstream fin("file.txt");
					  ofstream fout("out.csv");
					  string s;
					  vector<vector<char>> v(10);
					  for (int j = 0; j < 10; j++)
					  {
						  v[j].resize(10);
						  for (i = 0; i < 10; i++)
							  fin >> v[j][i];
						  getline(fin, s);

						  v[j] = sortCharVector(v[j]);
					  }

					  for (size_t i = 0; i < 10; i++)
					  {
						  for (size_t j = 0; j < v[i].size(); j++)
						  {
							  fout << v[i][j] << ",";
						  }
						  fout << endl;
					  }
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}		// Окно пароля
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->textBox2->Text == "123") {
		this->button1->Enabled = true;
		fillTextBox3AfterLog();
	}
	else 
		this->button1->Enabled = false;
	
}
private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	//this->label4->Text == tm,
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
		
}
private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
} //заполнение окна после ввода логина и пароля
private: System::Void fillTextBox3AfterLog()
{
	std::ifstream fin("file.txt");
	std::string s1;
	const size_t arrSize = 10;
	char* c = new char[arrSize];
	
	for (int i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < arrSize; j++) {
			fin >> c[j];
		}
		String ^s = gcnew String(c, 0, 10);
		textBox3->Text += s + "\n";
		getline(fin, s1);
		
		
	}

}
};
}