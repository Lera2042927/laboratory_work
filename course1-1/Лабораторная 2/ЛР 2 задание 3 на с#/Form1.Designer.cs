namespace ЛР_2_задание_3_на_с_
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            label1 = new Label();
            label2 = new Label();
            pictureBox1 = new PictureBox();
            label3 = new Label();
            textBoxE = new TextBox();
            Resultlabel = new Label();
            CalculateBtn = new Button();
            label4 = new Label();
            textBoxN = new TextBox();
            ((System.ComponentModel.ISupportInitialize)pictureBox1).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(12, 9);
            label1.Name = "label1";
            label1.Size = new Size(266, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная работа №2 задание 3";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(12, 41);
            label2.Name = "label2";
            label2.Size = new Size(550, 20);
            label2.TabIndex = 1;
            label2.Text = "Разработать программу для суммы сходящегося ряда с заданной точностью.";
            // 
            // pictureBox1
            // 
            pictureBox1.Image = Properties.Resources._2024_10_20_19_27_38;
            pictureBox1.Location = new Point(21, 84);
            pictureBox1.Name = "pictureBox1";
            pictureBox1.Size = new Size(181, 100);
            pictureBox1.TabIndex = 2;
            pictureBox1.TabStop = false;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(21, 235);
            label3.Name = "label3";
            label3.Size = new Size(154, 20);
            label3.TabIndex = 3;
            label3.Text = "Введите точность е : ";
            // 
            // textBoxE
            // 
            textBoxE.Location = new Point(181, 228);
            textBoxE.Name = "textBoxE";
            textBoxE.Size = new Size(125, 27);
            textBoxE.TabIndex = 4;
            // 
            // Resultlabel
            // 
            Resultlabel.AutoSize = true;
            Resultlabel.Location = new Point(21, 301);
            Resultlabel.Name = "Resultlabel";
            Resultlabel.Size = new Size(75, 20);
            Resultlabel.TabIndex = 5;
            Resultlabel.Text = "Результат";
            // 
            // CalculateBtn
            // 
            CalculateBtn.Location = new Point(181, 301);
            CalculateBtn.Name = "CalculateBtn";
            CalculateBtn.Size = new Size(185, 29);
            CalculateBtn.TabIndex = 6;
            CalculateBtn.Text = "Получить результат";
            CalculateBtn.UseVisualStyleBackColor = true;
            CalculateBtn.Click += CalculateBtn_Click;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(21, 371);
            label4.Name = "label4";
            label4.Size = new Size(161, 20);
            label4.TabIndex = 7;
            label4.Text = "Количество итераций";
            label4.Click += label4_Click;
            // 
            // textBoxN
            // 
            textBoxN.Location = new Point(212, 368);
            textBoxN.Name = "textBoxN";
            textBoxN.Size = new Size(125, 27);
            textBoxN.TabIndex = 8;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(textBoxN);
            Controls.Add(label4);
            Controls.Add(CalculateBtn);
            Controls.Add(Resultlabel);
            Controls.Add(textBoxE);
            Controls.Add(label3);
            Controls.Add(pictureBox1);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            ((System.ComponentModel.ISupportInitialize)pictureBox1).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private PictureBox pictureBox1;
        private Label label3;
        private TextBox textBoxE;
        private Label Resultlabel;
        private Button CalculateBtn;
        private Label label4;
        private TextBox textBoxN;
    }
}
