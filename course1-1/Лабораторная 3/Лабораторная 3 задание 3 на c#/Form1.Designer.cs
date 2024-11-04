namespace Лабораторная_3_задание_3_на_c_
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
            pictureBox1 = new PictureBox();
            label4 = new Label();
            textBoxN = new TextBox();
            listBoxN = new ListBox();
            label5 = new Label();
            label6 = new Label();
            CalculateBtn = new Button();
            dataGridView1 = new DataGridView();
            ((System.ComponentModel.ISupportInitialize)pictureBox1).BeginInit();
            ((System.ComponentModel.ISupportInitialize)dataGridView1).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(283, 9);
            label1.Name = "label1";
            label1.Size = new Size(196, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная 3 задание 3";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(21, 29);
            label2.Name = "label2";
            label2.Size = new Size(767, 20);
            label2.TabIndex = 1;
            label2.Text = "Даны действительные числа a,...an^2 . Получить действительную квадратную матрицу, элементами которой ";
            label2.Click += label2_Click;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(96, 49);
            label3.Name = "label3";
            label3.Size = new Size(659, 20);
            label3.TabIndex = 2;
            label3.Text = "являются числа a,...,an^2 , отсортированные по убыванию и расположенные в ней по схеме:";
            label3.Click += label3_Click;
            // 
            // pictureBox1
            // 
            pictureBox1.Image = Properties.Resources._2024_11_04_20_29_01;
            pictureBox1.Location = new Point(280, 81);
            pictureBox1.Name = "pictureBox1";
            pictureBox1.Size = new Size(199, 199);
            pictureBox1.TabIndex = 3;
            pictureBox1.TabStop = false;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(21, 344);
            label4.Name = "label4";
            label4.Size = new Size(80, 20);
            label4.TabIndex = 4;
            label4.Text = "Введите n:";
            // 
            // textBoxN
            // 
            textBoxN.Location = new Point(127, 337);
            textBoxN.Name = "textBoxN";
            textBoxN.Size = new Size(125, 27);
            textBoxN.TabIndex = 5;
            // 
            // listBoxN
            // 
            listBoxN.FormattingEnabled = true;
            listBoxN.Location = new Point(21, 431);
            listBoxN.Name = "listBoxN";
            listBoxN.Size = new Size(343, 104);
            listBoxN.TabIndex = 6;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(74, 399);
            label5.Name = "label5";
            label5.Size = new Size(215, 20);
            label5.TabIndex = 7;
            label5.Text = "Последовательность a,...,an^2";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.ForeColor = Color.Red;
            label6.Location = new Point(742, 81);
            label6.Name = "label6";
            label6.Size = new Size(85, 20);
            label6.TabIndex = 8;
            label6.Text = "Матрица А";
            // 
            // CalculateBtn
            // 
            CalculateBtn.Location = new Point(671, 344);
            CalculateBtn.Name = "CalculateBtn";
            CalculateBtn.Size = new Size(188, 29);
            CalculateBtn.TabIndex = 10;
            CalculateBtn.Text = "Получить матрицу";
            CalculateBtn.UseVisualStyleBackColor = true;
            CalculateBtn.Click += CalculateBtn_Click;
            // 
            // dataGridView1
            // 
            dataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView1.Location = new Point(642, 136);
            dataGridView1.Name = "dataGridView1";
            dataGridView1.RowHeadersWidth = 51;
            dataGridView1.Size = new Size(300, 188);
            dataGridView1.TabIndex = 11;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(995, 564);
            Controls.Add(dataGridView1);
            Controls.Add(CalculateBtn);
            Controls.Add(label6);
            Controls.Add(label5);
            Controls.Add(listBoxN);
            Controls.Add(textBoxN);
            Controls.Add(label4);
            Controls.Add(pictureBox1);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            Load += Form1_Load;
            ((System.ComponentModel.ISupportInitialize)pictureBox1).EndInit();
            ((System.ComponentModel.ISupportInitialize)dataGridView1).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private Label label3;
        private PictureBox pictureBox1;
        private Label label4;
        private TextBox textBoxN;
        private ListBox listBoxN;
        private Label label5;
        private Label label6;
        private Button CalculateBtn;
        private DataGridView dataGridView1;
    }
}
