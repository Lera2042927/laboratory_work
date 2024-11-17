namespace Лабораторная_4_задание_2_на_c_
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
            label6 = new Label();
            label7 = new Label();
            label8 = new Label();
            textBoxK = new TextBox();
            textBoxL = new TextBox();
            textBox_Min_limit = new TextBox();
            textBox_Max_limit = new TextBox();
            CalculateBtn = new Button();
            label9 = new Label();
            dataGridView1 = new DataGridView();
            label10 = new Label();
            label11 = new Label();
            listBox1 = new ListBox();
            listBox2 = new ListBox();
            ((System.ComponentModel.ISupportInitialize)dataGridView1).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(380, 9);
            label1.Name = "label1";
            label1.Size = new Size(196, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная 4 задание 2";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(250, 29);
            label2.Name = "label2";
            label2.Size = new Size(464, 20);
            label2.TabIndex = 1;
            label2.Text = "Из двумерного массива A(k,l) сформировать вектор B(k), каждый";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(138, 49);
            label3.Name = "label3";
            label3.Size = new Size(716, 20);
            label3.TabIndex = 2;
            label3.Text = "элемент которого равен количеству положительных элементов соответствующей строки матрицы А,";
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(86, 69);
            label4.Name = "label4";
            label4.Size = new Size(860, 20);
            label4.TabIndex = 3;
            label4.Text = "и вектор C(k), каждый элемент которого равен количеству отрицательных элементов соответсвующей строки матрицы А.";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(2, 112);
            label5.Name = "label5";
            label5.Size = new Size(193, 20);
            label5.TabIndex = 4;
            label5.Text = "Введите количество строк:";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(2, 145);
            label6.Name = "label6";
            label6.Size = new Size(220, 20);
            label6.TabIndex = 5;
            label6.Text = "Введите количество столбцов:";
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Location = new Point(2, 192);
            label7.Name = "label7";
            label7.Size = new Size(182, 20);
            label7.TabIndex = 6;
            label7.Text = "Введите нижний предел:";
            // 
            // label8
            // 
            label8.AutoSize = true;
            label8.Location = new Point(-1, 233);
            label8.Name = "label8";
            label8.Size = new Size(185, 20);
            label8.TabIndex = 7;
            label8.Text = "Введите верхний предел:";
            // 
            // textBoxK
            // 
            textBoxK.Location = new Point(250, 105);
            textBoxK.Name = "textBoxK";
            textBoxK.Size = new Size(125, 27);
            textBoxK.TabIndex = 8;
            // 
            // textBoxL
            // 
            textBoxL.Location = new Point(250, 142);
            textBoxL.Name = "textBoxL";
            textBoxL.Size = new Size(125, 27);
            textBoxL.TabIndex = 9;
            // 
            // textBox_Min_limit
            // 
            textBox_Min_limit.Location = new Point(250, 189);
            textBox_Min_limit.Name = "textBox_Min_limit";
            textBox_Min_limit.Size = new Size(125, 27);
            textBox_Min_limit.TabIndex = 10;
            textBox_Min_limit.TextChanged += textBox1_TextChanged;
            // 
            // textBox_Max_limit
            // 
            textBox_Max_limit.Location = new Point(250, 233);
            textBox_Max_limit.Name = "textBox_Max_limit";
            textBox_Max_limit.Size = new Size(125, 27);
            textBox_Max_limit.TabIndex = 11;
            // 
            // CalculateBtn
            // 
            CalculateBtn.Location = new Point(206, 336);
            CalculateBtn.Name = "CalculateBtn";
            CalculateBtn.Size = new Size(190, 29);
            CalculateBtn.TabIndex = 12;
            CalculateBtn.Text = "Сформировать";
            CalculateBtn.UseVisualStyleBackColor = true;
            CalculateBtn.Click += CalculateBtn_Click;
            // 
            // label9
            // 
            label9.AutoSize = true;
            label9.ForeColor = Color.Red;
            label9.Location = new Point(671, 105);
            label9.Name = "label9";
            label9.Size = new Size(99, 20);
            label9.TabIndex = 13;
            label9.Text = "Массив А(k,l)";
            // 
            // dataGridView1
            // 
            dataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView1.Location = new Point(414, 129);
            dataGridView1.Name = "dataGridView1";
            dataGridView1.RowHeadersWidth = 51;
            dataGridView1.Size = new Size(619, 250);
            dataGridView1.TabIndex = 14;
            // 
            // label10
            // 
            label10.AutoSize = true;
            label10.Location = new Point(30, 402);
            label10.Name = "label10";
            label10.Size = new Size(87, 20);
            label10.TabIndex = 15;
            label10.Text = "Вектор B(k)";
            // 
            // label11
            // 
            label11.AutoSize = true;
            label11.Location = new Point(250, 402);
            label11.Name = "label11";
            label11.Size = new Size(87, 20);
            label11.TabIndex = 16;
            label11.Text = "Вектор C(k)";
            // 
            // listBox1
            // 
            listBox1.FormattingEnabled = true;
            listBox1.Location = new Point(30, 443);
            listBox1.Name = "listBox1";
            listBox1.Size = new Size(107, 184);
            listBox1.TabIndex = 17;
            // 
            // listBox2
            // 
            listBox2.FormattingEnabled = true;
            listBox2.Location = new Point(247, 443);
            listBox2.Name = "listBox2";
            listBox2.Size = new Size(104, 184);
            listBox2.TabIndex = 18;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1025, 639);
            Controls.Add(listBox2);
            Controls.Add(listBox1);
            Controls.Add(label11);
            Controls.Add(label10);
            Controls.Add(dataGridView1);
            Controls.Add(label9);
            Controls.Add(CalculateBtn);
            Controls.Add(textBox_Max_limit);
            Controls.Add(textBox_Min_limit);
            Controls.Add(textBoxL);
            Controls.Add(textBoxK);
            Controls.Add(label8);
            Controls.Add(label7);
            Controls.Add(label6);
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
        private Label label6;
        private Label label7;
        private Label label8;
        private TextBox textBoxK;
        private TextBox textBoxL;
        private TextBox textBox_Min_limit;
        private TextBox textBox_Max_limit;
        private Button CalculateBtn;
        private Label label9;
        private DataGridView dataGridView1;
        private Label label10;
        private Label label11;
        private ListBox listBox1;
        private ListBox listBox2;
    }
}
