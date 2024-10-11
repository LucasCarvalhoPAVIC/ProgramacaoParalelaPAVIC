#pragma once



namespace pavicgui2024 {
//#include "include/Diagnostic.h"



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std; // Assuming Diagnostics is in the std namespace

	/// <summary>
	/// Summary for Pavic_gui_2024_Form
	/// </summary>
	public ref class Pavic_gui_2024_Form : public System::Windows::Forms::Form
	{
	public:
		Pavic_gui_2024_Form(void)
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
		~Pavic_gui_2024_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ bt_open;
	protected:
	private: System::Windows::Forms::Button^ bt_close;
	private: System::Windows::Forms::Button^ bt_exit;
	private: System::Windows::Forms::PictureBox^ pbox_input;
	//private: System::Windows::Forms::PictureBox^ pbox_copy;
	private: System::Windows::Forms::PictureBox^ pbox_output;
	//private: System::Windows::Forms::Button^ bt_copy;
	private: System::Windows::Forms::Button^ bt_filter_bw;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	//private: System::Windows::Forms::Button^ bt_close_copy;
	private: System::Windows::Forms::Button^ bt_close_output;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Diagnostics::Stopwatch^ copyStopwatch;
	private: System::Diagnostics::Stopwatch^ filterStopwatch;
	private: System::Windows::Forms::Button^ bt_filter_negative;
	private: System::Windows::Forms::Button^ bt_filter_dest;
	private: System::Windows::Forms::Button^ bt_filter_blur;
	private: System::Windows::Forms::Button^ bt_filter_sharpen;
	private: System::Windows::Forms::Button^ bt_filter_color_boost;
	private: System::Windows::Forms::Label^ label_execution_time; //<---- Adicionado o label para mostrar o tempo de execução


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
			this->bt_open = (gcnew System::Windows::Forms::Button());
			this->bt_close = (gcnew System::Windows::Forms::Button());
			this->bt_exit = (gcnew System::Windows::Forms::Button());
			this->pbox_input = (gcnew System::Windows::Forms::PictureBox());
			//this->pbox_copy = (gcnew System::Windows::Forms::PictureBox());
			this->pbox_output = (gcnew System::Windows::Forms::PictureBox());
			//this->bt_copy = (gcnew System::Windows::Forms::Button());
			this->bt_filter_bw = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			//this->bt_close_copy = (gcnew System::Windows::Forms::Button());
			this->bt_close_output = (gcnew System::Windows::Forms::Button());
			this->bt_filter_negative = (gcnew System::Windows::Forms::Button());
			this->bt_filter_dest = (gcnew System::Windows::Forms::Button());
			this->bt_filter_blur = (gcnew System::Windows::Forms::Button());
			this->bt_filter_sharpen = (gcnew System::Windows::Forms::Button());
			this->bt_filter_color_boost = (gcnew System::Windows::Forms::Button());
			this->label_execution_time = (gcnew System::Windows::Forms::Label()); //<---- Criação do label para mostrar o tempo
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbox_input))->BeginInit();
			//(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbox_copy))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbox_output))->BeginInit();
			this->SuspendLayout();
			// 
			// bt_open
			// 
			this->bt_open->Location = System::Drawing::Point(12, 12);
			this->bt_open->Name = L"bt_open";
			this->bt_open->Size = System::Drawing::Size(189, 45);
			this->bt_open->TabIndex = 0;
			this->bt_open->Text = L"Open";
			this->bt_open->UseVisualStyleBackColor = true;
			this->bt_open->Click += gcnew System::EventHandler(this, &Pavic_gui_2024_Form::bt_open_Click);
			// 
			// bt_close
			// 
			this->bt_close->Location = System::Drawing::Point(388, 236);
			this->bt_close->Name = L"bt_close";
			this->bt_close->Size = System::Drawing::Size(127, 35);
			this->bt_close->TabIndex = 1;
			this->bt_close->Text = L"Close";
			this->bt_close->UseVisualStyleBackColor = true;
			this->bt_close->Click += gcnew System::EventHandler(this, &Pavic_gui_2024_Form::bt_close_Click);
			// 
			// bt_exit
			// 
			this->bt_exit->Location = System::Drawing::Point(12, 114);
			this->bt_exit->Name = L"bt_exit";
			this->bt_exit->Size = System::Drawing::Size(189, 45);
			this->bt_exit->TabIndex = 2;
			this->bt_exit->Text = L"Exit";
			this->bt_exit->UseVisualStyleBackColor = true;
			this->bt_exit->Click += gcnew System::EventHandler(this, &Pavic_gui_2024_Form::bt_exit_Click);
			// 
			// pbox_input
			// 
			this->pbox_input->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbox_input->Location = System::Drawing::Point(17, 277);
			this->pbox_input->Name = L"pbox_input";
			this->pbox_input->Size = System::Drawing::Size(498, 407);
			this->pbox_input->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbox_input->TabIndex = 3;
			this->pbox_input->TabStop = false;
			// 
			// pbox_copy
			//
			/*this->pbox_copy->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbox_copy->Location = System::Drawing::Point(555, 277);
			this->pbox_copy->Name = L"pbox_copy";
			this->pbox_copy->Size = System::Drawing::Size(498, 407);
			this->pbox_copy->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbox_copy->TabIndex = 4;
			this->pbox_copy->TabStop = false;
			*/// 
			// pbox_output
			// 
			this->pbox_output->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pbox_output->Location = System::Drawing::Point(555, 277);
			this->pbox_output->Name = L"pbox_output";
			this->pbox_output->Size = System::Drawing::Size(498, 407);
			this->pbox_output->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pbox_output->TabIndex = 5;
			this->pbox_output->TabStop = false;
			// 
			// label_execution_time
			// 
			this->label_execution_time->Location = System::Drawing::Point(1087, 690); //<---- Posicionado logo abaixo da pbox_output
			this->label_execution_time->Name = L"label_execution_time";
			this->label_execution_time->Size = System::Drawing::Size(498, 30); //<---- Definido o tamanho do label
			this->label_execution_time->Text = L"Tempo de execução: 0 ms"; //<---- Texto inicial padrão
			// 
			// bt_copy
			// 
			/*this->bt_copy->Location = System::Drawing::Point(12, 63);
			this->bt_copy->Name = L"bt_copy";
			this->bt_copy->Size = System::Drawing::Size(189, 45);
			this->bt_copy->TabIndex = 6;
			this->bt_copy->Text = L"Copy";
			this->bt_copy->UseVisualStyleBackColor = true;
			this->bt_copy->Click += gcnew System::EventHandler(this, &Pavic_gui_2024_Form::bt_copy_Click);
			*/
			// 
			// bt_filter_bw
			// 
			this->bt_filter_bw->Location = System::Drawing::Point(237, 114);
			this->bt_filter_bw->Name = L"bt_filter_bw";
			this->bt_filter_bw->Size = System::Drawing::Size(189, 45);
			this->bt_filter_bw->TabIndex = 7;
			this->bt_filter_bw->Text = L"Filter BW";
			this->bt_filter_bw->UseVisualStyleBackColor = true;
			this->bt_filter_bw->Click += gcnew System::EventHandler(this, &Pavic_gui_2024_Form::bt_filter_bw_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1438, 709);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 16);
			this->label1->TabIndex = 9;
			this->label1->Click += gcnew System::EventHandler(this, &Pavic_gui_2024_Form::label1_Click);
			this->label1->Text = L"\nGrupo 1: Kennedy, Lucas, Gustavo Araújo, Gabriela, Uendel";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(9, 709);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(111, 16);
			this->label2->TabIndex = 10;
			this->label2->Text = L" PAVIC LAB: 2024";
			// 
			// bt_close_copy
			// 
			/*this->bt_close_copy->Location = System::Drawing::Point(926, 236);
			this->bt_close_copy->Name = L"bt_close_copy";
			this->bt_close_copy->Size = System::Drawing::Size(127, 35);
			this->bt_close_copy->TabIndex = 11;
			this->bt_close_copy->Text = L"Close";
			this->bt_close_copy->UseVisualStyleBackColor = true;
			this->bt_close_copy->Click += gcnew System::EventHandler(this, &Pavic_gui_2024_Form::bt_close_copy_Click);
			*/
			// 
			// bt_close_output
			// 
			this->bt_close_output->Location = System::Drawing::Point(555, 236);
			this->bt_close_output->Name = L"bt_close_output";
			this->bt_close_output->Size = System::Drawing::Size(127, 35);
			this->bt_close_output->TabIndex = 12;
			this->bt_close_output->Text = L"Close";
			this->bt_close_output->UseVisualStyleBackColor = true;
			this->bt_close_output->Click += gcnew System::EventHandler(this, &Pavic_gui_2024_Form::bt_close_output_Click);
			// 
			// bt_filter_negative
			// 
			this->bt_filter_negative->Location = System::Drawing::Point(237, 12);
			this->bt_filter_negative->Name = L"bt_filter_negative";
			this->bt_filter_negative->Size = System::Drawing::Size(189, 45);
			this->bt_filter_negative->TabIndex = 8;
			this->bt_filter_negative->Text = L"Filter Negative";
			this->bt_filter_negative->UseVisualStyleBackColor = true;
			this->bt_filter_negative->Click += gcnew System::EventHandler(this, &Pavic_gui_2024_Form::bt_filter_negative_Click);
			// 
			// bt_filter_dest
			// 
			this->bt_filter_dest->Location = System::Drawing::Point(237, 63);
			this->bt_filter_dest->Name = L"bt_filter_dest";
			this->bt_filter_dest->Size = System::Drawing::Size(189, 45);
			this->bt_filter_dest->TabIndex = 13;
			this->bt_filter_dest->Text = L"Filter contorno ";
			this->bt_filter_dest->UseVisualStyleBackColor = true;
			this->bt_filter_dest->Click += gcnew System::EventHandler(this, &Pavic_gui_2024_Form::bt_filter_dest_Click);
			// 
			// bt_filter_blur
			// 
			this->bt_filter_blur->Location = System::Drawing::Point(454, 12);
			this->bt_filter_blur->Name = L"bt_filter_blur";
			this->bt_filter_blur->Size = System::Drawing::Size(189, 45);
			this->bt_filter_blur->TabIndex = 14;
			this->bt_filter_blur->Text = L"Filter suave";
			this->bt_filter_blur->UseVisualStyleBackColor = true;
			this->bt_filter_blur->Click += gcnew System::EventHandler(this, &Pavic_gui_2024_Form::bt_filter_blur_Click);
			// 
			// bt_filter_sharpen
			// 
			this->bt_filter_sharpen->Location = System::Drawing::Point(454, 63);
			this->bt_filter_sharpen->Name = L"bt_filter_sharpen";
			this->bt_filter_sharpen->Size = System::Drawing::Size(189, 45);
			this->bt_filter_sharpen->TabIndex = 15;
			this->bt_filter_sharpen->Text = L"filter nitidez";
			this->bt_filter_sharpen->UseVisualStyleBackColor = true;
			this->bt_filter_sharpen->Click += gcnew System::EventHandler(this, &Pavic_gui_2024_Form::bt_filter_sharpen_Click);
			// 
			// bt_filter_color_boost
			// 
			this->bt_filter_color_boost->Location = System::Drawing::Point(454, 114);
			this->bt_filter_color_boost->Name = L"bt_filter_color_boost";
			this->bt_filter_color_boost->Size = System::Drawing::Size(189, 45);
			this->bt_filter_color_boost->TabIndex = 16;
			this->bt_filter_color_boost->Text = L"filter Color Boost";
			this->bt_filter_color_boost->UseVisualStyleBackColor = true;
			this->bt_filter_color_boost->Click += gcnew System::EventHandler(this, &Pavic_gui_2024_Form::bt_filter_color_boost_Click);
			// 
			// Pavic_gui_2024_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1608, 734);
			this->Controls->Add(this->label_execution_time); //<---- Adicionado label de tempo ao formulário
			this->Controls->Add(this->bt_filter_color_boost);
			this->Controls->Add(this->bt_filter_sharpen);
			this->Controls->Add(this->bt_filter_blur);
			this->Controls->Add(this->bt_filter_dest);
			this->Controls->Add(this->bt_filter_negative);
			this->Controls->Add(this->bt_close_output);
			//this->Controls->Add(this->bt_close_copy);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->bt_filter_bw);
			//this->Controls->Add(this->bt_copy);
			this->Controls->Add(this->pbox_output);
			//this->Controls->Add(this->pbox_copy);
			this->Controls->Add(this->pbox_input);
			this->Controls->Add(this->bt_exit);
			this->Controls->Add(this->bt_close);
			this->Controls->Add(this->bt_open);
			this->Name = L"Pavic_gui_2024_Form";
			this->Text = L"PROJECT: PAVIC LAB 2024";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbox_input))->EndInit();
			//(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbox_copy))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbox_output))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void bt_open_Click(System::Object^ sender, System::EventArgs^ e) {
		OpenFileDialog^ ofd = gcnew OpenFileDialog();
		if (ofd->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			pbox_input->ImageLocation = ofd->FileName;
		}
	}
