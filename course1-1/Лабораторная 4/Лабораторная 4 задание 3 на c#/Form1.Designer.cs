namespace Лабораторная_4_задание_3_на_c_
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
            label5 = new Label();
            listBoxN = new ListBox();
            label6 = new Label();
            dataGridView1 = new DataGridView();
            CalculateBtn = new Button();
            ((System.ComponentModel.ISupportInitialize)pictureBox1).BeginInit();
            ((System.ComponentModel.ISupportInitialize)dataGridView1).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(375, 9);
            label1.Name = "label1";
            label1.Size = new Size(196, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная 4 задание 3";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(118, 29);
            label2.Name = "label2";
            label2.Size = new Size(767, 20);
            label2.TabIndex = 1;
            label2.Text = "Даны действительные числа a,...an^2 . Получить действительную квадратную матрицу, элементами которой ";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(190, 49);
            label3.Name = "label3";
            label3.Size = new Size(659, 20);
            label3.TabIndex = 2;
            label3.Text = "являются числа a,...,an^2 , отсортированные по убыванию и расположенные в ней по схеме:";
            // 
            // pictureBox1
            // 
            pictureBox1.Image = Properties.Resources._2024_11_17_18_14_12;
            pictureBox1.Location = new Point(358, 86);
            pictureBox1.Name = "pictureBox1";
            pictureBox1.Size = new Size(213, 206);
            pictureBox1.TabIndex = 3;
            pictureBox1.TabStop = false;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(12, 320);
            label4.Name = "label4";
            label4.Size = new Size(80, 20);
            label4.TabIndex = 4;
            label4.Text = "Введите n:";
            // 
            // textBoxN
            // 
            textBoxN.Location = new Point(118, 313);
            textBoxN.Name = "textBoxN";
            textBoxN.Size = new Size(125, 27);
            textBoxN.TabIndex = 5;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(92, 369);
            label5.Name = "label5";
            label5.Size = new Size(215, 20);
            label5.TabIndex = 6;
            label5.Text = "Последовательность a,...,an^2";
            // 
            // listBoxN
            // 
            listBoxN.FormattingEnabled = true;
            listBoxN.Location = new Point(12, 392);
            listBoxN.Name = "listBoxN";
            listBoxN.Size = new Size(515, 224);
            listBoxN.TabIndex = 7;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.ForeColor = Color.Red;
            label6.Location = new Point(898, 86);
            label6.Name = "label6";
            label6.Size = new Size(85, 20);
            label6.TabIndex = 8;
            label6.Text = "Матрица A";
            // 
            // dataGridView1
            // 
            dataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView1.Location = new Point(655, 127);
            dataGridView1.Name = "dataGridView1";
            dataGridView1.RowHeadersWidth = 51;
            dataGridView1.Size = new Size(582, 465);
            dataGridView1.TabIndex = 9;
            // 
            // CalculateBtn
            // 
            CalculateBtn.Location = new Point(348, 320);
            CalculateBtn.Name = "CalculateBtn";
            CalculateBtn.Size = new Size(188, 27);
            CalculateBtn.TabIndex = 10;
            CalculateBtn.Text = "Получить матрицу";
            CalculateBtn.UseVisualStyleBackColor = true;
            CalculateBtn.Click += CalculateBtn_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1249, 629);
            Controls.Add(CalculateBtn);
            Controls.Add(dataGridView1);
            Controls.Add(label6);
            Controls.Add(listBoxN);
            Controls.Add(label5);
            Controls.Add(textBoxN);
            Controls.Add(label4);
            Controls.Add(pictureBox1);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
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
        private Label label5;
        private ListBox listBoxN;
        private Label label6;
        private DataGridView dataGridView1;
        private Button CalculateBtn;
    }
}
