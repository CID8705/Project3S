#pragma once
#include "FormAbout.h"
#include "FormJoinView.h"
namespace Project3S {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// MyForm の概要
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}

	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  mnuFile;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuOpenDir;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuExit;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuEdit;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuCopyPath;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuCopyFileList;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuHelp;
	private: System::Windows::Forms::ToolStripMenuItem^  mnuAbout;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  btnJoin;

	private: System::Windows::Forms::Button^  btnReLoad;

	private: System::Windows::Forms::Button^  btnSetDir;
	private: System::Windows::Forms::TextBox^  textBox1;



	private: System::Windows::Forms::SplitContainer^  splitContainer1;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::ToolStripStatusLabel^  statusLabel1;
	private: System::Windows::Forms::ListView^  listView1;
	private: System::Windows::Forms::ColumnHeader^  colName;
	private: System::Windows::Forms::ColumnHeader^  colFullPath;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;



	private:
		/// <summary>
		/// 必要なデザイナー変数です。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// デザイナー サポートに必要なメソッドです。このメソッドの内容を
		/// コード エディターで変更しないでください。
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->mnuFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuOpenDir = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuEdit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuCopyPath = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuCopyFileList = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuHelp = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mnuAbout = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->statusLabel1 = (gcnew System::Windows::Forms::ToolStripStatusLabel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnJoin = (gcnew System::Windows::Forms::Button());
			this->btnReLoad = (gcnew System::Windows::Forms::Button());
			this->btnSetDir = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->splitContainer1 = (gcnew System::Windows::Forms::SplitContainer());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->colName = (gcnew System::Windows::Forms::ColumnHeader());
			this->colFullPath = (gcnew System::Windows::Forms::ColumnHeader());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->menuStrip1->SuspendLayout();
			this->statusStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->BeginInit();
			this->splitContainer1->Panel1->SuspendLayout();
			this->splitContainer1->Panel2->SuspendLayout();
			this->splitContainer1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->mnuFile, this->mnuEdit,
					this->mnuHelp
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(464, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// mnuFile
			// 
			this->mnuFile->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mnuOpenDir,
					this->mnuExit
			});
			this->mnuFile->Name = L"mnuFile";
			this->mnuFile->Size = System::Drawing::Size(66, 20);
			this->mnuFile->Text = L"ファイル(&F)";
			// 
			// mnuOpenDir
			// 
			this->mnuOpenDir->Name = L"mnuOpenDir";
			this->mnuOpenDir->Size = System::Drawing::Size(154, 22);
			this->mnuOpenDir->Text = L"フォルダを開く(&O)";
			this->mnuOpenDir->Click += gcnew System::EventHandler(this, &MyForm::mnuOpenDir_Click);
			// 
			// mnuExit
			// 
			this->mnuExit->Name = L"mnuExit";
			this->mnuExit->Size = System::Drawing::Size(154, 22);
			this->mnuExit->Text = L"終了(&X)";
			this->mnuExit->Click += gcnew System::EventHandler(this, &MyForm::mnuExit_Click);
			// 
			// mnuEdit
			// 
			this->mnuEdit->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mnuCopyPath,
					this->mnuCopyFileList
			});
			this->mnuEdit->Name = L"mnuEdit";
			this->mnuEdit->Size = System::Drawing::Size(57, 20);
			this->mnuEdit->Text = L"編集(&E)";
			// 
			// mnuCopyPath
			// 
			this->mnuCopyPath->Name = L"mnuCopyPath";
			this->mnuCopyPath->Size = System::Drawing::Size(180, 22);
			this->mnuCopyPath->Text = L"フォルダパスのコピー";
			this->mnuCopyPath->Click += gcnew System::EventHandler(this, &MyForm::mnuCopyPath_Click);
			// 
			// mnuCopyFileList
			// 
			this->mnuCopyFileList->Name = L"mnuCopyFileList";
			this->mnuCopyFileList->Size = System::Drawing::Size(180, 22);
			this->mnuCopyFileList->Text = L"ファイル一覧のコピー(&C)";
			this->mnuCopyFileList->Click += gcnew System::EventHandler(this, &MyForm::mnuCopyFileList_Click);
			// 
			// mnuHelp
			// 
			this->mnuHelp->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->mnuAbout });
			this->mnuHelp->Name = L"mnuHelp";
			this->mnuHelp->Size = System::Drawing::Size(65, 20);
			this->mnuHelp->Text = L"ヘルプ(&H)";
			// 
			// mnuAbout
			// 
			this->mnuAbout->Name = L"mnuAbout";
			this->mnuAbout->Size = System::Drawing::Size(158, 22);
			this->mnuAbout->Text = L"バージョン情報(&A)";
			this->mnuAbout->Click += gcnew System::EventHandler(this, &MyForm::mnuAbout_Click);
			// 
			// statusStrip1
			// 
			this->statusStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->statusLabel1 });
			this->statusStrip1->Location = System::Drawing::Point(0, 299);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(464, 22);
			this->statusStrip1->TabIndex = 1;
			this->statusStrip1->Text = L"statusStrip1";
			// 
			// statusLabel1
			// 
			this->statusLabel1->Name = L"statusLabel1";
			this->statusLabel1->Size = System::Drawing::Size(0, 17);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnJoin);
			this->panel1->Controls->Add(this->btnReLoad);
			this->panel1->Controls->Add(this->btnSetDir);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(464, 100);
			this->panel1->TabIndex = 0;
			// 
			// btnJoin
			// 
			this->btnJoin->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnJoin->Location = System::Drawing::Point(377, 39);
			this->btnJoin->Name = L"btnJoin";
			this->btnJoin->Size = System::Drawing::Size(75, 23);
			this->btnJoin->TabIndex = 3;
			this->btnJoin->Text = L"結合";
			this->btnJoin->UseVisualStyleBackColor = true;
			this->btnJoin->Click += gcnew System::EventHandler(this, &MyForm::btnJoin_Click);
			// 
			// btnReLoad
			// 
			this->btnReLoad->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnReLoad->Location = System::Drawing::Point(296, 39);
			this->btnReLoad->Name = L"btnReLoad";
			this->btnReLoad->Size = System::Drawing::Size(75, 23);
			this->btnReLoad->TabIndex = 2;
			this->btnReLoad->Text = L"更新";
			this->btnReLoad->UseVisualStyleBackColor = true;
			this->btnReLoad->Click += gcnew System::EventHandler(this, &MyForm::btnReLoad_Click);
			// 
			// btnSetDir
			// 
			this->btnSetDir->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->btnSetDir->Location = System::Drawing::Point(215, 39);
			this->btnSetDir->Name = L"btnSetDir";
			this->btnSetDir->Size = System::Drawing::Size(75, 23);
			this->btnSetDir->TabIndex = 1;
			this->btnSetDir->Text = L"...";
			this->btnSetDir->UseVisualStyleBackColor = true;
			this->btnSetDir->Click += gcnew System::EventHandler(this, &MyForm::btnSetDir_Click);
			// 
			// textBox1
			// 
			this->textBox1->AllowDrop = true;
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11));
			this->textBox1->Location = System::Drawing::Point(12, 39);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(197, 22);
			this->textBox1->TabIndex = 0;
			this->textBox1->DragEnter += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::textBox1_DragEnter);
			this->textBox1->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MyForm::textBox1_DragDrop);
			// 
			// splitContainer1
			// 
			this->splitContainer1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->splitContainer1->Location = System::Drawing::Point(0, 124);
			this->splitContainer1->Name = L"splitContainer1";
			// 
			// splitContainer1.Panel1
			// 
			this->splitContainer1->Panel1->Controls->Add(this->listView1);
			// 
			// splitContainer1.Panel2
			// 
			this->splitContainer1->Panel2->Controls->Add(this->richTextBox1);
			this->splitContainer1->Size = System::Drawing::Size(464, 175);
			this->splitContainer1->SplitterDistance = 154;
			this->splitContainer1->TabIndex = 2;
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->colName, this->colFullPath });
			this->listView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->listView1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11));
			this->listView1->Location = System::Drawing::Point(0, 0);
			this->listView1->MultiSelect = false;
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(154, 175);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listView1_SelectedIndexChanged);
			// 
			// colName
			// 
			this->colName->Text = L"ファイル名";
			this->colName->Width = 130;
			// 
			// colFullPath
			// 
			this->colFullPath->Text = L"パス";
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11));
			this->richTextBox1->Location = System::Drawing::Point(0, 0);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ShowSelectionMargin = true;
			this->richTextBox1->Size = System::Drawing::Size(306, 175);
			this->richTextBox1->TabIndex = 0;
			this->richTextBox1->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(464, 321);
			this->Controls->Add(this->splitContainer1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->statusStrip1);
			this->Controls->Add(this->menuStrip1);
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"14-髙野誉将";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->statusStrip1->ResumeLayout(false);
			this->statusStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->splitContainer1->Panel1->ResumeLayout(false);
			this->splitContainer1->Panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->splitContainer1))->EndInit();
			this->splitContainer1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();
			this->KeyDown += gcnew KeyEventHandler(this, &MyForm::MyForm_KeyDown);

		}