private: System::Void bt_close_Click(System::Object^ sender, System::EventArgs^ e) {

	pbox_input->Image = nullptr;

	
}/*
private: System::Void bt_copy_Click(System::Object^ sender, System::EventArgs^ e) {
	//copyStopwatch = gcnew System::Diagnostics.Stopwatch();
	//copyStopwatch->Start();
	pbox_copy->Image = pbox_input->Image;

	//copyStopwatch->Stop();
	//label11->Text = "Tempo de cópia: " + copyStopwatch->ElapsedMilliseconds.ToString() + " ms";

}
*/
private: System::Void bt_filter_bw_Click(System::Object^ sender, System::EventArgs^ e) {
	filterStopwatch = gcnew System::Diagnostics::Stopwatch(); // Cria uma nova instância do Stopwatch
	filterStopwatch->Start(); // Inicia a contagem do tempo
	// Get the input image
	Bitmap^ inputImage = (Bitmap^)pbox_input->Image;

	// Create a new output image with the same dimensions
	Bitmap^ outputImage = gcnew Bitmap(inputImage->Width, inputImage->Height);

	// Apply the black and white filter
	for (int i = 0; i < inputImage->Width; i++) {
		for (int j = 0; j < inputImage->Height; j++) {
			Color pixelColor = inputImage->GetPixel(i, j);
			int grayValue = (int)(0.299 * pixelColor.R + 0.587 * pixelColor.G + 0.114 * pixelColor.B);
			outputImage->SetPixel(i, j, Color::FromArgb(grayValue, grayValue, grayValue));
		}
	}

	// Display the output image
	pbox_output->Image = outputImage;
	filterStopwatch->Stop(); // Para a contagem do tempo

	// Atualiza o label com o tempo decorrido
	label_execution_time->Text = "Tempo de execução: " + filterStopwatch->ElapsedMilliseconds.ToString() + " ms"; //<---- Mostrando o tempo no label
}

