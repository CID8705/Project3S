#pragma once

namespace Project3S {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FormJoinView の概要
	/// </summary>
	public ref class FormJoinView : public System::Windows::Forms::Form
	{
	public:
		FormJoinView(void)
		{
			InitializeComponent();
			//
			//TODO: ここにコンストラクター コードを追加します
			//
		}
		FormJoinView(String^ strText)
		{
			InitializeComponent();
			richTextBox1->Text = strText;
		}
	protected:
		/// <summary>
		/// 使用中のリソースをすべてクリーンアップします。
		/// </summary>
		~FormJoinView()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ToolStrip^  toolStrip1;
	protected:
	private: System::Windows::Forms::ToolStripButton^  btnCopy;
	private: System::Windows::Forms::StatusStrip^  statusLabel1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;

	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(FormJoinView::typeid));
			this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
			this->btnCopy = (gcnew System::Windows::Forms::ToolStripButton());
			this->statusLabel1 = (gcnew System::Windows::Forms::StatusStrip());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->toolStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// toolStrip1
			// 
			this->toolStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->btnCopy });
			this->toolStrip1->Location = System::Drawing::Point(0, 0);
			this->toolStrip1->Name = L"toolStrip1";
			this->toolStrip1->Size = System::Drawing::Size(284, 25);
			this->toolStrip1->TabIndex = 0;
			this->toolStrip1->Text = L"toolStrip1";
			// 
			// btnCopy
			// 
			this->btnCopy->DisplayStyle = System::Windows::Forms::ToolStripItemDisplayStyle::Text;
			this->btnCopy->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCopy.Image")));
			this->btnCopy->ImageTransparentColor = System::Drawing::Color::Magenta;
			this->btnCopy->Name = L"btnCopy";
			this->btnCopy->Size = System::Drawing::Size(62, 22);
			this->btnCopy->Text = L"全文コピー ";
			this->btnCopy->Click += gcnew System::EventHandler(this, &FormJoinView::btnCopy_Click);
			// 
			// statusLabel1
			// 
			this->statusLabel1->Location = System::Drawing::Point(0, 239);
			this->statusLabel1->Name = L"statusLabel1";
			this->statusLabel1->Size = System::Drawing::Size(284, 22);
			this->statusLabel1->TabIndex = 1;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"MS UI Gothic", 11));
			this->richTextBox1->Location = System::Drawing::Point(0, 25);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->ShowSelectionMargin = true;
			this->richTextBox1->Size = System::Drawing::Size(284, 214);
			this->richTextBox1->TabIndex = 2;
			this->richTextBox1->Text = L"";
			// 
			// FormJoinView
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->statusLabel1);
			this->Controls->Add(this->toolStrip1);
			this->Name = L"FormJoinView";
			this->Text = L"FormJoinView";
			this->toolStrip1->ResumeLayout(false);
			this->toolStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCopy_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			Clipboard::SetDataObject(richTextBox1->Text);
			statusLabel1->Text = "全文をコピーしました。";
		}
		catch (Exception^ e) {
			statusLabel1->Text = "コピーエラー：" + e->GetType();
		}
	}
};
}
