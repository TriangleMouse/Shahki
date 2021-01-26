#pragma once

namespace Shahki {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections::Generic;
	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			azu = 12;
			roj = 12;
			carjarListas();
			
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
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox10;
	private: System::Windows::Forms::PictureBox^  pictureBox11;
	private: System::Windows::Forms::PictureBox^  pictureBox12;
	private: System::Windows::Forms::PictureBox^  pictureBox13;
	private: System::Windows::Forms::PictureBox^  pictureBox14;
	private: System::Windows::Forms::PictureBox^  pictureBox15;
	private: System::Windows::Forms::PictureBox^  pictureBox16;
	private: System::Windows::Forms::PictureBox^  pictureBox17;
	private: System::Windows::Forms::PictureBox^  pictureBox18;
	private: System::Windows::Forms::PictureBox^  pictureBox19;
	private: System::Windows::Forms::PictureBox^  pictureBox20;
	private: System::Windows::Forms::PictureBox^  pictureBox21;
	private: System::Windows::Forms::PictureBox^  pictureBox22;
	private: System::Windows::Forms::PictureBox^  pictureBox23;
	private: System::Windows::Forms::PictureBox^  pictureBox24;
	private: System::Windows::Forms::PictureBox^  pictureBox25;
	private: System::Windows::Forms::PictureBox^  pictureBox26;
	private: System::Windows::Forms::PictureBox^  pictureBox27;
	private: System::Windows::Forms::PictureBox^  pictureBox28;
	private: System::Windows::Forms::PictureBox^  pictureBox29;
	private: System::Windows::Forms::PictureBox^  pictureBox30;
	private: System::Windows::Forms::PictureBox^  pictureBox31;
	private: System::Windows::Forms::PictureBox^  pictureBox32;
	private: System::Windows::Forms::PictureBox^  pictureBox33;
	private: System::Windows::Forms::PictureBox^  pictureBox34;
	private: System::Windows::Forms::PictureBox^  pictureBox35;
	private: System::Windows::Forms::PictureBox^  pictureBox36;
	private: System::Windows::Forms::PictureBox^  pictureBox37;
	private: System::Windows::Forms::PictureBox^  pictureBox38;
	private: System::Windows::Forms::PictureBox^  pictureBox39;
	private: System::Windows::Forms::PictureBox^  pictureBox40;
	private: System::Windows::Forms::PictureBox^  pictureBox41;
	private: System::Windows::Forms::PictureBox^  pictureBox42;
	private: System::Windows::Forms::PictureBox^  pictureBox43;
	private: System::Windows::Forms::PictureBox^  pictureBox44;
	private: System::Windows::Forms::PictureBox^  pictureBox45;
	private: System::Windows::Forms::PictureBox^  pictureBox46;
	private: System::Windows::Forms::PictureBox^  pictureBox47;
	private: System::Windows::Forms::PictureBox^  pictureBox48;
	private: System::Windows::Forms::PictureBox^  pictureBox49;
	private: System::Windows::Forms::PictureBox^  pictureBox50;
	private: System::Windows::Forms::PictureBox^  pictureBox51;
	private: System::Windows::Forms::PictureBox^  pictureBox52;
	private: System::Windows::Forms::PictureBox^  pictureBox53;
	private: System::Windows::Forms::PictureBox^  pictureBox54;
	private: System::Windows::Forms::PictureBox^  pictureBox55;
	private: System::Windows::Forms::PictureBox^  pictureBox56;
	private: System::Windows::Forms::PictureBox^  pictureBox57;
	private: System::Windows::Forms::PictureBox^  pictureBox58;
	private: System::Windows::Forms::PictureBox^  pictureBox59;
	private: System::Windows::Forms::PictureBox^  pictureBox60;
	private: System::Windows::Forms::PictureBox^  pictureBox61;
	private: System::Windows::Forms::PictureBox^  pictureBox62;
	private: System::Windows::Forms::PictureBox^  pictureBox63;
	private: System::Windows::Forms::PictureBox^  pictureBox64;
	private: System::Windows::Forms::PictureBox^  roja12;
	private: System::Windows::Forms::PictureBox^  roja11;
	private: System::Windows::Forms::PictureBox^  roja10;
	private: System::Windows::Forms::PictureBox^  roja9;
	private: System::Windows::Forms::PictureBox^  roja8;
	private: System::Windows::Forms::PictureBox^  roja7;
	private: System::Windows::Forms::PictureBox^  roja6;
	private: System::Windows::Forms::PictureBox^  roja5;
	private: System::Windows::Forms::PictureBox^  roja4;