private: System::Void bt_filter_negative_Click(System::Object^ sender, System::EventArgs^ e) {
	filterStopwatch = gcnew System::Diagnostics::Stopwatch(); // Cria uma nova instância do Stopwatch
	filterStopwatch->Start(); // Inicia a contagem do tempo	// Get the input image
	Bitmap^ inputImage = (Bitmap^)pbox_input->Image;

	// Create a new output image with the same dimensions
	Bitmap^ outputImage = gcnew Bitmap(inputImage->Width, inputImage->Height);

	// Apply the negative filter
	for (int i = 0; i < inputImage->Width; i++) {
		for (int j = 0; j < inputImage->Height; j++) {
			Color pixelColor = inputImage->GetPixel(i, j);
			// Invert the colors
			int r = 255 - pixelColor.R;
			int g = 255 - pixelColor.G;
			int b = 255 - pixelColor.B;
			outputImage->SetPixel(i, j, Color::FromArgb(r, g, b));
		}
	}

	// Display the output image
	pbox_output->Image = outputImage;
	filterStopwatch->Stop(); // Para a contagem do tempo

	// Atualiza o label com o tempo decorrido
	label_execution_time->Text = "Tempo de execução: " + filterStopwatch->ElapsedMilliseconds.ToString() + " ms"; //<---- Mostrando o tempo no label
}
private: System::Void bt_filter_dest_Click(System::Object^ sender, System::EventArgs^ e) {
	filterStopwatch = gcnew System::Diagnostics::Stopwatch(); // Cria uma nova instância do Stopwatch
	filterStopwatch->Start(); // Inicia a contagem do tempo	// Verifica se há uma imagem carregada
	if (pbox_input->Image == nullptr) {
		MessageBox::Show("Por favor, abra uma imagem primeiro.");
		return;
	}

	// Obtém a imagem de entrada
	Bitmap^ inputImage = (Bitmap^)pbox_input->Image;

	// Cria uma nova imagem de saída com as mesmas dimensões
	Bitmap^ outputImage = gcnew Bitmap(inputImage->Width, inputImage->Height);

	// Operadores Sobel para detecção de bordas
	array<int, 2>^ sobelX = gcnew array<int, 2>(3, 3) {
		{ -1, 0, 1 },
		{ -2, 0, 2 },
		{ -1, 0, 1 }
	};

	array<int, 2>^ sobelY = gcnew array<int, 2>(3, 3) {
		{ -1, -2, -1 },
		{ 0,  0,  0 },
		{ 1,  2,  1 }
	};

	// Aplicar o filtro Sobel para detecção de bordas
	for (int x = 1; x < inputImage->Width - 1; x++) {
		for (int y = 1; y < inputImage->Height - 1; y++) {
			int gradX = 0, gradY = 0;

			// Calcula os gradientes em X e Y
			for (int i = -1; i <= 1; i++) {
				for (int j = -1; j <= 1; j++) {
					Color pixelColor = inputImage->GetPixel(x + i, y + j);
					int grayValue = (int)(0.299 * pixelColor.R + 0.587 * pixelColor.G + 0.114 * pixelColor.B);
					gradX += grayValue * sobelX[i + 1, j + 1];
					gradY += grayValue * sobelY[i + 1, j + 1];
				}
			}

			// Magnitude do gradiente
			int grad = Math::Sqrt(gradX * gradX + gradY * gradY);
			grad = Math::Min(255, grad); // Limita o valor de grad a 255

			// Define o novo pixel na imagem de saída
			outputImage->SetPixel(x, y, Color::FromArgb(grad, grad, grad));
		}
	}

	// Exibe a imagem de saída com os contornos destacados
	pbox_output->Image = outputImage;
	filterStopwatch->Stop(); // Para a contagem do tempo

	// Atualiza o label com o tempo decorrido
	label_execution_time->Text = "Tempo de execução: " + filterStopwatch->ElapsedMilliseconds.ToString() + " ms"; //<---- Mostrando o tempo no label
}

