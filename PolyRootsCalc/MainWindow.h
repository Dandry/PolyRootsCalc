#pragma once

namespace PolyRootsCalc {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^  zamknijToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  loadToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pomocToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  oProgramieToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  helpButton;

	private: System::Windows::Forms::ToolTip^  helpToolTip;
	private: System::ComponentModel::IContainer^  components;
	private: System::Windows::Forms::Label^  initApproxLabel;

	private: System::Windows::Forms::Label^  maxIterationsLabel;
	private: System::Windows::Forms::Label^  toleranceLabel;
	private: System::Windows::Forms::NumericUpDown^  initApproxNumUpDown;
	private: System::Windows::Forms::NumericUpDown^  maxIterationsNumUpDown;
	private: System::Windows::Forms::NumericUpDown^  toleranceNumUpDown;
	private: System::Windows::Forms::Button^  calculateButton;
	private: System::Windows::Forms::TextBox^  resultsTextBox;

	private: System::Windows::Forms::Label^  resultsLabel;
	private: System::Windows::Forms::Label^  copyrightLabel;











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		String^ helpToolTipText = L"WprowadŸ wspó³czynniki wielomianu oddzielone spacj¹,\n a kolejne wielomiany w nowych wierszach";

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->zamknijToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pomocToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->oProgramieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->helpButton = (gcnew System::Windows::Forms::Button());
			this->helpToolTip = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->initApproxLabel = (gcnew System::Windows::Forms::Label());
			this->maxIterationsLabel = (gcnew System::Windows::Forms::Label());
			this->toleranceLabel = (gcnew System::Windows::Forms::Label());
			this->initApproxNumUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->maxIterationsNumUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->toleranceNumUpDown = (gcnew System::Windows::Forms::NumericUpDown());
			this->calculateButton = (gcnew System::Windows::Forms::Button());
			this->resultsTextBox = (gcnew System::Windows::Forms::TextBox());
			this->resultsLabel = (gcnew System::Windows::Forms::Label());
			this->copyrightLabel = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->initApproxNumUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxIterationsNumUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toleranceNumUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(25, 50);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox1->Size = System::Drawing::Size(260, 83);
			this->textBox1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->pomocToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(310, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->loadToolStripMenuItem,
					this->saveToolStripMenuItem, this->zamknijToolStripMenuItem
			});
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(38, 20);
			this->toolStripMenuItem1->Text = L"Plik";
			// 
			// loadToolStripMenuItem
			// 
			this->loadToolStripMenuItem->Name = L"loadToolStripMenuItem";
			this->loadToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->loadToolStripMenuItem->Text = L"Wczytaj...";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->saveToolStripMenuItem->Text = L"Zapisz...";
			// 
			// zamknijToolStripMenuItem
			// 
			this->zamknijToolStripMenuItem->Name = L"zamknijToolStripMenuItem";
			this->zamknijToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->zamknijToolStripMenuItem->Text = L"Zamknij";
			// 
			// pomocToolStripMenuItem
			// 
			this->pomocToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->oProgramieToolStripMenuItem });
			this->pomocToolStripMenuItem->Name = L"pomocToolStripMenuItem";
			this->pomocToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->pomocToolStripMenuItem->Text = L"Pomoc";
			// 
			// oProgramieToolStripMenuItem
			// 
			this->oProgramieToolStripMenuItem->Name = L"oProgramieToolStripMenuItem";
			this->oProgramieToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->oProgramieToolStripMenuItem->Text = L"O programie";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label1->Location = System::Drawing::Point(22, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(186, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"WprowadŸ wspó³czynniki wielomianu:";
			// 
			// helpButton
			// 
			this->helpButton->BackColor = System::Drawing::SystemColors::Control;
			this->helpButton->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"helpButton.BackgroundImage")));
			this->helpButton->FlatAppearance->BorderColor = System::Drawing::SystemColors::Control;
			this->helpButton->FlatAppearance->BorderSize = 0;
			this->helpButton->FlatAppearance->MouseDownBackColor = System::Drawing::SystemColors::Control;
			this->helpButton->FlatAppearance->MouseOverBackColor = System::Drawing::SystemColors::Control;
			this->helpButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->helpButton->ForeColor = System::Drawing::SystemColors::Control;
			this->helpButton->Location = System::Drawing::Point(267, 30);
			this->helpButton->Name = L"helpButton";
			this->helpButton->Size = System::Drawing::Size(18, 18);
			this->helpButton->TabIndex = 3;
			this->helpButton->UseVisualStyleBackColor = false;
			this->helpButton->Click += gcnew System::EventHandler(this, &MainWindow::helpButton_Click);
			this->helpButton->MouseEnter += gcnew System::EventHandler(this, &MainWindow::helpButton_MouseEnter);
			this->helpButton->MouseLeave += gcnew System::EventHandler(this, &MainWindow::helpButton_MouseLeave);
			// 
			// helpToolTip
			// 
			this->helpToolTip->AutomaticDelay = 0;
			this->helpToolTip->ShowAlways = true;
			// 
			// initApproxLabel
			// 
			this->initApproxLabel->AutoSize = true;
			this->initApproxLabel->Location = System::Drawing::Point(22, 154);
			this->initApproxLabel->Name = L"initApproxLabel";
			this->initApproxLabel->Size = System::Drawing::Size(126, 13);
			this->initApproxLabel->TabIndex = 4;
			this->initApproxLabel->Text = L"Pocz¹tkowe przybli¿enie:";
			// 
			// maxIterationsLabel
			// 
			this->maxIterationsLabel->AutoSize = true;
			this->maxIterationsLabel->Location = System::Drawing::Point(22, 180);
			this->maxIterationsLabel->Name = L"maxIterationsLabel";
			this->maxIterationsLabel->Size = System::Drawing::Size(132, 13);
			this->maxIterationsLabel->TabIndex = 5;
			this->maxIterationsLabel->Text = L"Maksymalna liczba iteracji:";
			// 
			// toleranceLabel
			// 
			this->toleranceLabel->AutoSize = true;
			this->toleranceLabel->Location = System::Drawing::Point(22, 206);
			this->toleranceLabel->Name = L"toleranceLabel";
			this->toleranceLabel->Size = System::Drawing::Size(133, 13);
			this->toleranceLabel->TabIndex = 6;
			this->toleranceLabel->Text = L"Dok³adnoœæ wyznaczenia:";
			// 
			// initApproxNumUpDown
			// 
			this->initApproxNumUpDown->DecimalPlaces = 2;
			this->initApproxNumUpDown->Location = System::Drawing::Point(198, 152);
			this->initApproxNumUpDown->Name = L"initApproxNumUpDown";
			this->initApproxNumUpDown->Size = System::Drawing::Size(87, 20);
			this->initApproxNumUpDown->TabIndex = 7;
			this->initApproxNumUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			// 
			// maxIterationsNumUpDown
			// 
			this->maxIterationsNumUpDown->Location = System::Drawing::Point(198, 178);
			this->maxIterationsNumUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->maxIterationsNumUpDown->Name = L"maxIterationsNumUpDown";
			this->maxIterationsNumUpDown->Size = System::Drawing::Size(87, 20);
			this->maxIterationsNumUpDown->TabIndex = 8;
			this->maxIterationsNumUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			// 
			// toleranceNumUpDown
			// 
			this->toleranceNumUpDown->DecimalPlaces = 4;
			this->toleranceNumUpDown->Location = System::Drawing::Point(198, 204);
			this->toleranceNumUpDown->Name = L"toleranceNumUpDown";
			this->toleranceNumUpDown->Size = System::Drawing::Size(87, 20);
			this->toleranceNumUpDown->TabIndex = 9;
			this->toleranceNumUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 262144 });
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(25, 243);
			this->calculateButton->Name = L"calculateButton";
			this->calculateButton->Size = System::Drawing::Size(260, 42);
			this->calculateButton->TabIndex = 10;
			this->calculateButton->Text = L"Oblicz";
			this->calculateButton->UseVisualStyleBackColor = true;
			this->calculateButton->Click += gcnew System::EventHandler(this, &MainWindow::calculateButton_Click);
			// 
			// resultsTextBox
			// 
			this->resultsTextBox->Location = System::Drawing::Point(25, 318);
			this->resultsTextBox->Multiline = true;
			this->resultsTextBox->Name = L"resultsTextBox";
			this->resultsTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->resultsTextBox->Size = System::Drawing::Size(260, 216);
			this->resultsTextBox->TabIndex = 11;
			// 
			// resultsLabel
			// 
			this->resultsLabel->AutoSize = true;
			this->resultsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->resultsLabel->Location = System::Drawing::Point(22, 300);
			this->resultsLabel->Name = L"resultsLabel";
			this->resultsLabel->Size = System::Drawing::Size(39, 13);
			this->resultsLabel->TabIndex = 12;
			this->resultsLabel->Text = L"Wyniki";
			// 
			// copyrightLabel
			// 
			this->copyrightLabel->AutoSize = true;
			this->copyrightLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->copyrightLabel->Location = System::Drawing::Point(1, 543);
			this->copyrightLabel->Name = L"copyrightLabel";
			this->copyrightLabel->Size = System::Drawing::Size(267, 13);
			this->copyrightLabel->TabIndex = 13;
			this->copyrightLabel->Tag = L"";
			this->copyrightLabel->Text = L"© Daniel Andraszewski, Politechnika Warszawska, 2018";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(310, 557);
			this->Controls->Add(this->copyrightLabel);
			this->Controls->Add(this->resultsLabel);
			this->Controls->Add(this->helpButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->resultsTextBox);
			this->Controls->Add(this->calculateButton);
			this->Controls->Add(this->toleranceNumUpDown);
			this->Controls->Add(this->maxIterationsNumUpDown);
			this->Controls->Add(this->initApproxNumUpDown);
			this->Controls->Add(this->toleranceLabel);
			this->Controls->Add(this->maxIterationsLabel);
			this->Controls->Add(this->initApproxLabel);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MainWindow";
			this->Text = L"Stare idee nie rdzewiej¹...";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->initApproxNumUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxIterationsNumUpDown))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toleranceNumUpDown))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		System::Void helpButton_MouseEnter(System::Object^  sender, System::EventArgs^  e) 
		{
			helpToolTip->Show(helpToolTipText, helpButton);
		}

		System::Void helpButton_MouseLeave(System::Object^  sender, System::EventArgs^  e) 
		{
			helpToolTip->Hide(this);
		}
		
		System::Void helpButton_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			helpToolTip->Show(helpToolTipText, helpButton);
		}

		System::Void calculateButton_Click(System::Object^  sender, System::EventArgs^  e) 
		{
			
		}
	};
}
