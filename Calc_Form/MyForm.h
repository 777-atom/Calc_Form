#pragma once

namespace CalcForm {

	// упращени€ кодов
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MyForm
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

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	// —оздаем кпопки
	private: System::Windows::Forms::Label^ conclusion;
	private: System::Windows::Forms::Button^ btn_delete;
	private: System::Windows::Forms::Button^ btn_division;
	private: System::Windows::Forms::Button^ btn_multiply;
	private: System::Windows::Forms::Button^ btn_minus;
	private: System::Windows::Forms::Button^ btn_plus;
	private: System::Windows::Forms::Button^ btn_equally;
	private: System::Windows::Forms::Button^ btn_persent;
	private: System::Windows::Forms::Button^ btn_comma;
	private: System::Windows::Forms::Button^ btn_9;
	private: System::Windows::Forms::Button^ btn_8;
	private: System::Windows::Forms::Button^ btn_7;
	private: System::Windows::Forms::Button^ btn_6;
	private: System::Windows::Forms::Button^ btn_5;
	private: System::Windows::Forms::Button^ btn_4;
	private: System::Windows::Forms::Button^ btn_3;
	private: System::Windows::Forms::Button^ btn_2;
	private: System::Windows::Forms::Button^ btn_1;
	private: System::Windows::Forms::Button^ btn_0;
	

