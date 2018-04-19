#pragma once

#include <msclr\marshal_cppstd.h>
#include "CRootCalculator.h"
#include "CInputParser.h"
#include "MethodType.h"
#include "CFileManager.h"

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
			this->methodComboBox->SelectedIndex = 0; //metoda Newtona
			//
			//TODO: Add the constructor code here
			//

			rootCalculator = new CRootCalculator(getInitApproximation(), getMaxIterations(), getTolerance(), getTolerancePrecision());
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

			delete rootCalculator;
		}
	private: System::Windows::Forms::TextBox^  inputTextBox;
	protected:

	protected:
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  closeToolStripMenuItem;

	private: System::Windows::Forms::ToolStripMenuItem^  loadPolyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  savePolyToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;



	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;

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
	private: System::Windows::Forms::ComboBox^  methodComboBox;

	private: System::Windows::Forms::Label^  methodLabel;











	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::Windows::Forms::Button^  clearBtn;
		System::Windows::Forms::OpenFileDialog^  openPolyFileDialog;
		System::Windows::Forms::SaveFileDialog^  savePolyFileDialog;
		System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;

		String^ helpToolTipText = L"WprowadŸ wspó³czynniki wielomianu oddzielone spacj¹,\n a kolejne wielomiany w nowych wierszach";
		CRootCalculator* rootCalculator;


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->inputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->loadPolyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->savePolyToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->closeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->methodComboBox = (gcnew System::Windows::Forms::ComboBox());
			this->methodLabel = (gcnew System::Windows::Forms::Label());
			this->clearBtn = (gcnew System::Windows::Forms::Button());
			this->openPolyFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->savePolyFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->initApproxNumUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->maxIterationsNumUpDown))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->toleranceNumUpDown))->BeginInit();
			this->SuspendLayout();
			// 
			// inputTextBox
			// 
			this->inputTextBox->Location = System::Drawing::Point(25, 50);
			this->inputTextBox->Multiline = true;
			this->inputTextBox->Name = L"inputTextBox";
			this->inputTextBox->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->inputTextBox->Size = System::Drawing::Size(260, 66);
			this->inputTextBox->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->fileToolStripMenuItem,
					this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(310, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->loadPolyToolStripMenuItem,
					this->savePolyToolStripMenuItem, this->toolStripSeparator1, this->closeToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(38, 20);
			this->fileToolStripMenuItem->Text = L"Plik";
			// 
			// loadPolyToolStripMenuItem
			// 
			this->loadPolyToolStripMenuItem->Name = L"loadPolyToolStripMenuItem";
			this->loadPolyToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->loadPolyToolStripMenuItem->Text = L"Wczytaj...";
			this->loadPolyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::loadToolStripMenuItem_Click);
			// 
			// savePolyToolStripMenuItem
			// 
			this->savePolyToolStripMenuItem->Name = L"savePolyToolStripMenuItem";
			this->savePolyToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->savePolyToolStripMenuItem->Text = L"Zapisz...";
			this->savePolyToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::savePolyToolStripMenuItem_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(121, 6);
			// 
			// closeToolStripMenuItem
			// 
			this->closeToolStripMenuItem->Name = L"closeToolStripMenuItem";
			this->closeToolStripMenuItem->Size = System::Drawing::Size(124, 22);
			this->closeToolStripMenuItem->Text = L"Zamknij";
			this->closeToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::closeToolStripMenuItem_Click);
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(57, 20);
			this->helpToolStripMenuItem->Text = L"Pomoc";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(141, 22);
			this->aboutToolStripMenuItem->Text = L"O programie";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::aboutToolStripMenuItem_Click);
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
			this->initApproxLabel->Location = System::Drawing::Point(22, 133);
			this->initApproxLabel->Name = L"initApproxLabel";
			this->initApproxLabel->Size = System::Drawing::Size(126, 13);
			this->initApproxLabel->TabIndex = 4;
			this->initApproxLabel->Text = L"Pocz¹tkowe przybli¿enie:";
			// 
			// maxIterationsLabel
			// 
			this->maxIterationsLabel->AutoSize = true;
			this->maxIterationsLabel->Location = System::Drawing::Point(22, 159);
			this->maxIterationsLabel->Name = L"maxIterationsLabel";
			this->maxIterationsLabel->Size = System::Drawing::Size(132, 13);
			this->maxIterationsLabel->TabIndex = 5;
			this->maxIterationsLabel->Text = L"Maksymalna liczba iteracji:";
			// 
			// toleranceLabel
			// 
			this->toleranceLabel->AutoSize = true;
			this->toleranceLabel->Location = System::Drawing::Point(22, 185);
			this->toleranceLabel->Name = L"toleranceLabel";
			this->toleranceLabel->Size = System::Drawing::Size(133, 13);
			this->toleranceLabel->TabIndex = 6;
			this->toleranceLabel->Text = L"Dok³adnoœæ wyznaczenia:";
			// 
			// initApproxNumUpDown
			// 
			this->initApproxNumUpDown->DecimalPlaces = 2;
			this->initApproxNumUpDown->Location = System::Drawing::Point(198, 131);
			this->initApproxNumUpDown->Name = L"initApproxNumUpDown";
			this->initApproxNumUpDown->Size = System::Drawing::Size(87, 20);
			this->initApproxNumUpDown->TabIndex = 7;
			this->initApproxNumUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->initApproxNumUpDown->ValueChanged += gcnew System::EventHandler(this, &MainWindow::initApproxNumUpDown_ValueChanged);
			// 
			// maxIterationsNumUpDown
			// 
			this->maxIterationsNumUpDown->Location = System::Drawing::Point(198, 157);
			this->maxIterationsNumUpDown->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100000, 0, 0, 0 });
			this->maxIterationsNumUpDown->Name = L"maxIterationsNumUpDown";
			this->maxIterationsNumUpDown->Size = System::Drawing::Size(87, 20);
			this->maxIterationsNumUpDown->TabIndex = 8;
			this->maxIterationsNumUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->maxIterationsNumUpDown->ValueChanged += gcnew System::EventHandler(this, &MainWindow::maxIterationsNumUpDown_ValueChanged);
			// 
			// toleranceNumUpDown
			// 
			this->toleranceNumUpDown->DecimalPlaces = 4;
			this->toleranceNumUpDown->Location = System::Drawing::Point(198, 183);
			this->toleranceNumUpDown->Name = L"toleranceNumUpDown";
			this->toleranceNumUpDown->Size = System::Drawing::Size(87, 20);
			this->toleranceNumUpDown->TabIndex = 9;
			this->toleranceNumUpDown->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 262144 });
			this->toleranceNumUpDown->ValueChanged += gcnew System::EventHandler(this, &MainWindow::toleranceNumUpDown_ValueChanged);
			// 
			// calculateButton
			// 
			this->calculateButton->Location = System::Drawing::Point(25, 248);
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
			this->resultsTextBox->ReadOnly = true;
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
			// methodComboBox
			// 
			this->methodComboBox->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->methodComboBox->FormattingEnabled = true;
			this->methodComboBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Newtona", L"Siecznych", L"Odwrotna interpolacja kwadratowa" });
			this->methodComboBox->Location = System::Drawing::Point(144, 209);
			this->methodComboBox->Name = L"methodComboBox";
			this->methodComboBox->Size = System::Drawing::Size(141, 21);
			this->methodComboBox->TabIndex = 14;
			// 
			// methodLabel
			// 
			this->methodLabel->AutoSize = true;
			this->methodLabel->Location = System::Drawing::Point(22, 212);
			this->methodLabel->Name = L"methodLabel";
			this->methodLabel->Size = System::Drawing::Size(46, 13);
			this->methodLabel->TabIndex = 15;
			this->methodLabel->Text = L"Metoda:";
			// 
			// clearBtn
			// 
			this->clearBtn->Location = System::Drawing::Point(264, 297);
			this->clearBtn->Name = L"clearBtn";
			this->clearBtn->Size = System::Drawing::Size(22, 19);
			this->clearBtn->TabIndex = 16;
			this->clearBtn->Text = L"X";
			this->clearBtn->UseVisualStyleBackColor = true;
			this->clearBtn->Click += gcnew System::EventHandler(this, &MainWindow::clearBtn_Click);
			// 
			// openPolyFileDialog
			// 
			this->openPolyFileDialog->FileName = L"openFileDialog1";
			this->openPolyFileDialog->Filter = L"Pliki tekstowe (*.txt)|*.txt";
			this->openPolyFileDialog->Title = L"Wczytaj wielomiany";
			// 
			// savePolyFileDialog
			// 
			this->savePolyFileDialog->Filter = L"Pliki tekstowe (*.txt)|*.txt";
			this->savePolyFileDialog->Title = L"Zapisz wielomiany";
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(310, 557);
			this->Controls->Add(this->clearBtn);
			this->Controls->Add(this->methodLabel);
			this->Controls->Add(this->methodComboBox);
			this->Controls->Add(this->copyrightLabel);
			this->Controls->Add(this->resultsLabel);
			this->Controls->Add(this->helpButton);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->inputTextBox);
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
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
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

			System::Void loadToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				if (openPolyFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				{
					CFileManager fileManager;

					String^ output;
					bool isSuccess = fileManager.tryReadFromFile(openPolyFileDialog, output);

					if (isSuccess)
					{
						inputTextBox->Text = output;
						resultsTextBox->Clear();
						
						showMessageBox("Sukces", "Wczytanie wielomianów z pliku " 
							+ Environment::NewLine + openPolyFileDialog->FileName + Environment::NewLine + "zakoñczone sukcesem!", MessageBoxIcon::Information);
					}
					else
					{
						showMessageBox("B³¹d", "Nie uda³o siê wczytaæ wielomianow z pliku " + openPolyFileDialog->FileName + "."
							+ Environment::NewLine + "Komunikat b³êdu: " + Environment::NewLine + output, MessageBoxIcon::Error);
					}
				}
			}

			System::Void savePolyToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				Windows::Forms::DialogResult result = savePolyFileDialog->ShowDialog();

				if (result == System::Windows::Forms::DialogResult::OK)
				{
					CFileManager fileManager;

					String^ output;
					bool isSuccess = fileManager.trySaveToFile(savePolyFileDialog, inputTextBox->Text, output);

					if (isSuccess)
					{
						showMessageBox(L"Sukces", L"Zapis wielomianów do pliku " 
							+ Environment::NewLine + savePolyFileDialog->FileName + Environment::NewLine + "zakoñczony sukcesem!", MessageBoxIcon::Information);
					}
					else
					{
						showMessageBox(L"B³¹d", L"Nie uda³o siê zapisac wielomianów do pliku " + savePolyFileDialog->FileName + "."
							+ Environment::NewLine + "Komunikat b³êdu: " + Environment::NewLine + output, MessageBoxIcon::Error);
					}
				}
			}

			System::Void aboutToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				showMessageBox("O programie", "Autor: Daniel Andraszewski" + Environment::NewLine + Environment::NewLine
					+ "Politechnika Warszawska" + Environment::NewLine +  "Kwiecieñ 2018", MessageBoxIcon::Information);
			}

			System::Void closeToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e)
			{
				Windows::Forms::DialogResult closeResult = MessageBox::Show(L"Czy na pewno chcesz zamkn¹æ program?", L"Zamykanie", 
					MessageBoxButtons::YesNo, MessageBoxIcon::Question);

				if (closeResult == Windows::Forms::DialogResult::Yes)
				{
					Application::Exit();
				}
			}

			System::Void clearBtn_Click(System::Object^  sender, System::EventArgs^  e) 
			{
				resultsTextBox->Clear();
			}

			System::Void calculateButton_Click(System::Object^  sender, System::EventArgs^  e)
			{
				list<CPolynomial>* polynomials = NULL;
				CInputParser parser;

				String^ input = inputTextBox->Text;

				if (!validateInput(input))
					return;
				
				try
				{
					this->calculateButton->Enabled = false;

					polynomials = parser.parsePolynomials(input);
					methodType methodType = getChosenMethod();

					printInitCalculationMessage(parser.splitInputLines(input));
					string result = rootCalculator->calculateRoots(polynomials, methodType);

					printOutputMessageLine(gcnew String(result.c_str()));
					
				}
				catch (FormatException^)
				{
					showMessageBox("Niepoprawne parametry", L"Nie mo¿na przeprowadziæ obliczeñ. Popraw parametry i spróbuj ponownie", MessageBoxIcon::Error);
				}
				catch (exception& ex)
				{
					showMessageBox("B³¹d obliczeñ", L"Wyst¹pi³ b³¹d podczas obliczeñ." + Environment::NewLine + "Komunikat b³êdu: " + Environment::NewLine + gcnew String(ex.what()), MessageBoxIcon::Error);
				}			
				finally
				{
					printOutputMessageLine("# Koniec obliczeñ");
					this->calculateButton->Enabled = true;

					if (polynomials)
					{
						delete polynomials;
					}
				}
			}

			bool validateInput(String^ input)
			{
				if (String::IsNullOrWhiteSpace(input))
				{
					showMessageBox("Niepoprawne parametry", "Lista wspó³czynników jest pusta.", MessageBoxIcon::Error);
					return false;
				}
				return true;
			}

			bool validateCalculationMethod()
			{
				int methodIndex = methodComboBox->SelectedIndex;

				if (methodIndex != 0)
				{
					showMessageBox("Niepoprawna metoda", L"Wybrana metoda jest obecnie niedostêpna", MessageBoxIcon::Error);
					return false;
				}

				return true;
			}

			methodType getChosenMethod()
			{
				int methodIndex = methodComboBox->SelectedIndex;
				methodType methodType;

				switch (methodIndex)
				{
					case 0:
						methodType = methodType::newton;
						break;
					case 1:
						methodType = methodType::secant;
						break;
					case 2:
						methodType = methodType::inverseInterpolation;
						break;
					default:
						throw exception("Niepoprawna metoda wyznaczenia miejsc zerowych!");
				}

				return methodType;
			}

			System::Void printInitCalculationMessage(cli::array<String^>^ inputLines)
			{
				printOutputMessageLine("# Wprowadzono wielomiany o wspó³czynnikach:");

				for (int i = 0; i < inputLines->Length; i++)
				{
					printOutputMessageLine(L"W" + System::Convert::ToInt32(i + 1) + ": " + inputLines[i]);
				}

				printOutputMessageLine("# Pocz¹tkowe przybli¿enie: " + this->initApproxNumUpDown->Value);
				printOutputMessageLine("# Maksymalna liczna iteracji: " + this->maxIterationsNumUpDown->Value);
				printOutputMessageLine("# Dok³adnoœæ wyznaczenia: " + this->toleranceNumUpDown->Value);
				printOutputMessageLine("# Miejsca zerowe wielomianów:");
			}

			System::Void showMessageBox(String^ title, String^ description, Windows::Forms::MessageBoxIcon icon)
			{
				MessageBox::Show(this,
					L"" + description,
					L"" + title,
					System::Windows::Forms::MessageBoxButtons::OK,
					icon);
			}

			System::Void printOutputMessageLine(String^ message)
			{
				this->resultsTextBox->Text += message + Environment::NewLine;
			}

			System::Void initApproxNumUpDown_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			{
				rootCalculator->setInitialApproximation(getInitApproximation());
			}

			System::Void maxIterationsNumUpDown_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			{
				rootCalculator->setMaxIterations(getMaxIterations());
			}

			System::Void toleranceNumUpDown_ValueChanged(System::Object^  sender, System::EventArgs^  e) 
			{
				rootCalculator->setTolerance(getTolerance());
			}

			double getInitApproximation()
			{
				return System::Convert::ToDouble(initApproxNumUpDown->Value);
			}

			int getMaxIterations()
			{
				return System::Convert::ToInt32(maxIterationsNumUpDown->Value);
			}

			double getTolerance()
			{
				return System::Convert::ToDouble(toleranceNumUpDown->Value);
			}

			int getTolerancePrecision()
			{
				return System::Convert::ToInt32(toleranceNumUpDown->DecimalPlaces);
			}
	};
}