	private: System::Windows::Forms::PictureBox^  roja3;
	private: System::Windows::Forms::PictureBox^  roja2;
	private: System::Windows::Forms::PictureBox^  roja1;
	private: System::Windows::Forms::PictureBox^  azul12;
	private: System::Windows::Forms::PictureBox^  azul11;
	private: System::Windows::Forms::PictureBox^  azul10;
	private: System::Windows::Forms::PictureBox^  azul9;
	private: System::Windows::Forms::PictureBox^  azul8;
	private: System::Windows::Forms::PictureBox^  azul7;
	private: System::Windows::Forms::PictureBox^  azul6;
	private: System::Windows::Forms::PictureBox^  azul5;
	private: System::Windows::Forms::PictureBox^  azul4;
	private: System::Windows::Forms::PictureBox^  azul3;
	private: System::Windows::Forms::PictureBox^  azul2;
	private: System::Windows::Forms::PictureBox^  azul1;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::TextBox^  textBox1;
private: System::Windows::Forms::TextBox^  textBox2;
private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::Label^  label2;
private: Bunifu::Framework::UI::BunifuDragControl^  bunifuDragControl1;
private: System::Windows::Forms::Button^  button1;
private: System::Windows::Forms::Label^  label3;
private: System::Windows::Forms::Label^  label5;
private: System::Windows::Forms::Label^  label4;
private: System::Windows::Forms::Label^  label6;
private: System::Windows::Forms::PictureBox^  pictureBox65;
private: System::Windows::Forms::PictureBox^  pictureBox66;
private: System::Windows::Forms::Label^  label7;
private: System::Windows::Forms::Label^  label8;
private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox12 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox13 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox14 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox15 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox16 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox17 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox18 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox19 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox20 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox21 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox22 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox23 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox24 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox25 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox26 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox27 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox28 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox29 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox30 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox31 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox32 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox33 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox34 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox35 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox36 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox37 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox38 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox39 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox40 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox41 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox42 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox43 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox44 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox45 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox46 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox47 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox48 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox49 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox50 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox51 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox52 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox53 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox54 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox55 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox56 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox57 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox58 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox59 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox60 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox61 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox62 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox63 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox64 = (gcnew System::Windows::Forms::PictureBox());
			this->roja12 = (gcnew System::Windows::Forms::PictureBox());
			this->roja11 = (gcnew System::Windows::Forms::PictureBox());
			this->roja10 = (gcnew System::Windows::Forms::PictureBox());
			this->roja9 = (gcnew System::Windows::Forms::PictureBox());
			this->roja8 = (gcnew System::Windows::Forms::PictureBox());
			this->roja7 = (gcnew System::Windows::Forms::PictureBox());
			this->roja6 = (gcnew System::Windows::Forms::PictureBox());
			this->roja5 = (gcnew System::Windows::Forms::PictureBox());
			this->roja4 = (gcnew System::Windows::Forms::PictureBox());
			this->roja3 = (gcnew System::Windows::Forms::PictureBox());
			this->roja2 = (gcnew System::Windows::Forms::PictureBox());
			this->roja1 = (gcnew System::Windows::Forms::PictureBox());
			this->azul12 = (gcnew System::Windows::Forms::PictureBox());
			this->azul11 = (gcnew System::Windows::Forms::PictureBox());
			this->azul10 = (gcnew System::Windows::Forms::PictureBox());
			this->azul9 = (gcnew System::Windows::Forms::PictureBox());
			this->azul8 = (gcnew System::Windows::Forms::PictureBox());
			this->azul7 = (gcnew System::Windows::Forms::PictureBox());
			this->azul6 = (gcnew System::Windows::Forms::PictureBox());
			this->azul5 = (gcnew System::Windows::Forms::PictureBox());
			this->azul4 = (gcnew System::Windows::Forms::PictureBox());
			this->azul3 = (gcnew System::Windows::Forms::PictureBox());
			this->azul2 = (gcnew System::Windows::Forms::PictureBox());
			this->azul1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->bunifuDragControl1 = (gcnew Bunifu::Framework::UI::BunifuDragControl(this->components));
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->pictureBox65 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox66 = (gcnew System::Windows::Forms::PictureBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul12))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul1))->BeginInit();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox1->Location = System::Drawing::Point(100, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Black;
			this->pictureBox2->Location = System::Drawing::Point(50, 50);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(50, 50);
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::Color::Black;
			this->pictureBox4->Location = System::Drawing::Point(150, 50);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(50, 50);
			this->pictureBox4->TabIndex = 3;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox5->Location = System::Drawing::Point(200, 50);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(50, 50);
			this->pictureBox5->TabIndex = 4;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox3->Location = System::Drawing::Point(400, 50);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 50);
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::Color::Black;
			this->pictureBox6->Location = System::Drawing::Point(350, 50);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(50, 50);
			this->pictureBox6->TabIndex = 7;
			this->pictureBox6->TabStop = false;
			this->pictureBox6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::Color::Black;
			this->pictureBox7->Location = System::Drawing::Point(250, 50);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(50, 50);
			this->pictureBox7->TabIndex = 6;
			this->pictureBox7->TabStop = false;
			this->pictureBox7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox8->Location = System::Drawing::Point(300, 50);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(50, 50);
			this->pictureBox8->TabIndex = 5;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::Color::Black;
			this->pictureBox9->Location = System::Drawing::Point(400, 100);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(50, 50);
			this->pictureBox9->TabIndex = 16;
			this->pictureBox9->TabStop = false;
			this->pictureBox9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox10
			// 
			this->pictureBox10->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox10->Location = System::Drawing::Point(350, 100);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(50, 50);
			this->pictureBox10->TabIndex = 15;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox11->Location = System::Drawing::Point(250, 100);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(50, 50);
			this->pictureBox11->TabIndex = 14;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox12
			// 
			this->pictureBox12->BackColor = System::Drawing::Color::Black;
			this->pictureBox12->Location = System::Drawing::Point(300, 100);
			this->pictureBox12->Name = L"pictureBox12";
			this->pictureBox12->Size = System::Drawing::Size(50, 50);
			this->pictureBox12->TabIndex = 13;
			this->pictureBox12->TabStop = false;
			this->pictureBox12->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox13
			// 
			this->pictureBox13->BackColor = System::Drawing::Color::Black;
			this->pictureBox13->Location = System::Drawing::Point(200, 100);
			this->pictureBox13->Name = L"pictureBox13";
			this->pictureBox13->Size = System::Drawing::Size(50, 50);
			this->pictureBox13->TabIndex = 12;
			this->pictureBox13->TabStop = false;
			this->pictureBox13->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox14
			// 
			this->pictureBox14->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox14->Location = System::Drawing::Point(150, 100);
			this->pictureBox14->Name = L"pictureBox14";
			this->pictureBox14->Size = System::Drawing::Size(50, 50);
			this->pictureBox14->TabIndex = 11;
			this->pictureBox14->TabStop = false;
			// 
			// pictureBox15
			// 
			this->pictureBox15->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox15->Location = System::Drawing::Point(50, 100);
			this->pictureBox15->Name = L"pictureBox15";
			this->pictureBox15->Size = System::Drawing::Size(50, 50);
			this->pictureBox15->TabIndex = 10;
			this->pictureBox15->TabStop = false;
			// 
			// pictureBox16
			// 
			this->pictureBox16->BackColor = System::Drawing::Color::Black;
			this->pictureBox16->Location = System::Drawing::Point(100, 100);
			this->pictureBox16->Name = L"pictureBox16";
			this->pictureBox16->Size = System::Drawing::Size(50, 50);
			this->pictureBox16->TabIndex = 9;
			this->pictureBox16->TabStop = false;
			this->pictureBox16->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox17
			// 
			this->pictureBox17->BackColor = System::Drawing::Color::Black;
			this->pictureBox17->Location = System::Drawing::Point(400, 200);
			this->pictureBox17->Name = L"pictureBox17";
			this->pictureBox17->Size = System::Drawing::Size(50, 50);
			this->pictureBox17->TabIndex = 32;
			this->pictureBox17->TabStop = false;
			this->pictureBox17->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox18
			// 
			this->pictureBox18->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox18->Location = System::Drawing::Point(350, 200);
			this->pictureBox18->Name = L"pictureBox18";
			this->pictureBox18->Size = System::Drawing::Size(50, 50);
			this->pictureBox18->TabIndex = 31;
			this->pictureBox18->TabStop = false;
			// 
			// pictureBox19
			// 
			this->pictureBox19->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox19->Location = System::Drawing::Point(250, 200);
			this->pictureBox19->Name = L"pictureBox19";
			this->pictureBox19->Size = System::Drawing::Size(50, 50);
			this->pictureBox19->TabIndex = 30;
			this->pictureBox19->TabStop = false;
			// 
			// pictureBox20
			// 
			this->pictureBox20->BackColor = System::Drawing::Color::Black;
			this->pictureBox20->Location = System::Drawing::Point(300, 200);
			this->pictureBox20->Name = L"pictureBox20";
			this->pictureBox20->Size = System::Drawing::Size(50, 50);
			this->pictureBox20->TabIndex = 29;
			this->pictureBox20->TabStop = false;
			this->pictureBox20->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox21
			// 
			this->pictureBox21->BackColor = System::Drawing::Color::Black;
			this->pictureBox21->Location = System::Drawing::Point(200, 200);
			this->pictureBox21->Name = L"pictureBox21";
			this->pictureBox21->Size = System::Drawing::Size(50, 50);
			this->pictureBox21->TabIndex = 28;
			this->pictureBox21->TabStop = false;
			this->pictureBox21->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox22
			// 
			this->pictureBox22->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox22->Location = System::Drawing::Point(150, 200);
			this->pictureBox22->Name = L"pictureBox22";
			this->pictureBox22->Size = System::Drawing::Size(50, 50);
			this->pictureBox22->TabIndex = 27;
			this->pictureBox22->TabStop = false;
			// 
			// pictureBox23
			// 
			this->pictureBox23->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox23->Location = System::Drawing::Point(50, 200);
			this->pictureBox23->Name = L"pictureBox23";
			this->pictureBox23->Size = System::Drawing::Size(50, 50);
			this->pictureBox23->TabIndex = 26;
			this->pictureBox23->TabStop = false;
			// 
			// pictureBox24
			// 
			this->pictureBox24->BackColor = System::Drawing::Color::Black;
			this->pictureBox24->Location = System::Drawing::Point(100, 200);
			this->pictureBox24->Name = L"pictureBox24";
			this->pictureBox24->Size = System::Drawing::Size(50, 50);
			this->pictureBox24->TabIndex = 25;
			this->pictureBox24->TabStop = false;
			this->pictureBox24->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox25
			// 
			this->pictureBox25->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox25->Location = System::Drawing::Point(400, 150);
			this->pictureBox25->Name = L"pictureBox25";
			this->pictureBox25->Size = System::Drawing::Size(50, 50);
			this->pictureBox25->TabIndex = 24;
			this->pictureBox25->TabStop = false;
			// 
			// pictureBox26
			// 
			this->pictureBox26->BackColor = System::Drawing::Color::Black;
			this->pictureBox26->Location = System::Drawing::Point(350, 150);
			this->pictureBox26->Name = L"pictureBox26";
			this->pictureBox26->Size = System::Drawing::Size(50, 50);
			this->pictureBox26->TabIndex = 23;
			this->pictureBox26->TabStop = false;
			this->pictureBox26->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox27
			// 
			this->pictureBox27->BackColor = System::Drawing::Color::Black;
			this->pictureBox27->Location = System::Drawing::Point(250, 150);
			this->pictureBox27->Name = L"pictureBox27";
			this->pictureBox27->Size = System::Drawing::Size(50, 50);
			this->pictureBox27->TabIndex = 22;
			this->pictureBox27->TabStop = false;
			this->pictureBox27->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox28
			// 
			this->pictureBox28->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox28->Location = System::Drawing::Point(300, 150);
			this->pictureBox28->Name = L"pictureBox28";
			this->pictureBox28->Size = System::Drawing::Size(50, 50);
			this->pictureBox28->TabIndex = 21;
			this->pictureBox28->TabStop = false;
			// 
			// pictureBox29
			// 
			this->pictureBox29->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox29->Location = System::Drawing::Point(200, 150);
			this->pictureBox29->Name = L"pictureBox29";
			this->pictureBox29->Size = System::Drawing::Size(50, 50);
			this->pictureBox29->TabIndex = 20;
			this->pictureBox29->TabStop = false;
			// 
			// pictureBox30
			// 
			this->pictureBox30->BackColor = System::Drawing::Color::Black;
			this->pictureBox30->Location = System::Drawing::Point(150, 150);
			this->pictureBox30->Name = L"pictureBox30";
			this->pictureBox30->Size = System::Drawing::Size(50, 50);
			this->pictureBox30->TabIndex = 19;
			this->pictureBox30->TabStop = false;
			this->pictureBox30->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox31
			// 
			this->pictureBox31->BackColor = System::Drawing::Color::Black;
			this->pictureBox31->Location = System::Drawing::Point(50, 150);
			this->pictureBox31->Name = L"pictureBox31";
			this->pictureBox31->Size = System::Drawing::Size(50, 50);
			this->pictureBox31->TabIndex = 18;
			this->pictureBox31->TabStop = false;
			this->pictureBox31->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox32
			// 
			this->pictureBox32->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox32->Location = System::Drawing::Point(100, 150);
			this->pictureBox32->Name = L"pictureBox32";
			this->pictureBox32->Size = System::Drawing::Size(50, 50);
			this->pictureBox32->TabIndex = 17;
			this->pictureBox32->TabStop = false;
			// 
			// pictureBox33
			// 
			this->pictureBox33->BackColor = System::Drawing::Color::Black;
			this->pictureBox33->Location = System::Drawing::Point(400, 400);
			this->pictureBox33->Name = L"pictureBox33";
			this->pictureBox33->Size = System::Drawing::Size(50, 50);
			this->pictureBox33->TabIndex = 64;
			this->pictureBox33->TabStop = false;
			this->pictureBox33->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox34
			// 
			this->pictureBox34->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox34->Location = System::Drawing::Point(350, 400);
			this->pictureBox34->Name = L"pictureBox34";
			this->pictureBox34->Size = System::Drawing::Size(50, 50);
			this->pictureBox34->TabIndex = 63;
			this->pictureBox34->TabStop = false;
			// 
			// pictureBox35
			// 
			this->pictureBox35->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox35->Location = System::Drawing::Point(250, 400);
			this->pictureBox35->Name = L"pictureBox35";
			this->pictureBox35->Size = System::Drawing::Size(50, 50);
			this->pictureBox35->TabIndex = 62;
			this->pictureBox35->TabStop = false;
			// 
			// pictureBox36
			// 
			this->pictureBox36->BackColor = System::Drawing::Color::Black;
			this->pictureBox36->Location = System::Drawing::Point(300, 400);
			this->pictureBox36->Name = L"pictureBox36";
			this->pictureBox36->Size = System::Drawing::Size(50, 50);
			this->pictureBox36->TabIndex = 61;
			this->pictureBox36->TabStop = false;
			this->pictureBox36->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox37
			// 
			this->pictureBox37->BackColor = System::Drawing::Color::Black;
			this->pictureBox37->Location = System::Drawing::Point(200, 400);
			this->pictureBox37->Name = L"pictureBox37";
			this->pictureBox37->Size = System::Drawing::Size(50, 50);
			this->pictureBox37->TabIndex = 60;
			this->pictureBox37->TabStop = false;
			this->pictureBox37->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox38
			// 
			this->pictureBox38->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox38->Location = System::Drawing::Point(150, 400);
			this->pictureBox38->Name = L"pictureBox38";
			this->pictureBox38->Size = System::Drawing::Size(50, 50);
			this->pictureBox38->TabIndex = 59;
			this->pictureBox38->TabStop = false;
			// 
			// pictureBox39
			// 
			this->pictureBox39->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox39->Location = System::Drawing::Point(50, 400);
			this->pictureBox39->Name = L"pictureBox39";
			this->pictureBox39->Size = System::Drawing::Size(50, 50);
			this->pictureBox39->TabIndex = 58;
			this->pictureBox39->TabStop = false;
			// 
			// pictureBox40
			// 
			this->pictureBox40->BackColor = System::Drawing::Color::Black;
			this->pictureBox40->Location = System::Drawing::Point(100, 400);
			this->pictureBox40->Name = L"pictureBox40";
			this->pictureBox40->Size = System::Drawing::Size(50, 50);
			this->pictureBox40->TabIndex = 57;
			this->pictureBox40->TabStop = false;
			this->pictureBox40->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox41
			// 
			this->pictureBox41->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox41->Location = System::Drawing::Point(400, 350);
			this->pictureBox41->Name = L"pictureBox41";
			this->pictureBox41->Size = System::Drawing::Size(50, 50);
			this->pictureBox41->TabIndex = 56;
			this->pictureBox41->TabStop = false;
			// 
			// pictureBox42
			// 
			this->pictureBox42->BackColor = System::Drawing::Color::Black;
			this->pictureBox42->Location = System::Drawing::Point(350, 350);
			this->pictureBox42->Name = L"pictureBox42";
			this->pictureBox42->Size = System::Drawing::Size(50, 50);
			this->pictureBox42->TabIndex = 55;
			this->pictureBox42->TabStop = false;
			this->pictureBox42->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox43
			// 
			this->pictureBox43->BackColor = System::Drawing::Color::Black;
			this->pictureBox43->Location = System::Drawing::Point(250, 350);
			this->pictureBox43->Name = L"pictureBox43";
			this->pictureBox43->Size = System::Drawing::Size(50, 50);
			this->pictureBox43->TabIndex = 54;
			this->pictureBox43->TabStop = false;
			this->pictureBox43->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox44
			// 
			this->pictureBox44->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox44->Location = System::Drawing::Point(300, 350);
			this->pictureBox44->Name = L"pictureBox44";
			this->pictureBox44->Size = System::Drawing::Size(50, 50);
			this->pictureBox44->TabIndex = 53;
			this->pictureBox44->TabStop = false;
			// 
			// pictureBox45
			// 
			this->pictureBox45->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox45->Location = System::Drawing::Point(200, 350);
			this->pictureBox45->Name = L"pictureBox45";
			this->pictureBox45->Size = System::Drawing::Size(50, 50);
			this->pictureBox45->TabIndex = 52;
			this->pictureBox45->TabStop = false;
			// 
			// pictureBox46
			// 
			this->pictureBox46->BackColor = System::Drawing::Color::Black;
			this->pictureBox46->Location = System::Drawing::Point(150, 350);
			this->pictureBox46->Name = L"pictureBox46";
			this->pictureBox46->Size = System::Drawing::Size(50, 50);
			this->pictureBox46->TabIndex = 51;
			this->pictureBox46->TabStop = false;
			this->pictureBox46->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox47
			// 
			this->pictureBox47->BackColor = System::Drawing::Color::Black;
			this->pictureBox47->Location = System::Drawing::Point(50, 350);
			this->pictureBox47->Name = L"pictureBox47";
			this->pictureBox47->Size = System::Drawing::Size(50, 50);
			this->pictureBox47->TabIndex = 50;
			this->pictureBox47->TabStop = false;
			this->pictureBox47->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox48
			// 
			this->pictureBox48->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox48->Location = System::Drawing::Point(100, 350);
			this->pictureBox48->Name = L"pictureBox48";
			this->pictureBox48->Size = System::Drawing::Size(50, 50);
			this->pictureBox48->TabIndex = 49;
			this->pictureBox48->TabStop = false;
			// 
			// pictureBox49
			// 
			this->pictureBox49->BackColor = System::Drawing::Color::Black;
			this->pictureBox49->Location = System::Drawing::Point(400, 300);
			this->pictureBox49->Name = L"pictureBox49";
			this->pictureBox49->Size = System::Drawing::Size(50, 50);
			this->pictureBox49->TabIndex = 48;
			this->pictureBox49->TabStop = false;
			this->pictureBox49->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox50
			// 
			this->pictureBox50->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox50->Location = System::Drawing::Point(350, 300);
			this->pictureBox50->Name = L"pictureBox50";
			this->pictureBox50->Size = System::Drawing::Size(50, 50);
			this->pictureBox50->TabIndex = 47;
			this->pictureBox50->TabStop = false;
			// 
			// pictureBox51
			// 
			this->pictureBox51->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox51->Location = System::Drawing::Point(250, 300);
			this->pictureBox51->Name = L"pictureBox51";
			this->pictureBox51->Size = System::Drawing::Size(50, 50);
			this->pictureBox51->TabIndex = 46;
			this->pictureBox51->TabStop = false;
			// 
			// pictureBox52
			// 
			this->pictureBox52->BackColor = System::Drawing::Color::Black;
			this->pictureBox52->Location = System::Drawing::Point(300, 300);
			this->pictureBox52->Name = L"pictureBox52";
			this->pictureBox52->Size = System::Drawing::Size(50, 50);
			this->pictureBox52->TabIndex = 45;
			this->pictureBox52->TabStop = false;
			this->pictureBox52->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox53
			// 
			this->pictureBox53->BackColor = System::Drawing::Color::Black;
			this->pictureBox53->Location = System::Drawing::Point(200, 300);
			this->pictureBox53->Name = L"pictureBox53";
			this->pictureBox53->Size = System::Drawing::Size(50, 50);
			this->pictureBox53->TabIndex = 44;
			this->pictureBox53->TabStop = false;
			this->pictureBox53->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox54
			// 
			this->pictureBox54->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox54->Location = System::Drawing::Point(150, 300);
			this->pictureBox54->Name = L"pictureBox54";
			this->pictureBox54->Size = System::Drawing::Size(50, 50);
			this->pictureBox54->TabIndex = 43;
			this->pictureBox54->TabStop = false;
			// 
			// pictureBox55
			// 
			this->pictureBox55->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox55->Location = System::Drawing::Point(50, 300);
			this->pictureBox55->Name = L"pictureBox55";
			this->pictureBox55->Size = System::Drawing::Size(50, 50);
			this->pictureBox55->TabIndex = 42;
			this->pictureBox55->TabStop = false;
			// 
			// pictureBox56
			// 
			this->pictureBox56->BackColor = System::Drawing::Color::Black;
			this->pictureBox56->Location = System::Drawing::Point(100, 300);
			this->pictureBox56->Name = L"pictureBox56";
			this->pictureBox56->Size = System::Drawing::Size(50, 50);
			this->pictureBox56->TabIndex = 41;
			this->pictureBox56->TabStop = false;
			this->pictureBox56->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox57
			// 
			this->pictureBox57->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox57->Location = System::Drawing::Point(400, 250);
			this->pictureBox57->Name = L"pictureBox57";
			this->pictureBox57->Size = System::Drawing::Size(50, 50);
			this->pictureBox57->TabIndex = 40;
			this->pictureBox57->TabStop = false;
			// 
			// pictureBox58
			// 
			this->pictureBox58->BackColor = System::Drawing::Color::Black;
			this->pictureBox58->Location = System::Drawing::Point(350, 250);
			this->pictureBox58->Name = L"pictureBox58";
			this->pictureBox58->Size = System::Drawing::Size(50, 50);
			this->pictureBox58->TabIndex = 39;
			this->pictureBox58->TabStop = false;
			this->pictureBox58->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox59
			// 
			this->pictureBox59->BackColor = System::Drawing::Color::Black;
			this->pictureBox59->Location = System::Drawing::Point(250, 250);
			this->pictureBox59->Name = L"pictureBox59";
			this->pictureBox59->Size = System::Drawing::Size(50, 50);
			this->pictureBox59->TabIndex = 38;
			this->pictureBox59->TabStop = false;
			this->pictureBox59->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox60
			// 
			this->pictureBox60->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox60->Location = System::Drawing::Point(300, 250);
			this->pictureBox60->Name = L"pictureBox60";
			this->pictureBox60->Size = System::Drawing::Size(50, 50);
			this->pictureBox60->TabIndex = 37;
			this->pictureBox60->TabStop = false;
			// 
			// pictureBox61
			// 
			this->pictureBox61->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox61->Location = System::Drawing::Point(200, 250);
			this->pictureBox61->Name = L"pictureBox61";
			this->pictureBox61->Size = System::Drawing::Size(50, 50);
			this->pictureBox61->TabIndex = 36;
			this->pictureBox61->TabStop = false;
			// 
			// pictureBox62
			// 
			this->pictureBox62->BackColor = System::Drawing::Color::Black;
			this->pictureBox62->Location = System::Drawing::Point(150, 250);
			this->pictureBox62->Name = L"pictureBox62";
			this->pictureBox62->Size = System::Drawing::Size(50, 50);
			this->pictureBox62->TabIndex = 35;
			this->pictureBox62->TabStop = false;
			this->pictureBox62->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox63
			// 
			this->pictureBox63->BackColor = System::Drawing::Color::Black;
			this->pictureBox63->Location = System::Drawing::Point(50, 250);
			this->pictureBox63->Name = L"pictureBox63";
			this->pictureBox63->Size = System::Drawing::Size(50, 50);
			this->pictureBox63->TabIndex = 34;
			this->pictureBox63->TabStop = false;
			this->pictureBox63->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::cuadroClick);
			// 
			// pictureBox64
			// 
			this->pictureBox64->BackColor = System::Drawing::Color::Maroon;
			this->pictureBox64->Location = System::Drawing::Point(100, 250);
			this->pictureBox64->Name = L"pictureBox64";
			this->pictureBox64->Size = System::Drawing::Size(50, 50);
			this->pictureBox64->TabIndex = 33;
			this->pictureBox64->TabStop = false;
			// 
			// roja12
			// 
			this->roja12->BackColor = System::Drawing::Color::Black;
			this->roja12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roja12.BackgroundImage")));
			this->roja12->Location = System::Drawing::Point(400, 400);
			this->roja12->Name = L"roja12";
			this->roja12->Size = System::Drawing::Size(50, 50);
			this->roja12->TabIndex = 76;
			this->roja12->TabStop = false;
			this->roja12->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionRoja);
			// 
			// roja11
			// 
			this->roja11->BackColor = System::Drawing::Color::Black;
			this->roja11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roja11.BackgroundImage")));
			this->roja11->Location = System::Drawing::Point(300, 400);
			this->roja11->Name = L"roja11";
			this->roja11->Size = System::Drawing::Size(50, 50);
			this->roja11->TabIndex = 75;
			this->roja11->TabStop = false;
			this->roja11->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionRoja);
			// 
			// roja10
			// 
			this->roja10->BackColor = System::Drawing::Color::Black;
			this->roja10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roja10.BackgroundImage")));
			this->roja10->Location = System::Drawing::Point(200, 400);
			this->roja10->Name = L"roja10";
			this->roja10->Size = System::Drawing::Size(50, 50);
			this->roja10->TabIndex = 74;
			this->roja10->TabStop = false;
			this->roja10->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionRoja);
			// 
			// roja9
			// 
			this->roja9->BackColor = System::Drawing::Color::Black;
			this->roja9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roja9.BackgroundImage")));
			this->roja9->Location = System::Drawing::Point(100, 400);
			this->roja9->Name = L"roja9";
			this->roja9->Size = System::Drawing::Size(50, 50);
			this->roja9->TabIndex = 73;
			this->roja9->TabStop = false;
			this->roja9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionRoja);
			// 
			// roja8
			// 
			this->roja8->BackColor = System::Drawing::Color::Black;
			this->roja8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roja8.BackgroundImage")));
			this->roja8->Location = System::Drawing::Point(350, 350);
			this->roja8->Name = L"roja8";
			this->roja8->Size = System::Drawing::Size(50, 50);
			this->roja8->TabIndex = 72;
			this->roja8->TabStop = false;
			this->roja8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionRoja);
			// 
			// roja7
			// 
			this->roja7->BackColor = System::Drawing::Color::Black;
			this->roja7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roja7.BackgroundImage")));
			this->roja7->Location = System::Drawing::Point(250, 350);
			this->roja7->Name = L"roja7";
			this->roja7->Size = System::Drawing::Size(50, 50);
			this->roja7->TabIndex = 71;
			this->roja7->TabStop = false;
			this->roja7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionRoja);
			// 
			// roja6
			// 
			this->roja6->BackColor = System::Drawing::Color::Black;
			this->roja6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roja6.BackgroundImage")));
			this->roja6->Location = System::Drawing::Point(150, 350);
			this->roja6->Name = L"roja6";
			this->roja6->Size = System::Drawing::Size(50, 50);
			this->roja6->TabIndex = 70;
			this->roja6->TabStop = false;
			this->roja6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionRoja);
			// 
			// roja5
			// 
			this->roja5->BackColor = System::Drawing::Color::Black;
			this->roja5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roja5.BackgroundImage")));
			this->roja5->Location = System::Drawing::Point(50, 350);
			this->roja5->Name = L"roja5";
			this->roja5->Size = System::Drawing::Size(50, 50);
			this->roja5->TabIndex = 69;
			this->roja5->TabStop = false;
			this->roja5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionRoja);
			// 
			// roja4
			// 
			this->roja4->BackColor = System::Drawing::Color::Black;
			this->roja4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roja4.BackgroundImage")));
			this->roja4->Location = System::Drawing::Point(400, 300);
			this->roja4->Name = L"roja4";
			this->roja4->Size = System::Drawing::Size(50, 50);
			this->roja4->TabIndex = 68;
			this->roja4->TabStop = false;
			this->roja4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionRoja);
			// 
			// roja3
			// 
			this->roja3->BackColor = System::Drawing::Color::Black;
			this->roja3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roja3.BackgroundImage")));
			this->roja3->Location = System::Drawing::Point(300, 300);
			this->roja3->Name = L"roja3";
			this->roja3->Size = System::Drawing::Size(50, 50);
			this->roja3->TabIndex = 67;
			this->roja3->TabStop = false;
			this->roja3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionRoja);
			// 
			// roja2
			// 
			this->roja2->BackColor = System::Drawing::Color::Black;
			this->roja2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roja2.BackgroundImage")));
			this->roja2->Location = System::Drawing::Point(200, 300);
			this->roja2->Name = L"roja2";
			this->roja2->Size = System::Drawing::Size(50, 50);
			this->roja2->TabIndex = 66;
			this->roja2->TabStop = false;
			this->roja2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionRoja);
			// 
			// roja1
			// 
			this->roja1->BackColor = System::Drawing::Color::Black;
			this->roja1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"roja1.BackgroundImage")));
			this->roja1->Location = System::Drawing::Point(100, 300);
			this->roja1->Name = L"roja1";
			this->roja1->Size = System::Drawing::Size(50, 50);
			this->roja1->TabIndex = 65;
			this->roja1->TabStop = false;
			this->roja1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionRoja);
			// 
			// azul12
			// 
			this->azul12->BackColor = System::Drawing::Color::Black;
			this->azul12->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"azul12.BackgroundImage")));
			this->azul12->Location = System::Drawing::Point(50, 150);
			this->azul12->Name = L"azul12";
			this->azul12->Size = System::Drawing::Size(50, 50);
			this->azul12->TabIndex = 88;
			this->azul12->TabStop = false;
			this->azul12->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionBlue);
			// 
			// azul11
			// 
			this->azul11->BackColor = System::Drawing::Color::Black;
			this->azul11->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"azul11.BackgroundImage")));
			this->azul11->Location = System::Drawing::Point(150, 150);
			this->azul11->Name = L"azul11";
			this->azul11->Size = System::Drawing::Size(50, 50);
			this->azul11->TabIndex = 87;
			this->azul11->TabStop = false;
			this->azul11->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionBlue);
			// 
			// azul10
			// 
			this->azul10->BackColor = System::Drawing::Color::Black;
			this->azul10->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"azul10.BackgroundImage")));
			this->azul10->Location = System::Drawing::Point(250, 150);
			this->azul10->Name = L"azul10";
			this->azul10->Size = System::Drawing::Size(50, 50);
			this->azul10->TabIndex = 86;
			this->azul10->TabStop = false;
			this->azul10->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionBlue);
			// 
			// azul9
			// 
			this->azul9->BackColor = System::Drawing::Color::Black;
			this->azul9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"azul9.BackgroundImage")));
			this->azul9->Location = System::Drawing::Point(350, 150);
			this->azul9->Name = L"azul9";
			this->azul9->Size = System::Drawing::Size(50, 50);
			this->azul9->TabIndex = 85;
			this->azul9->TabStop = false;
			this->azul9->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionBlue);
			// 
			// azul8
			// 
			this->azul8->BackColor = System::Drawing::Color::Black;
			this->azul8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"azul8.BackgroundImage")));
			this->azul8->Location = System::Drawing::Point(100, 100);
			this->azul8->Name = L"azul8";
			this->azul8->Size = System::Drawing::Size(50, 50);
			this->azul8->TabIndex = 84;
			this->azul8->TabStop = false;
			this->azul8->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionBlue);
			// 
			// azul7
			// 
			this->azul7->BackColor = System::Drawing::Color::Black;
			this->azul7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"azul7.BackgroundImage")));
			this->azul7->Location = System::Drawing::Point(200, 100);
			this->azul7->Name = L"azul7";
			this->azul7->Size = System::Drawing::Size(50, 50);
			this->azul7->TabIndex = 83;
			this->azul7->TabStop = false;
			this->azul7->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionBlue);
			// 
			// azul6
			// 
			this->azul6->BackColor = System::Drawing::Color::Black;
			this->azul6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"azul6.BackgroundImage")));
			this->azul6->Location = System::Drawing::Point(300, 100);
			this->azul6->Name = L"azul6";
			this->azul6->Size = System::Drawing::Size(50, 50);
			this->azul6->TabIndex = 82;
			this->azul6->TabStop = false;
			this->azul6->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionBlue);
			// 
			// azul5
			// 
			this->azul5->BackColor = System::Drawing::Color::Black;
			this->azul5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"azul5.BackgroundImage")));
			this->azul5->Location = System::Drawing::Point(400, 100);
			this->azul5->Name = L"azul5";
			this->azul5->Size = System::Drawing::Size(50, 50);
			this->azul5->TabIndex = 81;
			this->azul5->TabStop = false;
			this->azul5->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionBlue);
			// 
			// azul4
			// 
			this->azul4->BackColor = System::Drawing::Color::Black;
			this->azul4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"azul4.BackgroundImage")));
			this->azul4->Location = System::Drawing::Point(50, 50);
			this->azul4->Name = L"azul4";
			this->azul4->Size = System::Drawing::Size(50, 50);
			this->azul4->TabIndex = 80;
			this->azul4->TabStop = false;
			this->azul4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionBlue);
			// 
			// azul3
			// 
			this->azul3->BackColor = System::Drawing::Color::Black;
			this->azul3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"azul3.BackgroundImage")));
			this->azul3->Location = System::Drawing::Point(150, 50);
			this->azul3->Name = L"azul3";
			this->azul3->Size = System::Drawing::Size(50, 50);
			this->azul3->TabIndex = 79;
			this->azul3->TabStop = false;
			this->azul3->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionBlue);
			// 
			// azul2
			// 
			this->azul2->BackColor = System::Drawing::Color::Black;
			this->azul2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"azul2.BackgroundImage")));
			this->azul2->Location = System::Drawing::Point(250, 50);
			this->azul2->Name = L"azul2";
			this->azul2->Size = System::Drawing::Size(50, 50);
			this->azul2->TabIndex = 78;
			this->azul2->TabStop = false;
			this->azul2->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionBlue);
			// 
			// azul1
			// 
			this->azul1->BackColor = System::Drawing::Color::Black;
			this->azul1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"azul1.BackgroundImage")));
			this->azul1->Location = System::Drawing::Point(350, 50);
			this->azul1->Name = L"azul1";
			this->azul1->Size = System::Drawing::Size(50, 50);
			this->azul1->TabIndex = 77;
			this->azul1->TabStop = false;
			this->azul1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::selectionBlue);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Red;
			this->panel1->Controls->Add(this->button1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(909, 23);
			this->panel1->TabIndex = 89;
			// 
			// button1
			// 
			this->button1->Dock = System::Windows::Forms::DockStyle::Right;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(886, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(23, 23);
			this->button1->TabIndex = 94;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(543, 49);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(139, 20);
			this->textBox1->TabIndex = 90;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(758, 50);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 20);
			this->textBox2->TabIndex = 91;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(469, 53);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 16);
			this->label1->TabIndex = 92;
			this->label1->Text = L"Игрок 1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Mongolian Baiti", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic))));
			this->label2->Location = System::Drawing::Point(688, 53);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 16);
			this->label2->TabIndex = 93;
			this->label2->Text = L"Игрок 2";
			// 
			// bunifuDragControl1
			// 
			this->bunifuDragControl1->Fixed = true;
			this->bunifuDragControl1->Horizontal = true;
			this->bunifuDragControl1->TargetControl = this->panel1;
			this->bunifuDragControl1->Vertical = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(588, 250);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(161, 25);
			this->label3->TabIndex = 94;
			this->label3->Text = L"Правила игры";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(467, 300);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(383, 18);
			this->label5->TabIndex = 96;
			this->label5->Text = L"1)Обычная шашка может ходить только вперед";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(467, 319);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(366, 18);
			this->label4->TabIndex = 97;
			this->label4->Text = L"2)Обычная шашка может бить только вперед";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(467, 337);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(440, 18);
			this->label6->TabIndex = 98;
			this->label6->Text = L"3)Дамка ходит только на одну клетку в любую сторону";
			// 
			// pictureBox65
			// 
			this->pictureBox65->BackColor = System::Drawing::Color::Black;
			this->pictureBox65->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox65.BackgroundImage")));
			this->pictureBox65->Location = System::Drawing::Point(568, 124);
			this->pictureBox65->Name = L"pictureBox65";
			this->pictureBox65->Size = System::Drawing::Size(50, 50);
			this->pictureBox65->TabIndex = 99;
			this->pictureBox65->TabStop = false;
			// 
			// pictureBox66
			// 
			this->pictureBox66->BackColor = System::Drawing::Color::Black;
			this->pictureBox66->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox66.BackgroundImage")));
			this->pictureBox66->Location = System::Drawing::Point(798, 124);
			this->pictureBox66->Name = L"pictureBox66";
			this->pictureBox66->Size = System::Drawing::Size(52, 50);
			this->pictureBox66->TabIndex = 100;
			this->pictureBox66->TabStop = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(565, 100);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(65, 18);
			this->label7->TabIndex = 101;
			this->label7->Text = L"Игрок 1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(795, 100);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(65, 18);
			this->label8->TabIndex = 102;
			this->label8->Text = L"Игрок 2";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(909, 478);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox66);
			this->Controls->Add(this->pictureBox65);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->azul12);
			this->Controls->Add(this->azul11);
			this->Controls->Add(this->azul10);
			this->Controls->Add(this->azul9);
			this->Controls->Add(this->azul8);
			this->Controls->Add(this->azul7);
			this->Controls->Add(this->azul6);
			this->Controls->Add(this->azul5);
			this->Controls->Add(this->azul4);
			this->Controls->Add(this->azul3);
			this->Controls->Add(this->azul2);
			this->Controls->Add(this->azul1);
			this->Controls->Add(this->roja12);
			this->Controls->Add(this->roja11);
			this->Controls->Add(this->roja10);
			this->Controls->Add(this->roja9);
			this->Controls->Add(this->roja8);
			this->Controls->Add(this->roja7);
			this->Controls->Add(this->roja6);
			this->Controls->Add(this->roja5);
			this->Controls->Add(this->roja4);
			this->Controls->Add(this->roja3);
			this->Controls->Add(this->roja2);
			this->Controls->Add(this->roja1);
			this->Controls->Add(this->pictureBox33);
			this->Controls->Add(this->pictureBox34);
			this->Controls->Add(this->pictureBox35);
			this->Controls->Add(this->pictureBox36);
			this->Controls->Add(this->pictureBox37);
			this->Controls->Add(this->pictureBox38);
			this->Controls->Add(this->pictureBox39);
			this->Controls->Add(this->pictureBox40);
			this->Controls->Add(this->pictureBox41);
			this->Controls->Add(this->pictureBox42);
			this->Controls->Add(this->pictureBox43);
			this->Controls->Add(this->pictureBox44);
			this->Controls->Add(this->pictureBox45);
			this->Controls->Add(this->pictureBox46);
			this->Controls->Add(this->pictureBox47);
			this->Controls->Add(this->pictureBox48);
			this->Controls->Add(this->pictureBox49);
			this->Controls->Add(this->pictureBox50);
			this->Controls->Add(this->pictureBox51);
			this->Controls->Add(this->pictureBox52);
			this->Controls->Add(this->pictureBox53);
			this->Controls->Add(this->pictureBox54);
			this->Controls->Add(this->pictureBox55);
			this->Controls->Add(this->pictureBox56);
			this->Controls->Add(this->pictureBox57);
			this->Controls->Add(this->pictureBox58);
			this->Controls->Add(this->pictureBox59);
			this->Controls->Add(this->pictureBox60);
			this->Controls->Add(this->pictureBox61);
			this->Controls->Add(this->pictureBox62);
			this->Controls->Add(this->pictureBox63);
			this->Controls->Add(this->pictureBox64);
			this->Controls->Add(this->pictureBox17);
			this->Controls->Add(this->pictureBox18);
			this->Controls->Add(this->pictureBox19);
			this->Controls->Add(this->pictureBox20);
			this->Controls->Add(this->pictureBox21);
			this->Controls->Add(this->pictureBox22);
			this->Controls->Add(this->pictureBox23);
			this->Controls->Add(this->pictureBox24);
			this->Controls->Add(this->pictureBox25);
			this->Controls->Add(this->pictureBox26);
			this->Controls->Add(this->pictureBox27);
			this->Controls->Add(this->pictureBox28);
			this->Controls->Add(this->pictureBox29);
			this->Controls->Add(this->pictureBox30);
			this->Controls->Add(this->pictureBox31);
			this->Controls->Add(this->pictureBox32);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox10);
			this->Controls->Add(this->pictureBox11);
			this->Controls->Add(this->pictureBox12);
			this->Controls->Add(this->pictureBox13);
			this->Controls->Add(this->pictureBox14);
			this->Controls->Add(this->pictureBox15);
			this->Controls->Add(this->pictureBox16);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox13))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox14))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox15))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox16))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox17))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox18))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox19))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox20))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox21))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox22))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox23))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox24))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox25))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox26))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox27))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox28))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox29))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox30))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox31))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox32))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox33))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox34))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox35))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox36))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox37))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox38))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox39))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox40))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox41))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox42))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox43))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox44))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox45))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox46))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox47))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox48))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox49))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox50))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox51))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox52))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox53))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox54))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox55))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox56))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox57))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox58))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox59))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox60))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox61))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox62))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox63))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox64))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->roja1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul12))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->azul1))->EndInit();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox65))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox66))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	

		int turno = 0;
		PictureBox ^vibrannaya = nullptr;
		int roj;
		int azu;
		List<PictureBox^>^ azules = gcnew List<PictureBox^>();
		List<PictureBox^>^ rojas = gcnew List<PictureBox^>();

		bool movExtra=false;

		private: System::Void carjarListas() {
			azules->Add(azul1);
			azules->Add(azul2);
			azules->Add(azul3);
			azules->Add(azul4);
			azules->Add(azul5);
			azules->Add(azul6);
			azules->Add(azul7);
			azules->Add(azul8);
			azules->Add(azul9);
			azules->Add(azul10);
			azules->Add(azul11);
			azules->Add(azul12);

			rojas->Add(roja1);
			rojas->Add(roja2);
			rojas->Add(roja3);
			rojas->Add(roja4);
			rojas->Add(roja5);
			rojas->Add(roja6);
			rojas->Add(roja7);
			rojas->Add(roja8);
			rojas->Add(roja9);
			rojas->Add(roja10);
			rojas->Add(roja11);
			rojas->Add(roja12);
		}


