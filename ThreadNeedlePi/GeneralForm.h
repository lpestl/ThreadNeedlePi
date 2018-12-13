#include "ThreadTable.h"
#include "Needle.h"
#include <stdio.h>
#include <math.h>

#pragma once

namespace ThreadNeedlePi {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GeneralForm
	/// </summary>
	public ref class GeneralForm : public System::Windows::Forms::Form
	{
	public:
		GeneralForm(void)
		{
			InitializeComponent();

			//using namespace System::Runtime::InteropServices;
			//// Задаем имя для временного файла (буфер)
			//System::String ^len = textBoxL->Text;
			//const char *lenNeedle = (const char*)(void*)Marshal::StringToHGlobalAnsi(len);

			//ThreadTable newTabel(atoi(lenNeedle), 10, 10, pictureBoxTable->Width - 20, pictureBoxTable->Height - 20);
			////table = newTabel;

			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~GeneralForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBoxSettings;
	protected:

	private: System::Windows::Forms::Label^  labelM;



	private: System::Windows::Forms::TextBox^  textBoxM;
	private: System::Windows::Forms::Label^  labelLmetr;
	private: System::Windows::Forms::Label^  labelMmetr;

	private: System::Windows::Forms::TextBox^  textBoxL;
	private: System::Windows::Forms::Label^  labelL;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::Label^  labelWhere1;
	private: System::Windows::Forms::GroupBox^  groupBoxTest;




	private: System::Windows::Forms::PictureBox^  pictureBoxTable;
	private: System::Windows::Forms::Button^  buttonExit;
	private: System::Windows::Forms::Button^  startButton;
	private: System::Windows::Forms::PictureBox^  pictureBoxGraph;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;


	//private: System::Void drawningTable();



	protected:

	private:
		//ThreadTable table;
		//Needle* needles;

		//System::Void startSimulate();

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
			this->groupBoxSettings = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->labelWhere1 = (gcnew System::Windows::Forms::Label());
			this->labelLmetr = (gcnew System::Windows::Forms::Label());
			this->labelMmetr = (gcnew System::Windows::Forms::Label());
			this->textBoxL = (gcnew System::Windows::Forms::TextBox());
			this->labelL = (gcnew System::Windows::Forms::Label());
			this->textBoxM = (gcnew System::Windows::Forms::TextBox());
			this->labelM = (gcnew System::Windows::Forms::Label());
			this->groupBoxTest = (gcnew System::Windows::Forms::GroupBox());
			this->pictureBoxGraph = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBoxTable = (gcnew System::Windows::Forms::PictureBox());
			this->startButton = (gcnew System::Windows::Forms::Button());
			this->buttonExit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBoxSettings->SuspendLayout();
			this->groupBoxTest->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGraph))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTable))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBoxSettings
			// 
			this->groupBoxSettings->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxSettings->Controls->Add(this->label2);
			this->groupBoxSettings->Controls->Add(this->label1);
			this->groupBoxSettings->Controls->Add(this->labelWhere1);
			this->groupBoxSettings->Controls->Add(this->labelLmetr);
			this->groupBoxSettings->Controls->Add(this->labelMmetr);
			this->groupBoxSettings->Controls->Add(this->textBoxL);
			this->groupBoxSettings->Controls->Add(this->labelL);
			this->groupBoxSettings->Controls->Add(this->textBoxM);
			this->groupBoxSettings->Controls->Add(this->labelM);
			this->groupBoxSettings->Location = System::Drawing::Point(12, 8);
			this->groupBoxSettings->Name = L"groupBoxSettings";
			this->groupBoxSettings->Size = System::Drawing::Size(735, 80);
			this->groupBoxSettings->TabIndex = 0;
			this->groupBoxSettings->TabStop = false;
			this->groupBoxSettings->Text = L"Параметры эксперимента";
			// 
			// label2
			// 
			this->label2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(477, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(252, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"L - длинна иголки и расстояние между нитками.";
			// 
			// label1
			// 
			this->label1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(477, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(188, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"M - количество иголок (испытаний),";
			// 
			// labelWhere1
			// 
			this->labelWhere1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->labelWhere1->AutoSize = true;
			this->labelWhere1->Location = System::Drawing::Point(447, 22);
			this->labelWhere1->Name = L"labelWhere1";
			this->labelWhere1->Size = System::Drawing::Size(24, 13);
			this->labelWhere1->TabIndex = 9;
			this->labelWhere1->Text = L"где";
			// 
			// labelLmetr
			// 
			this->labelLmetr->AutoSize = true;
			this->labelLmetr->Location = System::Drawing::Point(135, 51);
			this->labelLmetr->Name = L"labelLmetr";
			this->labelLmetr->Size = System::Drawing::Size(59, 13);
			this->labelLmetr->TabIndex = 8;
			this->labelLmetr->Text = L"пикс. / см";
			// 
			// labelMmetr
			// 
			this->labelMmetr->AutoSize = true;
			this->labelMmetr->Location = System::Drawing::Point(135, 22);
			this->labelMmetr->Name = L"labelMmetr";
			this->labelMmetr->Size = System::Drawing::Size(22, 13);
			this->labelMmetr->TabIndex = 7;
			this->labelMmetr->Text = L"ед.";
			// 
			// textBoxL
			// 
			this->textBoxL->Location = System::Drawing::Point(29, 48);
			this->textBoxL->Name = L"textBoxL";
			this->textBoxL->Size = System::Drawing::Size(100, 20);
			this->textBoxL->TabIndex = 5;
			this->textBoxL->Text = L"10";
			// 
			// labelL
			// 
			this->labelL->AutoSize = true;
			this->labelL->Location = System::Drawing::Point(5, 51);
			this->labelL->Name = L"labelL";
			this->labelL->Size = System::Drawing::Size(22, 13);
			this->labelL->TabIndex = 4;
			this->labelL->Text = L"L =";
			// 
			// textBoxM
			// 
			this->textBoxM->Location = System::Drawing::Point(29, 19);
			this->textBoxM->Name = L"textBoxM";
			this->textBoxM->Size = System::Drawing::Size(100, 20);
			this->textBoxM->TabIndex = 3;
			this->textBoxM->Text = L"2000";
			// 
			// labelM
			// 
			this->labelM->AutoSize = true;
			this->labelM->Location = System::Drawing::Point(5, 22);
			this->labelM->Name = L"labelM";
			this->labelM->Size = System::Drawing::Size(25, 13);
			this->labelM->TabIndex = 2;
			this->labelM->Text = L"M =";
			// 
			// groupBoxTest
			// 
			this->groupBoxTest->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->groupBoxTest->Controls->Add(this->label6);
			this->groupBoxTest->Controls->Add(this->label8);
			this->groupBoxTest->Controls->Add(this->label5);
			this->groupBoxTest->Controls->Add(this->label4);
			this->groupBoxTest->Controls->Add(this->label3);
			this->groupBoxTest->Controls->Add(this->pictureBoxGraph);
			this->groupBoxTest->Controls->Add(this->pictureBoxTable);
			this->groupBoxTest->Location = System::Drawing::Point(12, 94);
			this->groupBoxTest->Name = L"groupBoxTest";
			this->groupBoxTest->Size = System::Drawing::Size(734, 487);
			this->groupBoxTest->TabIndex = 1;
			this->groupBoxTest->TabStop = false;
			this->groupBoxTest->Text = L"Визуализация эксперимента";
			// 
			// pictureBoxGraph
			// 
			this->pictureBoxGraph->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBoxGraph->BackColor = System::Drawing::Color::Black;
			this->pictureBoxGraph->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxGraph->Location = System::Drawing::Point(8, 208);
			this->pictureBoxGraph->Name = L"pictureBoxGraph";
			this->pictureBoxGraph->Size = System::Drawing::Size(720, 230);
			this->pictureBoxGraph->TabIndex = 1;
			this->pictureBoxGraph->TabStop = false;
			// 
			// pictureBoxTable
			// 
			this->pictureBoxTable->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBoxTable->BackColor = System::Drawing::Color::White;
			this->pictureBoxTable->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBoxTable->Location = System::Drawing::Point(8, 19);
			this->pictureBoxTable->Name = L"pictureBoxTable";
			this->pictureBoxTable->Size = System::Drawing::Size(720, 183);
			this->pictureBoxTable->TabIndex = 0;
			this->pictureBoxTable->TabStop = false;
			// 
			// startButton
			// 
			this->startButton->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->startButton->Location = System::Drawing::Point(18, 589);
			this->startButton->Name = L"startButton";
			this->startButton->Size = System::Drawing::Size(188, 23);
			this->startButton->TabIndex = 2;
			this->startButton->Text = L"Запуск эксперемента";
			this->startButton->UseVisualStyleBackColor = true;
			this->startButton->Click += gcnew System::EventHandler(this, &GeneralForm::button1_Click);
			// 
			// buttonExit
			// 
			this->buttonExit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->buttonExit->Location = System::Drawing::Point(647, 589);
			this->buttonExit->Name = L"buttonExit";
			this->buttonExit->Size = System::Drawing::Size(94, 23);
			this->buttonExit->TabIndex = 3;
			this->buttonExit->Text = L"Выход";
			this->buttonExit->UseVisualStyleBackColor = true;
			this->buttonExit->Click += gcnew System::EventHandler(this, &GeneralForm::buttonExit_Click);
			// 
			// label3
			// 
			this->label3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 441);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(263, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"отношение количества иголок, попавших на нити, ";
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 454);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(214, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"к общему количеству брошенных иголок";
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 467);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(213, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"(Number of crossing / total needles thrown) ";
			// 
			// label6
			// 
			this->label6->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(559, 454);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(50, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"(piCross) ";
			// 
			// label8
			// 
			this->label8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(447, 441);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(276, 13);
			this->label8->TabIndex = 5;
			this->label8->Text = L"разделим двойку на каждое число полученного ряда";
			// 
			// GeneralForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(759, 624);
			this->Controls->Add(this->buttonExit);
			this->Controls->Add(this->startButton);
			this->Controls->Add(this->groupBoxTest);
			this->Controls->Add(this->groupBoxSettings);
			this->Name = L"GeneralForm";
			this->Text = L"Симуляция нахождения числа PI экспериментальным способом";
			this->groupBoxSettings->ResumeLayout(false);
			this->groupBoxSettings->PerformLayout();
			this->groupBoxTest->ResumeLayout(false);
			this->groupBoxTest->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxGraph))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBoxTable))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		//startSimulate();
				 
				 //using namespace System::Runtime::InteropServices;
				 ////// Задаем имя для временного файла (буфер)
				 //System::String ^len = textBoxL->Text;
				 //const char *lenNeedle = (const char*)(void*)Marshal::StringToHGlobalAnsi(len);

				 ThreadTable newTabel(float::Parse(textBoxL->Text), 10, 10, pictureBoxTable->Width - 20, pictureBoxTable->Height - 20);

				 Pen^ pen = gcnew Pen(Color::Green, 1);
				 Brush^ whiteBrush = gcnew SolidBrush(Color::White);
				 Brush^ blackBrush = gcnew SolidBrush(Color::Black);
				 Brush^ redBrush = gcnew SolidBrush(Color::Red);
				 Pen^ whitePen = gcnew Pen(Color::White, 1);
				 Pen^ bluePen = gcnew Pen(Color::Blue, 1);
				 Pen^ redPen = gcnew Pen(Color::Red, 1);
				 //Pen^ blackPen = gcnew Pen(Color::Black, 1);

				 Graphics^ g = pictureBoxTable->CreateGraphics();
				 Graphics^ g2 = pictureBoxGraph->CreateGraphics();

				 g->FillRectangle(whiteBrush, 0, 0, pictureBoxTable->Width, pictureBoxTable->Height);

				 //g->DrawLine(pen, currCam->getPoint2f(0).x / 2, currCam->getPoint2f(0).y / 2, currCam->getPoint2f(1).x / 2, currCam->getPoint2f(1).y / 2);
				 for (int i = 0; i < newTabel.getCount(); i++) {
					 g->DrawLine(pen, (float)newTabel.getNumThreadX(i), (float)newTabel.getMinY(), 
						 (float)newTabel.getNumThreadX(i), (float)newTabel.getMaxY());
				 }

				 g2->FillRectangle(blackBrush, 0, 0, pictureBoxGraph->Width, pictureBoxGraph->Height);
				 
				 g2->DrawLine(whitePen, 20, 10, (pictureBoxTable->Width / 2 - 30), 10/*pictureBoxTable->Height - 30*/);
				 g2->DrawLine(whitePen, (pictureBoxTable->Width / 2 - 30), 10, (pictureBoxGraph->Width / 2 - 30), pictureBoxGraph->Height - 30);
				 g2->DrawLine(whitePen, 20, pictureBoxGraph->Height - 30, (pictureBoxTable->Width / 2 - 30), pictureBoxGraph->Height - 30);
				 g2->DrawLine(whitePen, 20, 10, 20, pictureBoxGraph->Height - 30);

				 g2->DrawLine(whitePen, 20 + pictureBoxTable->Width / 2, 10, (pictureBoxTable->Width / 2 - 30) + pictureBoxTable->Width / 2, 10/*pictureBoxTable->Height - 30*/);
				 g2->DrawLine(whitePen, (pictureBoxTable->Width / 2 - 30) + pictureBoxTable->Width / 2, 10, (pictureBoxGraph->Width / 2 - 30) + pictureBoxTable->Width / 2, pictureBoxGraph->Height - 30);
				 g2->DrawLine(whitePen, 20 + pictureBoxTable->Width / 2, pictureBoxGraph->Height - 30, (pictureBoxTable->Width / 2 - 30) + pictureBoxTable->Width / 2, pictureBoxGraph->Height - 30);
				 g2->DrawLine(whitePen, 20 + pictureBoxTable->Width / 2, 10, 20 + pictureBoxTable->Width / 2, pictureBoxGraph->Height - 30);

				 System::String^ str = "0.5";
				 System::Drawing::Font^ fn = gcnew System::Drawing::Font(FontFamily::GenericSansSerif, 8.0F, FontStyle::Bold);
				 
				 for (int i = 0; i < 6; i++) {
					 g2->DrawLine(whitePen, 15, (pictureBoxGraph->Height - 30) - (pictureBoxGraph->Height - 40) / 5 * i,
						 20, (pictureBoxGraph->Height - 30) - (pictureBoxGraph->Height - 40) / 5 * i);
					 float num = 0.5 + i*0.1;
					 str = "" + num;
					 g2->DrawString(str, fn, whiteBrush, 0, (pictureBoxGraph->Height - 30) - (pictureBoxGraph->Height - 40) / 5 * i);
				 }

				 float M = float::Parse(textBoxM->Text);
				 for (int i = 0; i < 6; i++) {
					 g2->DrawLine(whitePen, 20 + (pictureBoxTable->Width / 2 - 50) / 5 * i, (pictureBoxGraph->Height - 30),
						 20 + (pictureBoxTable->Width / 2 - 50) / 5 * i, (pictureBoxGraph->Height - 30) + 5);
					 float num = M / 5 * i;
					 str = "" + num;
					 g2->DrawString(str, fn, whiteBrush, 20 + (pictureBoxTable->Width / 2 - 50) / 5 * i, (pictureBoxGraph->Height - 30));
				 }

				 long double M_PI = acos((long double)-1);
				 g2->DrawLine(bluePen, 20, (pictureBoxGraph->Height - 30) - (pictureBoxGraph->Height - 40) / 5 * ((2 / M_PI - 0.5) * 10), 
					 (pictureBoxTable->Width / 2 - 30), (pictureBoxGraph->Height - 30) - (pictureBoxGraph->Height - 40) / 5 * ((2 / M_PI - 0.5) * 10));

				 for (int i = 0; i < 4; i++) {
					 g2->DrawLine(whitePen, 15 + pictureBoxTable->Width / 2, (pictureBoxGraph->Height - 30) - (pictureBoxGraph->Height - 40) / 3 * i,
						 20 + pictureBoxTable->Width / 2, (pictureBoxGraph->Height - 30) - (pictureBoxGraph->Height - 40) / 3 * i);
					 float num = 2 + i*1;
					 str = "" + num;
					 g2->DrawString(str, fn, whiteBrush, + pictureBoxTable->Width / 2, (pictureBoxGraph->Height - 30) - (pictureBoxGraph->Height - 40) / 3 * i);
				 }

				 for (int i = 0; i < 6; i++) {
					 g2->DrawLine(whitePen, 20 + (pictureBoxTable->Width / 2 - 50) / 5 * i + pictureBoxTable->Width / 2, (pictureBoxGraph->Height - 30),
						 20 + (pictureBoxTable->Width / 2 - 50) / 5 * i + pictureBoxTable->Width / 2, (pictureBoxGraph->Height - 30) + 5);
					 float num = M / 5 * i;
					 str = "" + num;
					 g2->DrawString(str, fn, whiteBrush, 20 + (pictureBoxTable->Width / 2 - 50) / 5 * i + pictureBoxTable->Width / 2, (pictureBoxGraph->Height - 30));
				 }

				 g2->DrawLine(bluePen, 20 + pictureBoxTable->Width / 2, (pictureBoxGraph->Height - 30) - (pictureBoxGraph->Height - 40) / 3 * (M_PI - 2),
					 pictureBoxTable->Width - 30, (pictureBoxGraph->Height - 30) - (pictureBoxGraph->Height - 40) / 3 * (M_PI - 2));

				 int countNeedle = int::Parse(textBoxM->Text);
				 int intersNeedle = 1;
				 float curr, next;
				 Needle *needles = new Needle[countNeedle];
				 for (int i = 0; i < countNeedle; i++) {
					 needles[i].creating(float::Parse(textBoxL->Text), 10, 10, pictureBoxTable->Width - 20, pictureBoxTable->Height - 20);
					 needles[i].checkedInto(10, 10, pictureBoxTable->Width - 20, pictureBoxTable->Height - 20);

					 bool intersection = false;
					 for (int j = 0; j < newTabel.getCount(); j++) {
						 if ((needles[i].getStartX() <= newTabel.getNumThreadX(j)) &&
							 (needles[i].getFinX() > newTabel.getNumThreadX(j))) {
							 intersection = true;
							 break;
						 }
						 if ((needles[i].getStartX() >= newTabel.getNumThreadX(j)) &&
							 (needles[i].getFinX() < newTabel.getNumThreadX(j))) {
							 intersection = true;
							 break;
						 }
					 }

					 curr = (float)intersNeedle / (i+1);

					 if (intersection) {
						 g->DrawLine(redPen, (float)needles[i].getStartX(), (float)needles[i].getStartY(),
							 (float)needles[i].getFinX(), (float)needles[i].getFinY());
						 intersNeedle++;
					 }
					 else {
						 g->DrawLine(bluePen, (float)needles[i].getStartX(), (float)needles[i].getStartY(),
							 (float)needles[i].getFinX(), (float)needles[i].getFinY());
					 }
					 
					 next = (float)intersNeedle / (i + 2);
					 //g2->FillRectangle(redBrush, (int)(20 + ((float)pictureBoxTable->Width / 2 - 50) / countNeedle * i), (int)((pictureBoxGraph->Height - 30) - (float)(pictureBoxGraph->Height - 40) / 5 * ((curr - 0.5) * 10)), 1, 1);
					 g2->DrawLine(redPen, (int)(20 + ((float)pictureBoxTable->Width / 2 - 50) / countNeedle * i), (int)((pictureBoxGraph->Height - 30) - (float)(pictureBoxGraph->Height - 40) / 5 * ((curr - 0.5) * 10)),
						 (int)(20 + ((float)pictureBoxTable->Width / 2 - 50) / countNeedle * (i + 1)), (int)((pictureBoxGraph->Height - 30) - (float)(pictureBoxGraph->Height - 40) / 5 * ((next - 0.5) * 10)));

					 g2->DrawLine(redPen, (int)(20 + pictureBoxTable->Width / 2 + ((float)pictureBoxTable->Width / 2 - 50) / countNeedle * i), (int)((pictureBoxGraph->Height - 30) - (float)(pictureBoxGraph->Height - 40) / 3 * ((float)2 / curr - 2)),
						 (int)(20 + pictureBoxTable->Width / 2 + ((float)pictureBoxTable->Width / 2 - 50) / countNeedle * (i + 1)), (int)((pictureBoxGraph->Height - 30) - (float)(pictureBoxGraph->Height - 40) / 3 * ((float)2 / next - 2)));
				 }
				 delete [] needles;
	}

	private: System::Void buttonExit_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	//private: System::Void startSimulate() {
	//	//this->MessageBox(0,"dsds","Text", 0);
	//	printf("Text");
	//}
};
}
