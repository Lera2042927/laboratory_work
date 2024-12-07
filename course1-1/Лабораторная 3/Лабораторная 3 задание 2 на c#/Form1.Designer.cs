namespace Лабораторная_3_задание_2_на_c_
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
            textBoxK = new TextBox();
            label6 = new Label();
            textBoxL = new TextBox();
            label7 = new Label();
            label8 = new Label();
            textBox_Min_limit = new TextBox();
            textBox_Max_limit = new TextBox();
            dataGridView1 = new DataGridView();
            label9 = new Label();
            listBox1 = new ListBox();
            listBox2 = new ListBox();
            label10 = new Label();
            label11 = new Label();
            CalculateBtn = new Button();
            ((System.ComponentModel.ISupportInitialize)dataGridView1).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(398, 9);
            label1.Name = "label1";
            label1.Size = new Size(249, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная работа 3 задание 2";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(310, 44);
            label2.Name = "label2";
            label2.Size = new Size(464, 20);
            label2.TabIndex = 1;
            label2.Text = "Из двумерного массива A(k,l) сформировать вектор B(k), каждый";
            label2.Click += label2_Click;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(190, 64);
            label3.Name = "label3";
            label3.Size = new Size(716, 20);
            label3.TabIndex = 2;
            label3.Text = "элемент которого равен количеству положительных элементов соответствующей строки матрицы А,";
            label3.Click += label3_Click;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(140, 84);
            label4.Name = "label4";
            label4.Size = new Size(860, 20);
            label4.TabIndex = 3;
            label4.Text = "и вектор C(k), каждый элемент которого равен количеству отрицательных элементов соответсвующей строки матрицы А.";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(-3, 137);
            label5.Name = "label5";
            label5.Size = new Size(197, 20);
            label5.TabIndex = 4;
            label5.Text = "Введите количество строк :";
            // 
            // textBoxK
            // 
            textBoxK.Location = new Point(247, 130);
            textBoxK.Name = "textBoxK";
            textBoxK.Size = new Size(125, 27);
            textBoxK.TabIndex = 5;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(-3, 173);
            label6.Name = "label6";
            label6.Size = new Size(220, 20);
            label6.TabIndex = 6;
            label6.Text = "Введите количество столбцов:";
            // 
            // textBoxL
            // 
            textBoxL.Location = new Point(247, 163);
            textBoxL.Name = "textBoxL";
            textBoxL.Size = new Size(125, 27);
            textBoxL.TabIndex = 7;
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Location = new Point(-3, 211);
            label7.Name = "label7";
            label7.Size = new Size(182, 20);
            label7.TabIndex = 8;
            label7.Text = "Введите нижний предел:";
            // 
            // label8
            // 
            label8.AutoSize = true;
            label8.Location = new Point(-3, 246);
            label8.Name = "label8";
            label8.Size = new Size(185, 20);
            label8.TabIndex = 9;
            label8.Text = "Введите верхний предел:";
            // 
            // textBox_Min_limit
            // 
            textBox_Min_limit.Location = new Point(247, 204);
            textBox_Min_limit.Name = "textBox_Min_limit";
            textBox_Min_limit.Size = new Size(125, 27);
            textBox_Min_limit.TabIndex = 10;
            // 
            // textBox_Max_limit
            // 
            textBox_Max_limit.Location = new Point(247, 246);
            textBox_Max_limit.Name = "textBox_Max_limit";
            textBox_Max_limit.Size = new Size(125, 27);
            textBox_Max_limit.TabIndex = 11;
            // 
            // dataGridView1
            // 
            dataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView1.Location = new Point(425, 141);
            dataGridView1.Name = "dataGridView1";
            dataGridView1.RowHeadersWidth = 51;
            dataGridView1.Size = new Size(676, 227);
            dataGridView1.TabIndex = 12;
            // 
            // label9
            // 
            label9.AutoSize = true;
            label9.ForeColor = Color.Red;
            label9.Location = new Point(737, 118);
            label9.Name = "label9";
            label9.Size = new Size(99, 20);
            label9.TabIndex = 13;
            label9.Text = "Массив A(k,l)";
            // 
            // listBox1
            // 
            listBox1.FormattingEnabled = true;
            listBox1.Location = new Point(65, 437);
            listBox1.Name = "listBox1";
            listBox1.Size = new Size(64, 124);
            listBox1.TabIndex = 14;
            // 
            // listBox2
            // 
            listBox2.FormattingEnabled = true;
            listBox2.Location = new Point(190, 437);
            listBox2.Name = "listBox2";
            listBox2.Size = new Size(58, 124);
            listBox2.TabIndex = 15;
            // 
            // label10
            // 
            label10.AutoSize = true;
            label10.Location = new Point(42, 396);
            label10.Name = "label10";
            label10.Size = new Size(87, 20);
            label10.TabIndex = 16;
            label10.Text = "Вектор B(k)";
            // 
            // label11
            // 
            label11.AutoSize = true;
            label11.Location = new Point(190, 396);
            label11.Name = "label11";
            label11.Size = new Size(87, 20);
            label11.TabIndex = 17;
            label11.Text = "Вектор C(k)";
            // 
            // CalculateBtn
            // 
            CalculateBtn.Location = new Point(211, 339);
            CalculateBtn.Name = "CalculateBtn";
            CalculateBtn.Size = new Size(208, 29);
            CalculateBtn.TabIndex = 18;
            CalculateBtn.Text = "Сформировать";
            CalculateBtn.UseVisualStyleBackColor = true;
            CalculateBtn.Click += button1_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1101, 585);
            Controls.Add(CalculateBtn);
            Controls.Add(label11);
            Controls.Add(label10);
            Controls.Add(listBox2);
            Controls.Add(listBox1);
            Controls.Add(label9);
            Controls.Add(dataGridView1);
            Controls.Add(textBox_Max_limit);
            Controls.Add(textBox_Min_limit);
            Controls.Add(label8);
            Controls.Add(label7);
            Controls.Add(textBoxL);
            Controls.Add(label6);
            Controls.Add(textBoxK);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)dataGridView1).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private Label label3;
        private Label label4;
        private Label label5;
        private TextBox textBoxK;
        private Label label6;
        private TextBox textBoxL;
        private Label label7;
        private Label label8;
        private TextBox textBox_Min_limit;
        private TextBox textBox_Max_limit;
        private DataGridView dataGridView1;
        private Label label9;
        private ListBox listBox1;
        private ListBox listBox2;
        private Label label10;
        private Label label11;
        private Button CalculateBtn;
    }
}