public: System::Void seleccion(System::Object^  objeto) {
	if (textBox1->Text != "") {
		if (textBox2->Text != "") {
			if (!movExtra) {
				if (vibrannaya != nullptr) vibrannaya->BackColor = Color::Black;

				PictureBox^ ficha = ((PictureBox^)objeto);
				vibrannaya = ficha;
				vibrannaya->BackColor = Color::Aqua;


			}
		}
		else {
			MessageBox::Show("Имя игрока 2 было не введено или удалено,пожалуйста введите имя игрока, чтобы начать или продолжить игру .");
		}
	}
	else {
		MessageBox::Show("Имя игрока 1 было не введено или удалено,пожалуйста введите имя игрока, чтобы начать или продолжить игру .");
	}
	
	
}
	private: System::Void cuadroClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {

			move((PictureBox^)sender);
	
			

	}

	 private: System::Void move(PictureBox^ cuadro) {
	 if (vibrannaya != nullptr) {
	String^ color = vibrannaya->Name->ToString()->Substring(0, 4);
		 if (validation(vibrannaya, cuadro, color))
		 {
			
		 Point^ anterior = vibrannaya->Location;
		 vibrannaya->Location = cuadro->Location;
		 int progress = anterior->Y - cuadro->Location.Y;
		 if (!moveDop(color) |Math::Abs(progress) == 50) {
			 ifqueen(color);
		 turno++;
		 vibrannaya->BackColor = Color::Black;
		 vibrannaya = nullptr;
		 movExtra = false;
		 }
		else {
		 movExtra = true;
		 }
	} }
	}

	private: bool moveDop(String^ color) {
		List<PictureBox^>^ ProtivStorona  = color == "roja" ? azules : rojas;
		List<Point>^ posiciya = gcnew List<Point>();
		int zigzag = color == "roja" ? -100 : 100;
		int x = vibrannaya->Location.X + 100;
		int y = vibrannaya->Location.Y + zigzag;
		posiciya->Add(*new Point(x, y));
		if (vibrannaya->Tag == "queen") {
			posiciya->Add(*new Point(vibrannaya->Location.X + 100, vibrannaya->Location.Y - zigzag));
			posiciya->Add(*new Point(vibrannaya->Location.X - 100, vibrannaya->Location.Y - zigzag));
		}
		bool result = false;
		for (int i = 0; i < posiciya->Count; i++) {
			if (posiciya[i].X >= 50 && posiciya[i].X <= 400 && posiciya[i].Y >= 50 && posiciya[i].Y <= 400) {
				if (!zanyatiy(posiciya[i], rojas) && !zanyatiy(posiciya[i], azules)) {
					Point mediumpoint =  *new  Point(srednee(posiciya[i].X, vibrannaya->Location.X), srednee(posiciya[i].Y, vibrannaya->Location.Y));								
							if (zanyatiy(mediumpoint, ProtivStorona)) {
						result = true;
					}
				}
			}
		}
		return result;
	}

	public: bool zanyatiy(Point^ punto, List<PictureBox^>^ bando) {
		for (int i = 0; i < bando->Count; i++) {
			if (punto ==bando[i]->Location) {
				return true;
				}
		}

		return false;
	}



	private: int srednee(int n1, int n2) {
		int result= n1+n2;
		result = result/ 2;
		return Math::Abs(result);

	}
	private:bool validation(PictureBox^ origen, PictureBox^ destino, System::String^ color) {
		Point^ pointproisxojdenia = origen->Location;
		Point^ pointNaznachenia = destino->Location;
		int progress = pointproisxojdenia->Y - pointNaznachenia->Y;
		progress = color == "roja" ? progress : (progress * -1);
		progress = vibrannaya->Tag == "queen" ? Math::Abs(progress) : progress;
		if (progress == 50) {
			return true;
		}
		else if (progress == 100) {
			Point mediumpoint =*new  Point(srednee(pointNaznachenia->X, pointproisxojdenia->X), srednee(pointNaznachenia->Y, pointproisxojdenia->Y));
			List<PictureBox^>^ ProtivStorona = color == "roja" ? azules : rojas;
			for (int i = 0; i < ProtivStorona->Count; i++) {
				if (ProtivStorona[i]->Location==mediumpoint) {
					ProtivStorona[i]->Location =*new  Point(0, 0);
					ProtivStorona[i]->Visible = false;
					if (color == "roja") {
						azu = azu - 1;
						if (azu == 0) {
							MessageBox::Show("Победили Белые");
							String^ fileName = "D:\\Шашки.txt";

							StreamWriter^ sw = gcnew StreamWriter(fileName);
							sw->WriteLine("Победили Белые");
							sw->Write("Играли:{0}/{1}->{2}        ", textBox1->Text, textBox2->Text, textBox1->Text);
							sw->WriteLine(DateTime::Now);
							sw->Close();
						
						}
					}
					if (color == "azul") {
						roj = roj - 1;
						if (roj == 0) {
							MessageBox::Show("Победили Синие");
							String^ fileName = "D:\\Шашки.txt";

							StreamWriter^ sw = gcnew StreamWriter(fileName);
							sw->WriteLine("Победили Синиие");
							sw->Write("Играли:{0}/{1}->{2}        ", textBox1->Text, textBox2->Text, textBox2->Text);
							sw->WriteLine(DateTime::Now);
							sw->Close();
						}
					}
					
					return true;
				}
			}
		}
		return false;
	}
			
	private: System::Void ifqueen(String^ color) {
		if (color == "azul" && vibrannaya->Location.Y == 400) {
			vibrannaya->BackgroundImage = Image::FromFile("circle/blue.png");				
			vibrannaya->Tag = "queen";
		}
		else if (color == "roja" && vibrannaya->Location.Y == 50) {
			vibrannaya->BackgroundImage = Image::FromFile("circle/white.png");
			vibrannaya->Tag = "queen";
		}

	}
private: System::Void selectionBlue(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (turno % 2 == 1) {
		seleccion(sender);
}
	else {
		MessageBox::Show("Сейчас ходят белые (Игрок 1)");
	}

}

private: System::Void selectionRoja(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (turno % 2 == 0) {
		seleccion(sender);
	}
	else {
		MessageBox::Show("Сейчас ходят синие (Игрок 2)");
	}
	
}
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	Application::Exit();
}
};
}