	private: double first_num;
	private: char user_action = ' '; //	математическое действие

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->conclusion = (gcnew System::Windows::Forms::Label());
			this->btn_delete = (gcnew System::Windows::Forms::Button());
			this->btn_division = (gcnew System::Windows::Forms::Button());
			this->btn_multiply = (gcnew System::Windows::Forms::Button());
			this->btn_minus = (gcnew System::Windows::Forms::Button());
			this->btn_8 = (gcnew System::Windows::Forms::Button());
			this->btn_9 = (gcnew System::Windows::Forms::Button());
			this->btn_6 = (gcnew System::Windows::Forms::Button());
			this->btn_5 = (gcnew System::Windows::Forms::Button());
			this->btn_4 = (gcnew System::Windows::Forms::Button());
			this->btn_plus = (gcnew System::Windows::Forms::Button());
			this->btn_3 = (gcnew System::Windows::Forms::Button());
			this->btn_2 = (gcnew System::Windows::Forms::Button());
			this->btn_1 = (gcnew System::Windows::Forms::Button());
			this->btn_equally = (gcnew System::Windows::Forms::Button());
			this->btn_persent = (gcnew System::Windows::Forms::Button());
			this->btn_comma = (gcnew System::Windows::Forms::Button());
			this->btn_0 = (gcnew System::Windows::Forms::Button());
			this->btn_7 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			//  нопка conclusion
			// 
			this->conclusion->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->conclusion->Location = System::Drawing::Point(12, 9);
			this->conclusion->Name = L"conclusion";
			this->conclusion->Size = System::Drawing::Size(224, 41);
			this->conclusion->TabIndex = 0;
			this->conclusion->Text = L"0";
			this->conclusion->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			//  нопка btn_delete
			// 
			this->btn_delete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_delete->Location = System::Drawing::Point(12, 70);
			this->btn_delete->Name = L"btn_delete";
			this->btn_delete->Size = System::Drawing::Size(52, 53);
			this->btn_delete->TabIndex = 1;
			this->btn_delete->Text = L"C";
			this->btn_delete->UseVisualStyleBackColor = true;
			this->btn_delete->Click += gcnew System::EventHandler(this, &MyForm::btn_delete_Click);
			// 
			//  нопка btn_division
			// 
			this->btn_division->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_division->Location = System::Drawing::Point(70, 70);
			this->btn_division->Name = L"btn_division";
			this->btn_division->Size = System::Drawing::Size(51, 53);
			this->btn_division->TabIndex = 2;
			this->btn_division->Text = L"/";
			this->btn_division->UseVisualStyleBackColor = true;
			this->btn_division->Click += gcnew System::EventHandler(this, &MyForm::btn_division_Click);
			// 
			//  нопка btn_multiply
			// 
			this->btn_multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_multiply->Location = System::Drawing::Point(127, 70);
			this->btn_multiply->Name = L"btn_multiply";
			this->btn_multiply->Size = System::Drawing::Size(52, 53);
			this->btn_multiply->TabIndex = 3;
			this->btn_multiply->Text = L"*";
			this->btn_multiply->UseVisualStyleBackColor = true;
			this->btn_multiply->Click += gcnew System::EventHandler(this, &MyForm::btn_multiply_Click);
			// 
			//  нопка btn_minus
			// 
			this->btn_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_minus->Location = System::Drawing::Point(185, 70);
			this->btn_minus->Name = L"btn_minus";
			this->btn_minus->Size = System::Drawing::Size(51, 53);
			this->btn_minus->TabIndex = 4;
			this->btn_minus->Text = L"-";
			this->btn_minus->UseVisualStyleBackColor = true;
			this->btn_minus->Click += gcnew System::EventHandler(this, &MyForm::btn_minus_Click);
			// 
			//  нопка btn_8
			// 
			this->btn_8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_8->Location = System::Drawing::Point(70, 129);
			this->btn_8->Name = L"btn_8";
			this->btn_8->Size = System::Drawing::Size(51, 53);
			this->btn_8->TabIndex = 6;
			this->btn_8->Text = L"8";
			this->btn_8->UseVisualStyleBackColor = true;
			this->btn_8->Click += gcnew System::EventHandler(this, &MyForm::btn_click);
			// 
			//  нопка btn_9
			// 
			this->btn_9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_9->Location = System::Drawing::Point(127, 129);
			this->btn_9->Name = L"btn_9";
			this->btn_9->Size = System::Drawing::Size(52, 53);
			this->btn_9->TabIndex = 7;
			this->btn_9->Text = L"9";
			this->btn_9->UseVisualStyleBackColor = true;
			this->btn_9->Click += gcnew System::EventHandler(this, &MyForm::btn_click);
			// 
			//  нопка btn_6
			// 
			this->btn_6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_6->Location = System::Drawing::Point(127, 188);
			this->btn_6->Name = L"btn_6";
			this->btn_6->Size = System::Drawing::Size(52, 53);
			this->btn_6->TabIndex = 11;
			this->btn_6->Text = L"6";
			this->btn_6->UseVisualStyleBackColor = true;
			this->btn_6->Click += gcnew System::EventHandler(this, &MyForm::btn_click);
			// 
			//  нопка btn_5
			// 
			this->btn_5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_5->Location = System::Drawing::Point(70, 188);
			this->btn_5->Name = L"btn_5";
			this->btn_5->Size = System::Drawing::Size(51, 53);
			this->btn_5->TabIndex = 10;
			this->btn_5->Text = L"5";
			this->btn_5->UseVisualStyleBackColor = true;
			this->btn_5->Click += gcnew System::EventHandler(this, &MyForm::btn_click);
			// 
			//  нопка btn_4
			// 
			this->btn_4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_4->Location = System::Drawing::Point(12, 188);
			this->btn_4->Name = L"btn_4";
			this->btn_4->Size = System::Drawing::Size(52, 53);
			this->btn_4->TabIndex = 9;
			this->btn_4->Text = L"4";
			this->btn_4->UseVisualStyleBackColor = true;
			this->btn_4->Click += gcnew System::EventHandler(this, &MyForm::btn_click);
			// 
			//  нопка btn_plus
			// 
			this->btn_plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_plus->Location = System::Drawing::Point(185, 129);
			this->btn_plus->Name = L"btn_plus";
			this->btn_plus->Size = System::Drawing::Size(51, 112);
			this->btn_plus->TabIndex = 16;
			this->btn_plus->Text = L"+";
			this->btn_plus->UseVisualStyleBackColor = true;
			this->btn_plus->Click += gcnew System::EventHandler(this, &MyForm::btn_plus_Click);
			// 
			//  нопка btn_3
			// 
			this->btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_3->Location = System::Drawing::Point(127, 247);
			this->btn_3->Name = L"btn_3";
			this->btn_3->Size = System::Drawing::Size(52, 53);
			this->btn_3->TabIndex = 15;
			this->btn_3->Text = L"3";
			this->btn_3->UseVisualStyleBackColor = true;
			this->btn_3->Click += gcnew System::EventHandler(this, &MyForm::btn_click);
			// 
			//  нопка btn_2
			// 
			this->btn_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_2->Location = System::Drawing::Point(70, 247);
			this->btn_2->Name = L"btn_2";
			this->btn_2->Size = System::Drawing::Size(51, 53);
			this->btn_2->TabIndex = 14;
			this->btn_2->Text = L"2";
			this->btn_2->UseVisualStyleBackColor = true;
			this->btn_2->Click += gcnew System::EventHandler(this, &MyForm::btn_click);
			// 
			//  нопка btn_1
			// 
			this->btn_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_1->Location = System::Drawing::Point(12, 247);
			this->btn_1->Name = L"btn_1";
			this->btn_1->Size = System::Drawing::Size(52, 53);
			this->btn_1->TabIndex = 13;
			this->btn_1->Text = L"1";
			this->btn_1->UseVisualStyleBackColor = true;
			this->btn_1->Click += gcnew System::EventHandler(this, &MyForm::btn_click);
			// 
			//  нопка btn_equally
			// 
			this->btn_equally->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_equally->Location = System::Drawing::Point(185, 247);
			this->btn_equally->Name = L"btn_equally";
			this->btn_equally->Size = System::Drawing::Size(51, 111);
			this->btn_equally->TabIndex = 20;
			this->btn_equally->Text = L"=";
			this->btn_equally->UseVisualStyleBackColor = true;
			this->btn_equally->Click += gcnew System::EventHandler(this, &MyForm::btn_equally_Click);
			// 
			//  нопка btn_persent
			// 
			this->btn_persent->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_persent->Location = System::Drawing::Point(127, 306);
			this->btn_persent->Name = L"btn_persent";
			this->btn_persent->Size = System::Drawing::Size(52, 52);
			this->btn_persent->TabIndex = 19;
			this->btn_persent->Text = L"%";
			this->btn_persent->UseVisualStyleBackColor = true;
			this->btn_persent->Click += gcnew System::EventHandler(this, &MyForm::btn_persent_Click);
			// 
			//  нопка btn_comma
			// 
			this->btn_comma->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_comma->Location = System::Drawing::Point(70, 306);
			this->btn_comma->Name = L"btn_comma";
			this->btn_comma->Size = System::Drawing::Size(51, 52);
			this->btn_comma->TabIndex = 18;
			this->btn_comma->Text = L".";
			this->btn_comma->UseVisualStyleBackColor = true;
			this->btn_comma->Click += gcnew System::EventHandler(this, &MyForm::btn_comma_Click);
			// 
			//  нопка btn_0
			// 
			this->btn_0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_0->Location = System::Drawing::Point(12, 306);
			this->btn_0->Name = L"btn_0";
			this->btn_0->Size = System::Drawing::Size(52, 52);
			this->btn_0->TabIndex = 17;
			this->btn_0->Text = L"0";
			this->btn_0->UseVisualStyleBackColor = true;
			this->btn_0->Click += gcnew System::EventHandler(this, &MyForm::btn_click);
			// 
			//  нопка btn_7
			// 
			this->btn_7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 30, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btn_7->Location = System::Drawing::Point(12, 129);
			this->btn_7->Name = L"btn_7";
			this->btn_7->Size = System::Drawing::Size(52, 53);
			this->btn_7->TabIndex = 21;
			this->btn_7->Text = L"7";
			this->btn_7->UseVisualStyleBackColor = true;
			this->btn_7->Click += gcnew System::EventHandler(this, &MyForm::btn_click);
			// 
			// ‘орма MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(248, 369);
			this->Controls->Add(this->btn_7);
			this->Controls->Add(this->btn_equally);
			this->Controls->Add(this->btn_persent);
			this->Controls->Add(this->btn_comma);
			this->Controls->Add(this->btn_0);
			this->Controls->Add(this->btn_plus);
			this->Controls->Add(this->btn_3);
			this->Controls->Add(this->btn_2);
			this->Controls->Add(this->btn_1);
			this->Controls->Add(this->btn_6);
			this->Controls->Add(this->btn_5);
			this->Controls->Add(this->btn_4);
			this->Controls->Add(this->btn_9);
			this->Controls->Add(this->btn_8);
			this->Controls->Add(this->btn_minus);
			this->Controls->Add(this->btn_multiply);
			this->Controls->Add(this->btn_division);
			this->Controls->Add(this->btn_delete);
			this->Controls->Add(this->conclusion);
			this->Name = L" алькул€тор";
			this->Text = L" алькул€тор";
			// this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
//  нопки 0-9 btn_click	
private: System::Void btn_click(System::Object^ sender, System::EventArgs^ e) {
	Button^ button = safe_cast<Button^>(sender);

	if (this->conclusion->Text == "0")
		this->conclusion->Text = button->Text;
	else
		this->conclusion->Text += button->Text;
}

//  нопка / btn_division_Click
private: System::Void btn_division_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('/');
}
//  нопка * btn_multiply_Click
private: System::Void btn_multiply_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('*');
}
//  нопка + btn_plus_Click
private: System::Void btn_plus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('+');
}
//  нопка - btn_minus_Click
private: System::Void btn_minus_Click(System::Object^ sender, System::EventArgs^ e) {
	math_action('-');
}
// —оздаем переменную (копируем first_num, что бы обнулить) math_action 
private: System::Void math_action(char action) {
	this->first_num = System::Convert::ToDouble(this->conclusion->Text);
	this->user_action = action;
	this->conclusion->Text = "0";
}
// кнопка btn_equally_Click
private: System::Void btn_equally_Click(System::Object^ sender, System::EventArgs^ e) {
	if (user_action == ' ')
		return; 
	double second = System::Convert::ToDouble(this->conclusion->Text);
	double res{};

	// ќператор выбора
	switch (this->user_action) {
	    case '+':
		    res = this->first_num + second;
			break;
		case '-':
			res = this->first_num - second;
			break;
		case '*':
			res = this->first_num + second;
			break;
		case '/':
			if (second != 0)
				res = this->first_num / second;
			else
				MessageBox::Show(this, "на 0 делить нельз€.", "ќшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
			break;
	}

	this->conclusion->Text = System::Convert::ToString(res);
}
//  нопка ќчистить btn_delete_Click
private: System::Void btn_delete_Click(System::Object^ sender, System::EventArgs^ e) {
	this->conclusion->Text = "0";
	this->first_num = 0;
	this->user_action = ' ';
}

//  нопка зап€та€ btn_comma_Click
private: System::Void btn_comma_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ text = this->conclusion->Text;

	if (!text->Contains(","))
		this->conclusion->Text = text += ",";
}

//  нопка процент btn_persent_Click
private: System::Void btn_persent_Click(System::Object^ sender, System::EventArgs^ e) {
	first_num = System::Convert::ToDouble(this->conclusion->Text);
	first_num /= 100;

	this->conclusion->Text = System::Convert::ToString(first_num);
}
};
}
