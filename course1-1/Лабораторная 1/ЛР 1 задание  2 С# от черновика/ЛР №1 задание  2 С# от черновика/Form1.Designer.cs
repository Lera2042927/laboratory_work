namespace ЛР__1_задание__2_С__от_черновика
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
            label3 = new Label();
            label4 = new Label();
            label5 = new Label();
            textBoxX = new TextBox();
            pictureBox1 = new PictureBox();
            textBoxB = new TextBox();
            textBoxA = new TextBox();
            ResultLabel = new Label();
            CalculateBtn = new Button();
            label6 = new Label();
            ((System.ComponentModel.ISupportInitialize)pictureBox1).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(2, 9);
            label1.Name = "label1";
            label1.Size = new Size(283, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная работа №1 задание №2";
            label1.Click += label1_Click;
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(2, 40);
            label2.Name = "label2";
            label2.Size = new Size(239, 20);
            label2.TabIndex = 1;
            label2.Text = "Вычислить значение выражения";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(11, 339);
            label3.Name = "label3";
            label3.Size = new Size(146, 20);
            label3.TabIndex = 3;
            label3.Text = "Введите значение x";
            label3.Click += label3_Click;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(9, 387);
            label4.Name = "label4";
            label4.Size = new Size(148, 20);
            label4.TabIndex = 4;
            label4.Text = "Введите значение b";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(9, 438);
            label5.Name = "label5";
            label5.Size = new Size(147, 20);
            label5.TabIndex = 5;
            label5.Text = "Введите значение a";
            label5.Click += label5_Click;
            // 
            // textBoxX
            // 
            textBoxX.Location = new Point(178, 336);
            textBoxX.Name = "textBoxX";
            textBoxX.Size = new Size(376, 27);
            textBoxX.TabIndex = 6;
            // 
            // pictureBox1
            // 
            pictureBox1.Image = Properties.Resources.photo_2024_09_22_16_37_451;
            pictureBox1.Location = new Point(12, 72);
            pictureBox1.Name = "pictureBox1";
            pictureBox1.Size = new Size(707, 255);
            pictureBox1.TabIndex = 7;
            pictureBox1.TabStop = false;
            // 
            // textBoxB
            // 
            textBoxB.Location = new Point(178, 380);
            textBoxB.Name = "textBoxB";
            textBoxB.Size = new Size(376, 27);
            textBoxB.TabIndex = 8;
            // 
            // textBoxA
            // 
            textBoxA.Location = new Point(178, 431);
            textBoxA.Name = "textBoxA";
            textBoxA.Size = new Size(376, 27);
            textBoxA.TabIndex = 10;
            // 
            // ResultLabel
            // 
            ResultLabel.AutoSize = true;
            ResultLabel.Location = new Point(12, 507);
            ResultLabel.Name = "ResultLabel";
            ResultLabel.Size = new Size(78, 20);
            ResultLabel.TabIndex = 11;
            ResultLabel.Text = "Результат:";
            ResultLabel.Click += ResultLabel_Click;
            // 
            // CalculateBtn
            // 
            CalculateBtn.Location = new Point(206, 485);
            CalculateBtn.Name = "CalculateBtn";
            CalculateBtn.Size = new Size(298, 42);
            CalculateBtn.TabIndex = 12;
            CalculateBtn.Text = "Получить результат";
            CalculateBtn.UseVisualStyleBackColor = true;
            CalculateBtn.Click += CalculateBtn_Click;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(14, 566);
            label6.Name = "label6";
            label6.Size = new Size(70, 20);
            label6.TabIndex = 13;
            label6.Text = "Условие:";
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1505, 755);
            Controls.Add(label6);
            Controls.Add(CalculateBtn);
            Controls.Add(ResultLabel);
            Controls.Add(textBoxA);
            Controls.Add(textBoxB);
            Controls.Add(pictureBox1);
            Controls.Add(textBoxX);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(label3);
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
        private Label label3;
        private Label label4;
        private Label label5;
        private TextBox textBoxX;
        private PictureBox pictureBox1;
        private TextBox textBoxB;
        private TextBox textBoxA;
        private Label ResultLabel;
        private Button CalculateBtn;
        private Label label6;
    }
}
