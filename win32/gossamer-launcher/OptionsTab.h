#pragma once

namespace gossamerlauncher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for OptionsTab
	/// </summary>
	public ref class OptionsTab : public System::Windows::Forms::Form
	{
	public:
		OptionsTab(void)
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
		~OptionsTab()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl;
	protected:
	private: System::Windows::Forms::TabPage^ gameTab;
	private: System::Windows::Forms::TabPage^ dedservTab;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ file;
	private: System::Windows::Forms::ToolStripMenuItem^ saveToolStripMenuItem;
	private: System::Windows::Forms::ToolStripSeparator^ toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ help;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Button^ launchGossamerBtn;
	private: System::Windows::Forms::Button^ cancelGossamerBtn;
	private: System::Windows::Forms::ToolStripMenuItem^ openToolStripMenuItem;



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
			this->tabControl = (gcnew System::Windows::Forms::TabControl());
			this->gameTab = (gcnew System::Windows::Forms::TabPage());
			this->launchGossamerBtn = (gcnew System::Windows::Forms::Button());
			this->cancelGossamerBtn = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dedservTab = (gcnew System::Windows::Forms::TabPage());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->file = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->help = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tabControl->SuspendLayout();
			this->gameTab->SuspendLayout();
			this->dedservTab->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl
			// 
			this->tabControl->Controls->Add(this->gameTab);
			this->tabControl->Controls->Add(this->dedservTab);
			this->tabControl->Location = System::Drawing::Point(0, 22);
			this->tabControl->Name = L"tabControl";
			this->tabControl->SelectedIndex = 0;
			this->tabControl->Size = System::Drawing::Size(338, 273);
			this->tabControl->TabIndex = 0;
			// 
			// gameTab
			// 
			this->gameTab->Controls->Add(this->launchGossamerBtn);
			this->gameTab->Controls->Add(this->cancelGossamerBtn);
			this->gameTab->Controls->Add(this->textBox1);
			this->gameTab->Controls->Add(this->label1);
			this->gameTab->Location = System::Drawing::Point(4, 22);
			this->gameTab->Name = L"gameTab";
			this->gameTab->Padding = System::Windows::Forms::Padding(3);
			this->gameTab->Size = System::Drawing::Size(330, 247);
			this->gameTab->TabIndex = 0;
			this->gameTab->Text = L"Gossamer";
			this->gameTab->UseVisualStyleBackColor = true;
			// 
			// launchGossamerBtn
			// 
			this->launchGossamerBtn->Location = System::Drawing::Point(249, 217);
			this->launchGossamerBtn->Name = L"launchGossamerBtn";
			this->launchGossamerBtn->Size = System::Drawing::Size(75, 23);
			this->launchGossamerBtn->TabIndex = 2;
			this->launchGossamerBtn->Text = L"&OK";
			this->launchGossamerBtn->UseVisualStyleBackColor = true;
			this->launchGossamerBtn->Click += gcnew System::EventHandler(this, &OptionsTab::launchBtn_Click);
			// 
			// cancelGossamerBtn
			// 
			this->cancelGossamerBtn->Location = System::Drawing::Point(168, 217);
			this->cancelGossamerBtn->Name = L"cancelGossamerBtn";
			this->cancelGossamerBtn->Size = System::Drawing::Size(75, 23);
			this->cancelGossamerBtn->TabIndex = 3;
			this->cancelGossamerBtn->Text = L"&Cancel";
			this->cancelGossamerBtn->UseVisualStyleBackColor = true;
			this->cancelGossamerBtn->Click += gcnew System::EventHandler(this, &OptionsTab::cancelBtn_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(7, 24);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(317, 187);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 3);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(190, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Enter Commands to Pass to Gossamer:";
			// 
			// dedservTab
			// 
			this->dedservTab->Controls->Add(this->textBox2);
			this->dedservTab->Controls->Add(this->label2);
			this->dedservTab->Location = System::Drawing::Point(4, 22);
			this->dedservTab->Name = L"dedservTab";
			this->dedservTab->Padding = System::Windows::Forms::Padding(3);
			this->dedservTab->Size = System::Drawing::Size(330, 247);
			this->dedservTab->TabIndex = 1;
			this->dedservTab->Text = L"Dedicated Server";
			this->dedservTab->UseVisualStyleBackColor = true;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 23);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(318, 188);
			this->textBox2->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 3);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(226, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Enter Commands to Pass to Dedicated Server:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->file, this->help });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(336, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// file
			// 
			this->file->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->openToolStripMenuItem,
					this->saveToolStripMenuItem, this->toolStripSeparator1, this->exitToolStripMenuItem
			});
			this->file->Name = L"file";
			this->file->Size = System::Drawing::Size(37, 20);
			this->file->Text = L"&File";
			// 
			// saveToolStripMenuItem
			// 
			this->saveToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->saveToolStripMenuItem->Enabled = false;
			this->saveToolStripMenuItem->Name = L"saveToolStripMenuItem";
			this->saveToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->saveToolStripMenuItem->Text = L"&Save";
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(177, 6);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->exitToolStripMenuItem->Text = L"E&xit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &OptionsTab::exitToolStripMenuItem_Click);
			// 
			// help
			// 
			this->help->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->help->Name = L"help";
			this->help->Size = System::Drawing::Size(44, 20);
			this->help->Text = L"&Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(182, 22);
			this->aboutToolStripMenuItem->Text = L"Console Commands";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &OptionsTab::aboutToolStripMenuItem_Click);
			// 
			// openToolStripMenuItem
			// 
			this->openToolStripMenuItem->Enabled = false;
			this->openToolStripMenuItem->Name = L"openToolStripMenuItem";
			this->openToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->openToolStripMenuItem->Text = L"&Open";
			// 
			// OptionsTab
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(336, 292);
			this->Controls->Add(this->tabControl);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"OptionsTab";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->SizeGripStyle = System::Windows::Forms::SizeGripStyle::Hide;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Options - Gossamer";
			this->Load += gcnew System::EventHandler(this, &OptionsTab::OptionsTab_Load);
			this->tabControl->ResumeLayout(false);
			this->gameTab->ResumeLayout(false);
			this->gameTab->PerformLayout();
			this->dedservTab->ResumeLayout(false);
			this->dedservTab->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void OptionsTab_Load(System::Object^ sender, System::EventArgs^ e) {
		this->dedservTab->Enabled = false;
	}
	private: System::Void launchBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start("pjgossamer.exe", this->textBox1->Text);
		Application::Exit();
	}
	private: System::Void cancelBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Process::Start("https://pjgossamer.github.io/commands");
	}
};
}
