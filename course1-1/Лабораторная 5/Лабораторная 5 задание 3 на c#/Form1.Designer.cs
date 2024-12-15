namespace Лабораторная_5_задание_3_на_c_
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
            textBoxN = new TextBox();
            label4 = new Label();
            textBoxMin_limit = new TextBox();
            label5 = new Label();
            textBoxMax_limit = new TextBox();
            label6 = new Label();
            dataGridView1 = new DataGridView();
            label7 = new Label();
            dataGridView2 = new DataGridView();
            button1 = new Button();
            ((System.ComponentModel.ISupportInitialize)dataGridView1).BeginInit();
            ((System.ComponentModel.ISupportInitialize)dataGridView2).BeginInit();
            SuspendLayout();
            // 
            // label1
            // 
            label1.AutoSize = true;
            label1.Location = new Point(233, 9);
            label1.Name = "label1";
            label1.Size = new Size(290, 20);
            label1.TabIndex = 0;
            label1.Text = "Лабораторная работа 5 задание 3 на с#";
            // 
            // label2
            // 
            label2.AutoSize = true;
            label2.Location = new Point(142, 29);
            label2.Name = "label2";
            label2.Size = new Size(530, 20);
            label2.TabIndex = 1;
            label2.Text = "Задан массив Х(N). Сначала удалить из него все элементы, кратные 3, 4, 5. ";
            // 
            // label3
            // 
            label3.AutoSize = true;
            label3.Location = new Point(-1, 79);
            label3.Name = "label3";
            label3.Size = new Size(325, 20);
            label3.TabIndex = 2;
            label3.Text = "Введите размерность одномерного массива:";
            // 
            // textBoxN
            // 
            textBoxN.Location = new Point(348, 72);
            textBoxN.Name = "textBoxN";
            textBoxN.Size = new Size(125, 27);
            textBoxN.TabIndex = 3;
            // 
            // label4
            // 
            label4.AutoSize = true;
            label4.Location = new Point(-1, 119);
            label4.Name = "label4";
            label4.Size = new Size(182, 20);
            label4.TabIndex = 4;
            label4.Text = "Введите нижний предел:";
            // 
            // textBoxMin_limit
            // 
            textBoxMin_limit.Location = new Point(210, 112);
            textBoxMin_limit.Name = "textBoxMin_limit";
            textBoxMin_limit.Size = new Size(125, 27);
            textBoxMin_limit.TabIndex = 5;
            // 
            // label5
            // 
            label5.AutoSize = true;
            label5.Location = new Point(-4, 168);
            label5.Name = "label5";
            label5.Size = new Size(185, 20);
            label5.TabIndex = 6;
            label5.Text = "Введите верхний предел:";
            // 
            // textBoxMax_limit
            // 
            textBoxMax_limit.Location = new Point(210, 168);
            textBoxMax_limit.Name = "textBoxMax_limit";
            textBoxMax_limit.Size = new Size(125, 27);
            textBoxMax_limit.TabIndex = 7;
            // 
            // label6
            // 
            label6.AutoSize = true;
            label6.Location = new Point(70, 287);
            label6.Name = "label6";
            label6.Size = new Size(134, 20);
            label6.TabIndex = 8;
            label6.Text = "Исходный массив";
            // 
            // dataGridView1
            // 
            dataGridView1.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView1.Location = new Point(22, 335);
            dataGridView1.Name = "dataGridView1";
            dataGridView1.RowHeadersWidth = 51;
            dataGridView1.Size = new Size(238, 188);
            dataGridView1.TabIndex = 9;
            // 
            // label7
            // 
            label7.AutoSize = true;
            label7.Location = new Point(428, 287);
            label7.Name = "label7";
            label7.Size = new Size(257, 20);
            label7.TabIndex = 10;
            label7.Text = " Массив после удаления элементов";
            // 
            // dataGridView2
            // 
            dataGridView2.ColumnHeadersHeightSizeMode = DataGridViewColumnHeadersHeightSizeMode.AutoSize;
            dataGridView2.Location = new Point(428, 335);
            dataGridView2.Name = "dataGridView2";
            dataGridView2.RowHeadersWidth = 51;
            dataGridView2.Size = new Size(300, 188);
            dataGridView2.TabIndex = 11;
            // 
            // button1
            // 
            button1.Location = new Point(361, 159);
            button1.Name = "button1";
            button1.Size = new Size(94, 29);
            button1.TabIndex = 12;
            button1.Text = "Получить";
            button1.UseVisualStyleBackColor = true;
            button1.Click += button1_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(800, 600);
            Controls.Add(button1);
            Controls.Add(dataGridView2);
            Controls.Add(label7);
            Controls.Add(dataGridView1);
            Controls.Add(label6);
            Controls.Add(textBoxMax_limit);
            Controls.Add(label5);
            Controls.Add(textBoxMin_limit);
            Controls.Add(label4);
            Controls.Add(textBoxN);
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
        private TextBox textBoxN;
        private Label label4;
        private TextBox textBoxMin_limit;
        private Label label5;
        private TextBox textBoxMax_limit;
        private Label label6;
        private DataGridView dataGridView1;
        private Label label7;
        private DataGridView dataGridView2;
        private Button button1;
    }
}