#pragma endregion
	private: System::Void mnuExit_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void mnuAbout_Click(System::Object^  sender, System::EventArgs^  e) {
		FormAbout^ fAbout = gcnew FormAbout();
		fAbout->ShowDialog();
	}
	private: System::Void btnSetDir_Click(System::Object^  sender, System::EventArgs^  e) {
		if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			textBox1->Text = folderBrowserDialog1->SelectedPath;
			listView1->Items->Clear();
			try {
				array<String^>^ files = System::IO::Directory::GetFiles(textBox1->Text->ToString(), "*.txt");
				for (int i = 0; i < files->Length; ++i) {
					array<String^>^ row = { System::IO::Path::GetFileName(files[i]), files[i] };
					listView1->Items->Add(gcnew System::Windows::Forms::ListViewItem(row));
				}
				statusLabel1->Text = Convert::ToString(listView1->Items->Count);
			}
			catch (Exception^ e) {
				statusLabel1->Text = "該当ファイルはありません：" + e->GetType();
			}
		}
	}
	private: System::Void mnuOpenDir_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			System::Diagnostics::Process^ ps = gcnew System::Diagnostics::Process();
			ps->StartInfo->FileName = "explorer.exe";
			ps->Start(textBox1->Text);
			statusLabel1->Text = "";
		}
		catch (Exception^ e) {
			statusLabel1->Text = "フォルダが開けません：" + e->GetType();
			MessageBox::Show("フォルダが開けません。");
		}
	}
	private: System::Void mnuCopyPath_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			Clipboard::SetDataObject(textBox1->Text, true);
			statusLabel1->Text = "パスをコピーしました。";
		}
		catch (Exception^ e) {
			statusLabel1->Text = "コピーできません：" + e->GetType();
			MessageBox::Show("コピーできません。");
		}
	}
	private: System::Void btnReLoad_Click(System::Object^  sender, System::EventArgs^  e) {
		listView1->Items->Clear();
		try {
			array<String^>^ files = System::IO::Directory::GetFiles(textBox1->Text->ToString(), "*.txt");
			for (int i = 0; i< files->Length; ++i) {
				array<String^>^ row = { System::IO::Path::GetFileName(files[i]), files[i] };
				listView1->Items->Add(gcnew System::Windows::Forms::ListViewItem(row));
			}
			statusLabel1->Text = Convert::ToString(listView1->Items->Count);
		}
		catch (Exception^ e) {
			statusLabel1->Text = "該当ファイルはありません：" + e->GetType();
		}
	}
	private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		if (listView1->SelectedItems->Count > 0) {
			String^ fName = listView1->FocusedItem->SubItems[1]->Text;
			String^ strBuf = "";
			try {
				System::IO::StreamReader^ cReader = gcnew System::IO::StreamReader(fName, System::Text::Encoding::Default);
				try {
					strBuf = cReader->ReadToEnd();
				}
				finally {
					if (cReader != nullptr) {
						cReader->Close();
					}
				}
				statusLabel1->Text = listView1->Items->Count + " | " + fName;
				richTextBox1->Text = strBuf;
			}
			catch (Exception^ e) {
				statusLabel1->Text = "読み込みエラー：" + e->GetType();
				richTextBox1->Text = "読み込みエラー";
			}
		}
		else {
			richTextBox1->Text = "";
		}
	}
	private: System::Void mnuCopyFileList_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			String^ files = "";
			for (int i = 0; i < listView1->Items->Count; ++i) {
				files = files + listView1->Items[i]->SubItems[0]->Text + System::Environment::NewLine;
			}
			Clipboard::SetDataObject(files, true);
			statusLabel1->Text = "ファイル一覧をコピーしました。";
		}
		catch (Exception^ e) {
			statusLabel1->Text = "コピーできません：" + e->GetType();
			MessageBox::Show("コピーできません。");
		}
	}
	private: System::Void btnJoin_Click(System::Object^  sender, System::EventArgs^  e) {
		if (listView1->Items->Count > 0) {
			array<String^>^ files = System::IO::Directory::GetFiles(textBox1->Text->ToString(), "*.txt");
			String^ str;
			FormJoinView^ f;
			for (int i = 0; i < files->Length; ++i) {
				String^ fName = listView1->Items[i]->SubItems[1]->Text;
				String^ strBuf = "";
				try {
					System::IO::StreamReader^ cReader = gcnew System::IO::StreamReader(fName, System::Text::Encoding::Default);
					try {
						strBuf = cReader->ReadToEnd();
					}
					finally {
						if (cReader != nullptr) {
							cReader->Close();
						}
					}
					statusLabel1->Text = listView1->Items->Count + " | " + fName;
					if (i > 0) {
						str = str + System::Environment::NewLine + "--------------------" + System::Environment::NewLine;
					}
					str = str + strBuf;
				}
				catch (Exception^ e) {
					statusLabel1->Text = "読み込みエラー：" + e->GetType();
					if (i > 0) {
						str = str + System::Environment::NewLine + "--------------------" + System::Environment::NewLine;
					}
					str = str + "読み込みエラー";
				}
			}
			f = gcnew FormJoinView(str);
			f->Text = textBox1->Text;
			f->Show();
		}
	}
	private: System::Void textBox1_DragEnter(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) {
		if (e->Data->GetDataPresent(System::Windows::Forms::DataFormats::FileDrop) & !System::IO::File::Exists(cli::safe_cast<array<String^>^>(e->Data->GetData(System::Windows::Forms::DataFormats::FileDrop, false))[0])) {
			e->Effect = System::Windows::Forms::DragDropEffects::All;
		}
		else {
			e->Effect = ::System::Windows::Forms::DragDropEffects::None;
		}
	}
	private: System::Void textBox1_DragDrop(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e) {
		textBox1->Text = cli::safe_cast<array<String^>^>(e->Data->GetData(System::Windows::Forms::DataFormats::FileDrop, false))[0];
		listView1->Items->Clear();
		try {
			array<String^>^ files = System::IO::Directory::GetFiles(textBox1->Text->ToString(), "*.txt");
			for (int i = 0; i < files->Length; ++i) {
				array<String^>^ row = { System::IO::Path::GetFileName(files[i]), files[i] };
				listView1->Items->Add(gcnew System::Windows::Forms::ListViewItem(row));
			}
			statusLabel1->Text = Convert::ToString(listView1->Items->Count);
		}
		catch (Exception^ e) {
			statusLabel1->Text = "該当ファイルはありません：" + e->GetType();
		}
	}
	private: System::Void MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
		if (e->KeyCode == Keys::F5) {
			listView1->Items->Clear();
			try {
				array<String^>^ files = System::IO::Directory::GetFiles(textBox1->Text->ToString(), "*.txt");
				for (int i = 0; i < files->Length; ++i) {
					array<String^>^ row = { System::IO::Path::GetFileName(files[i]), files[i] };
					listView1->Items->Add(gcnew System::Windows::Forms::ListViewItem(row));
				}
				statusLabel1->Text = Convert::ToString(listView1->Items->Count);
			}
			catch (Exception^ e) {
				statusLabel1->Text = "該当ファイルはありません：" + e->GetType();
			}
		}
	}
	};
}