private: System::Void bt_filter_blur_Click(System::Object^ sender, System::EventArgs^ e) {
	filterStopwatch = gcnew System::Diagnostics::Stopwatch(); // Cria uma nova instância do Stopwatch
	filterStopwatch->Start(); // Inicia a contagem do tempo	// Verifica se há uma imagem carregada
	if (pbox_input->Image == nullptr) {
		MessageBox::Show("Por favor, abra uma imagem primeiro.");
		return;
	}

	// Obtém a imagem de entrada
	Bitmap^ inputImage = (Bitmap^)pbox_input->Image;

	// Cria uma nova imagem de saída com as mesmas dimensões
	Bitmap^ outputImage = gcnew Bitmap(inputImage->Width, inputImage->Height);

	for (int i = 1; i < inputImage->Width - 1; i++) {
		for (int j = 1; j < inputImage->Height - 1; j++) {
			double sum_red = 0, sum_green = 0, sum_blue = 0;

			// Percorre os vizinhos 3x3 ao redor do pixel (i, j)
			for (int k = -1; k <= 1; k++) {
				for (int l = -1; l <= 1; l++) {
					Color pixelColor = inputImage->GetPixel(i + k, j + l);

					// Aplicando o filtro com um fator de suavização (1/13 para maior suavização)
					sum_red += (1.0 / 13) * pixelColor.R;
					sum_green += (1.0 / 13) * pixelColor.G;
					sum_blue += (1.0 / 13) * pixelColor.B;
				}
			}

			// Calcula a média dos valores
			int redValue = Math::Min((int)sum_red, 255);
			int greenValue = Math::Min((int)sum_green, 255);
			int blueValue = Math::Min((int)sum_blue, 255);

			// Define o pixel filtrado na imagem de saída
			outputImage->SetPixel(i, j, Color::FromArgb(redValue, greenValue, blueValue));
		}
	}

	// Exibe a imagem suavizada (blur) na caixa de saída
	pbox_output->Image = outputImage;
	filterStopwatch->Stop(); // Para a contagem do tempo

	// Atualiza o label com o tempo decorrido
	label_execution_time->Text = "Tempo de execução: " + filterStopwatch->ElapsedMilliseconds.ToString() + " ms"; //<---- Mostrando o tempo no label
}

