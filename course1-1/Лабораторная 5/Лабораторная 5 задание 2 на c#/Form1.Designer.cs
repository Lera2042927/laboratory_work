namespace Лабораторная_5_задание_2_на_c_
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
            label5 = new Label();
            label6 = new Label();
            label7 = new Label();
            textBox_x_row_count = new TextBox();
            textBox_x_col_count = new TextBox();
            textBox_y_row_count = new TextBox();
            textBox_y_col_count = new TextBox();
            label8 = new Label();
            label9 = new Label();
            textBox_min_limit = new TextBox();
            textBox_max_limit = new TextBox();
            label10 = new Label();
            dataGridViewX = new DataGridView();
            label11 = new Label();
            dataGridView1 = new DataGridView();
            ((System.ComponentModel.ISupportInitialize)pictureBox1).BeginInit();
            ((System.ComponentModel.ISupportInitialize)dataGridViewX).BeginInit();
            ((System.ComponentModel.ISupportInitialize)dataGridView1).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(266, 9);
            label1.Name = "label1";
            label1.Size = new Size(200, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная 5 задание 2 ";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(159, 29);
            label2.Name = "label2";
            label2.Size = new Size(485, 20);
            label2.TabIndex = 1;
            label2.Text = "Заданы массивы X(M1,N1) и Y(M2,N2) (M1>M2, N1>N2). Создать два ";
            label2.Click += label2_Click;
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(159, 49);
            label3.Name = "label3";
            label3.Size = new Size(510, 20);
            label3.TabIndex = 2;
            label3.Text = "новых двумерных массива, полученных как «разность» массивов X и Y.";
            // 
            // pictureBox1
            // 
            pictureBox1.Image = Properties.Resources._2024_12_02_13_22_59;
            pictureBox1.Location = new Point(-4, 72);
            pictureBox1.Name = "pictureBox1";
            pictureBox1.Size = new Size(757, 310);
            pictureBox1.TabIndex = 3;
            pictureBox1.TabStop = false;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(12, 402);
            label4.Name = "label4";
            label4.Size = new Size(222, 20);
            label4.TabIndex = 4;
            label4.Text = "Количество строк в массиве Х:";
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(12, 438);
            label5.Name = "label5";
            label5.Size = new Size(249, 20);
            label5.TabIndex = 5;
            label5.Text = "Количество столбцов в массиве Х:";
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(12, 476);
            label6.Name = "label6";
            label6.Size = new Size(222, 20);
            label6.TabIndex = 6;
            label6.Text = "Количество строк в массиве У:";
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Location = new Point(12, 513);
            label7.Name = "label7";
            label7.Size = new Size(249, 20);
            label7.TabIndex = 7;
            label7.Text = "Количество столбцов в массиве У:";
            // 
            // textBox_x_row_count
            // 
            textBox_x_row_count.Location = new Point(287, 388);
            textBox_x_row_count.Name = "textBox_x_row_count";
            textBox_x_row_count.Size = new Size(125, 27);
            textBox_x_row_count.TabIndex = 8;
            // 
            // textBox_x_col_count
            // 
            textBox_x_col_count.Location = new Point(287, 431);
            textBox_x_col_count.Name = "textBox_x_col_count";
            textBox_x_col_count.Size = new Size(125, 27);
            textBox_x_col_count.TabIndex = 9;
            // 
            // textBox_y_row_count
            // 
            textBox_y_row_count.Location = new Point(287, 473);
            textBox_y_row_count.Name = "textBox_y_row_count";
            textBox_y_row_count.Size = new Size(125, 27);
            textBox_y_row_count.TabIndex = 10;
            // 
            // textBox_y_col_count
            // 
            textBox_y_col_count.Location = new Point(287, 513);
            textBox_y_col_count.Name = "textBox_y_col_count";
            textBox_y_col_count.Size = new Size(125, 27);
            textBox_y_col_count.TabIndex = 11;
            // 
            // label8
            // 
            label8.AutoSize = true;
            label8.Location = new Point(436, 391);
            label8.Name = "label8";
            label8.Size = new Size(182, 20);
            label8.TabIndex = 12;
            label8.Text = "Введите нижний предел:";
            // 
            // label9
            // 
            label9.AutoSize = true;
            label9.Location = new Point(436, 434);
            label9.Name = "label9";
            label9.Size = new Size(185, 20);
            label9.TabIndex = 13;
            label9.Text = "Введите верхний предел:";
            // 
            // textBox_min_limit
            // 
            textBox_min_limit.Location = new Point(628, 388);
            textBox_min_limit.Name = "textBox_min_limit";
            textBox_min_limit.Size = new Size(125, 27);
            textBox_min_limit.TabIndex = 14;
            // 
            // textBox_max_limit
            // 
            textBox_max_limit.Location = new Point(627, 431);
            textBox_max_limit.Name = "textBox_max_limit";
            textBox_max_limit.Size = new Size(125, 27);
            textBox_max_limit.TabIndex = 15;
            // 
            // label10
            // 
            label10.AutoSize = true;
            label10.Location = new Point(831, 29);
            label10.Name = "label10";
            label10.Size = new Size(74, 20);
            label10.TabIndex = 16;
            label10.Text = "Массив Х";
            // 
            // dataGridViewX
            // 
            dataGridViewX.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridViewX.Location = new Point(799, 52);
            dataGridViewX.Name = "dataGridViewX";
            dataGridViewX.RowHeadersWidth = 51;
            dataGridViewX.Size = new Size(149, 188);
            dataGridViewX.TabIndex = 17;
            // 
            // label11
            // 
            label11.AutoSize = true;
            label11.Location = new Point(1039, 29);
            label11.Name = "label11";
            label11.Size = new Size(73, 20);
            label11.TabIndex = 18;
            label11.Text = "Массив Y";
            // 
            // dataGridView1
            // 
            dataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView1.Location = new Point(1001, 52);
            dataGridView1.Name = "dataGridView1";
            dataGridView1.RowHeadersWidth = 51;
            dataGridView1.Size = new Size(155, 188);
            dataGridView1.TabIndex = 19;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(1261, 593);
            Controls.Add(dataGridView1);
            Controls.Add(label11);
            Controls.Add(dataGridViewX);
            Controls.Add(label10);
            Controls.Add(textBox_max_limit);
            Controls.Add(textBox_min_limit);
            Controls.Add(label9);
            Controls.Add(label8);
            Controls.Add(textBox_y_col_count);
            Controls.Add(textBox_y_row_count);
            Controls.Add(textBox_x_col_count);
            Controls.Add(textBox_x_row_count);
            Controls.Add(label7);
            Controls.Add(label6);
            Controls.Add(label5);
            Controls.Add(label4);
            Controls.Add(pictureBox1);
            Controls.Add(label3);
            Controls.Add(label2);
            Controls.Add(label1);
            Name = "Form1";
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)pictureBox1).EndInit();
            ((System.ComponentModel.ISupportInitialize)dataGridViewX).EndInit();
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
        private Label label5;
        private Label label6;
        private Label label7;
        private TextBox textBox_x_row_count;
        private TextBox textBox_x_col_count;
        private TextBox textBox_y_row_count;
        private TextBox textBox_y_col_count;
        private Label label8;
        private Label label9;
        private TextBox textBox_min_limit;
        private TextBox textBox_max_limit;
        private Label label10;
        private DataGridView dataGridViewX;
        private Label label11;
        private DataGridView dataGridView1;
    }
}
