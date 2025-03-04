namespace Лабораторная_7_задание_4_от_лр_5_задания_1_на_c_
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
            textBoxN = new TextBox();
            label5 = new Label();
            textBoxMin_limit = new TextBox();
            label6 = new Label();
            textBoxMax_limit = new TextBox();
            button1 = new Button();
            label7 = new Label();
            label8 = new Label();
            dataGridView1 = new DataGridView();
            dataGridView2 = new DataGridView();
            ((System.ComponentModel.ISupportInitialize)dataGridView1).BeginInit();
            ((System.ComponentModel.ISupportInitialize)dataGridView2).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(397, 9);
            label1.Name = "label1";
            label1.Size = new Size(196, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная 7 задание 4";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(291, 29);
            label2.Name = "label2";
            label2.Size = new Size(489, 20);
            label2.TabIndex = 1;
            label2.Text = " Заданы массивы: вещественных чисел Y(N), натуральных чиселX(N).";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(200, 49);
            label3.Name = "label3";
            label3.Size = new Size(786, 20);
            label3.TabIndex = 2;
            label3.Text = "В массиве Y каждый элемент повторить столько раз, сколько указано в соответствующем элементе массива X. ";
            label3.Click += label3_Click;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(12, 90);
            label4.Name = "label4";
            label4.Size = new Size(80, 20);
            label4.TabIndex = 3;
            label4.Text = "Введите n:";
            // 
            // textBoxN
            // 
            textBoxN.Location = new Point(121, 83);
            textBoxN.Name = "textBoxN";
            textBoxN.Size = new Size(125, 27);
            textBoxN.TabIndex = 4;
            textBoxN.TextChanged += textBox1_TextChanged;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(321, 83);
            label5.Name = "label5";
            label5.Size = new Size(182, 20);
            label5.TabIndex = 5;
            label5.Text = "Введите нижний предел:";
            // 
            // textBoxMin_limit
            // 
            textBoxMin_limit.Location = new Point(524, 76);
            textBoxMin_limit.Name = "textBoxMin_limit";
            textBoxMin_limit.Size = new Size(125, 27);
            textBoxMin_limit.TabIndex = 6;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(710, 79);
            label6.Name = "label6";
            label6.Size = new Size(185, 20);
            label6.TabIndex = 7;
            label6.Text = "Введите верхний предел:";
            // 
            // textBoxMax_limit
            // 
            textBoxMax_limit.Location = new Point(913, 72);
            textBoxMax_limit.Name = "textBoxMax_limit";
            textBoxMax_limit.Size = new Size(125, 27);
            textBoxMax_limit.TabIndex = 8;
            // 
            // button1
            // 
            button1.Location = new Point(397, 132);
            button1.Name = "button1";
            button1.Size = new Size(252, 27);
            button1.TabIndex = 9;
            button1.Text = "Получить массивы";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Location = new Point(108, 185);
            label7.Name = "label7";
            label7.Size = new Size(74, 20);
            label7.TabIndex = 10;
            label7.Text = "Массив X";
            label7.Click += label7_Click;
            // 
            // label8
            // 
            label8.AutoSize = true;
            label8.Location = new Point(473, 185);
            label8.Name = "label8";
            label8.Size = new Size(73, 20);
            label8.TabIndex = 11;
            label8.Text = "Массив Y";
            label8.Click += label8_Click;
            // 
            // dataGridView1
            // 
            dataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView1.Location = new Point(45, 218);
            dataGridView1.Name = "dataGridView1";
            dataGridView1.RowHeadersWidth = 51;
            dataGridView1.Size = new Size(213, 300);
            dataGridView1.TabIndex = 12;
            // 
            // dataGridView2
            // 
            dataGridView2.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView2.Location = new Point(413, 218);
            dataGridView2.Name = "dataGridView2";
            dataGridView2.RowHeadersWidth = 51;
            dataGridView2.Size = new Size(203, 303);
            dataGridView2.TabIndex = 13;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1137, 558);
            Controls.Add(dataGridView2);
            Controls.Add(dataGridView1);
            Controls.Add(label8);
            Controls.Add(label7);
            Controls.Add(button1);
            Controls.Add(textBoxMax_limit);
            Controls.Add(label6);
            Controls.Add(textBoxMin_limit);
            Controls.Add(label5);
            Controls.Add(textBoxN);
            Controls.Add(label4);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)dataGridView1).EndInit();
            ((System.ComponentModel.ISupportInitialize)dataGridView2).EndInit();
            ResumeLayout(false);
            PerformLayout();
        }

        #endregion

        private Label label1;
        private Label label2;
        private Label label3;
        private Label label4;
        private TextBox textBoxN;
        private Label label5;
        private TextBox textBoxMin_limit;
        private Label label6;
        private TextBox textBoxMax_limit;
        private Button button1;
        private Label label7;
        private Label label8;
        private DataGridView dataGridView1;
        private DataGridView dataGridView2;
    }
}