private: System::Void bt_filter_sharpen_Click(System::Object^ sender, System::EventArgs^ e) {
	filterStopwatch = gcnew System::Diagnostics::Stopwatch(); // Cria uma nova instância do Stopwatch
	filterStopwatch->Start(); // Inicia a contagem do tempo	// Verifica se há uma imagem carregada
	if (pbox_input->Image == nullptr) {
		MessageBox::Show("Por favor, abra uma imagem primeiro.");
		return;
	}

	// Obtém a imagem de entrada
	Bitmap^ inputImage = (Bitmap^)pbox_input->Image;

	// Cria uma nova imagem de saída com as mesmas dimensões
	Bitmap^ outputImage = gcnew Bitmap(inputImage->Width, inputImage->Height);

	// Máscara de nitidez 3x3
	array<int, 2>^ sharpenMask = gcnew array<int, 2>(3, 3) {
		{ 0, -1, 0 },
		{ -1,  5, -1 },
		{ 0, -1,  0 }
	};

	// Aplicando o filtro de nitidez
	for (int i = 1; i < inputImage->Width - 1; i++) {
		for (int j = 1; j < inputImage->Height - 1; j++) {
			double sum_red = 0, sum_green = 0, sum_blue = 0;

			// Percorre os vizinhos 3x3 ao redor do pixel (i, j)
			for (int k = -1; k <= 1; k++) {
				for (int l = -1; l <= 1; l++) {
					Color pixelColor = inputImage->GetPixel(i + k, j + l);
					sum_red += sharpenMask[k + 1, l + 1] * pixelColor.R;
					sum_green += sharpenMask[k + 1, l + 1] * pixelColor.G;
					sum_blue += sharpenMask[k + 1, l + 1] * pixelColor.B;
				}
			}

			// Mantém os valores entre 0 e 255
			int redValue = Math::Max(0, Math::Min(255, (int)sum_red));
			int greenValue = Math::Max(0, Math::Min(255, (int)sum_green));
			int blueValue = Math::Max(0, Math::Min(255, (int)sum_blue));

			// Define o pixel filtrado na imagem de saída
			outputImage->SetPixel(i, j, Color::FromArgb(redValue, greenValue, blueValue));
		}
	}

	// Exibe a imagem processada
	pbox_output->Image = outputImage;
	filterStopwatch->Stop(); // Para a contagem do tempo

	// Atualiza o label com o tempo decorrido
	label_execution_time->Text = "Tempo de execução: " + filterStopwatch->ElapsedMilliseconds.ToString() + " ms"; //<---- Mostrando o tempo no label
}
private: System::Void bt_filter_color_boost_Click(System::Object^ sender, System::EventArgs^ e) {
	filterStopwatch = gcnew System::Diagnostics::Stopwatch(); // Cria uma nova instância do Stopwatch
	filterStopwatch->Start(); // Inicia a contagem do tempo	// Verifica se há uma imagem carregada
	if (pbox_input->Image == nullptr) {
		MessageBox::Show("Por favor, abra uma imagem primeiro.");
		return;
	}

	// Obtém a imagem de entrada
	Bitmap^ inputImage = (Bitmap^)pbox_input->Image;

	// Cria uma nova imagem de saída com as mesmas dimensões
	Bitmap^ outputImage = gcnew Bitmap(inputImage->Width, inputImage->Height);

	// Fatores de aumento de cor ajustáveis
	double redBoostFactor = 1.5;   // 50% de aumento para vermelho
	double blueBoostFactor = 1.25;  // 25% de aumento para azul
	double greenBoostFactor = 1.0;  // Sem alteração para verde

	// Itera sobre cada pixel
	for (int i = 0; i < inputImage->Width; i++) {
		for (int j = 0; j < inputImage->Height; j++) {
			Color pixelColor = inputImage->GetPixel(i, j);

			// Aumenta a intensidade de cada componente de cor (R, G, B)
			int boostedRed = Math::Min((int)(pixelColor.R * redBoostFactor), 255);
			int boostedGreen = Math::Min((int)(pixelColor.G * greenBoostFactor), 255);
			int boostedBlue = Math::Min((int)(pixelColor.B * blueBoostFactor), 255);

			// Define o pixel realçado na imagem de saída
			outputImage->SetPixel(i, j, Color::FromArgb(boostedRed, boostedGreen, boostedBlue));
		}
	}

	// Exibe a imagem de saída
	pbox_output->Image = outputImage;
	filterStopwatch->Stop(); // Para a contagem do tempo

	// Atualiza o label com o tempo decorrido
	label_execution_time->Text = "Tempo de execução: " + filterStopwatch->ElapsedMilliseconds.ToString() + " ms"; //<---- Mostrando o tempo no label
}


private: System::Void bt_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
/*private: System::Void bt_close_copy_Click(System::Object^ sender, System::EventArgs^ e) {
	pbox_copy->Image = nullptr;
	
}
*/
private: System::Void bt_close_output_Click(System::Object^ sender, System::EventArgs^ e) {
	pbox_output->Image = nullptr;
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
