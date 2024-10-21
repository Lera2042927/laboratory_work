namespace лр__2_задание_1_на_с_
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
            textBoxA = new TextBox();
            textBoxB = new TextBox();
            textBoxH = new TextBox();
            listBox1 = new ListBox();
            listBox2 = new ListBox();
            label6 = new Label();
            label7 = new Label();
            CalculateBtn = new Button();
            pictureBox1 = new PictureBox();
            ((System.ComponentModel.ISupportInitialize)pictureBox1).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(12, 9);
            label1.Name = "label1";
            label1.Size = new Size(266, 20);
            label1.TabIndex = 1;
            label1.Text = "Лабораторная работа №2 задание 1";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(12, 41);
            label2.Name = "label2";
            label2.Size = new Size(521, 20);
            label2.TabIndex = 2;
            label2.Text = "Вычислить и вывести таблицу функции y=f(x) в интервале [a,b] с шагом h";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(22, 304);
            label3.Name = "label3";
            label3.Size = new Size(260, 20);
            label3.TabIndex = 4;
            label3.Text = "Введите начальную точку отрезка а:";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(22, 348);
            label4.Name = "label4";
            label4.Size = new Size(253, 20);
            label4.TabIndex = 5;
            label4.Text = "Введите конечную точку отрезка b:";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(22, 394);
            label5.Name = "label5";
            label5.Size = new Size(138, 20);
            label5.TabIndex = 6;
            label5.Text = "Введите шаг для h:";
            // 
            // textBoxA
            // 
            textBoxA.Location = new Point(301, 301);
            textBoxA.Name = "textBoxA";
            textBoxA.Size = new Size(125, 27);
            textBoxA.TabIndex = 7;
            // 
            // textBoxB
            // 
            textBoxB.Location = new Point(301, 348);
            textBoxB.Name = "textBoxB";
            textBoxB.Size = new Size(125, 27);
            textBoxB.TabIndex = 8;
            // 
            // textBoxH
            // 
            textBoxH.Location = new Point(301, 394);
            textBoxH.Name = "textBoxH";
            textBoxH.Size = new Size(125, 27);
            textBoxH.TabIndex = 9;
            // 
            // listBox1
            // 
            listBox1.FormattingEnabled = true;
            listBox1.Location = new Point(529, 170);
            listBox1.Name = "listBox1";
            listBox1.Size = new Size(87, 104);
            listBox1.TabIndex = 10;
            // 
            // listBox2
            // 
            listBox2.FormattingEnabled = true;
            listBox2.Location = new Point(665, 170);
            listBox2.Name = "listBox2";
            listBox2.Size = new Size(83, 104);
            listBox2.TabIndex = 11;
            listBox2.SelectedIndexChanged += listBox2_SelectedIndexChanged;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(558, 147);
            label6.Name = "label6";
            label6.Size = new Size(18, 20);
            label6.TabIndex = 12;
            label6.Text = "X";
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Location = new Point(700, 147);
            label7.Name = "label7";
            label7.Size = new Size(17, 20);
            label7.TabIndex = 13;
            label7.Text = "Y";
            // 
            // CalculateBtn
            // 
            CalculateBtn.Location = new Point(558, 322);
            CalculateBtn.Name = "CalculateBtn";
            CalculateBtn.Size = new Size(174, 29);
            CalculateBtn.TabIndex = 14;
            CalculateBtn.Text = "Получить результат";
            CalculateBtn.UseVisualStyleBackColor = true;
            CalculateBtn.Click += button1_Click;
            // 
            // pictureBox1
            // 
            pictureBox1.Image = Properties.Resources._2024_10_21_15_29_27;
            pictureBox1.Location = new Point(22, 75);
            pictureBox1.Name = "pictureBox1";
            pictureBox1.Size = new Size(342, 92);
            pictureBox1.TabIndex = 15;
            pictureBox1.TabStop = false;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 450);
            Controls.Add(pictureBox1);
            Controls.Add(CalculateBtn);
            Controls.Add(label7);
            Controls.Add(label6);
            Controls.Add(listBox2);
            Controls.Add(listBox1);
            Controls.Add(textBoxH);
            Controls.Add(textBoxB);
            Controls.Add(textBoxA);
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
        private TextBox textBoxA;
        private TextBox textBoxB;
        private TextBox textBoxH;
        private ListBox listBox1;
        private ListBox listBox2;
        private Label label6;
        private Label label7;
        private Button CalculateBtn;
        private PictureBox pictureBox1;
    }
}
